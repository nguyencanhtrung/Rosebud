#include "core.h"

int main(void){

	// set_csr(mie, MIP_MEIP);
	// set_csr(mstatus, MSTATUS_MIE);
	
	volatile unsigned short * sh_test  = (volatile unsigned short *) 0x0700A;

	struct Desc packet;
	unsigned int start_time, end_time;
	int offset = 0; 
	write_debug(core_id());
	write_debug(read_timer_high());
	reset_timer();
	write_dram_flags(0xffffffff);
	dram_flag_reset(5);
	write_dram_flags(0x00000000);
	
	// Do this at the beginnig, so scheduler can fill the slots while 
	// initializing other things.
	write_timer_interval(0x00000200);
	set_masks(0x3F); //enable all but dram
	init_slots(8, 0x200A, 2048);

	while (1){
		if (in_pkt_ready()){
	 		
			start_time = read_timer_low();
			read_in_pkt(&packet);
			packet.data = (unsigned int *)(((unsigned int)packet.data)+offset);
	
			if (packet.port==0){
				packet.port = 1;
				*sh_test += 1;
			} else {
				packet.port = 0;
				*(sh_test+1) += 1;
			}

		  safe_pkt_done_msg(&packet);
			safe_dram_write(0xAAAAAAAA, 0xBBBBBBBB, &packet);

	 		end_time = read_timer_low();
			write_debug (end_time - start_time);

  	}
  }
  
  return 1;
}
