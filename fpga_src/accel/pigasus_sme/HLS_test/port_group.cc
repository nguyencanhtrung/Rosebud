#include "ap_int.h"

bool is_http(ap_uint<16> port);

bool port_group(bool is_tcp, ap_uint<16> src_port, ap_uint<16> dst_port, ap_uint<13> rule_ID_in) {
  #pragma HLS INTERFACE mode=ap_none port=src_port
  #pragma HLS INTERFACE mode=ap_none port=dst_port
  #pragma HLS INTERFACE mode=ap_none port=is_tcp
  #pragma HLS INTERFACE mode=ap_none port=rule_ID_in
  #pragma HLS INTERFACE ap_ctrl_none port=return

  #pragma HLS PIPELINE II=1

  // Common ports
  bool src_port_is_http = is_http(src_port);
  bool dst_port_is_http = is_http(dst_port);
  bool src_port_is_file_data = is_http(src_port) || (src_port==110) || (src_port==143);
  bool dst_port_is_file_data = is_http(dst_port) || (dst_port==110) || (dst_port==143);
  // bool src_port_is_ftp = (src_port==21) || (src_port==2100) || (src_port==3535);
  bool dst_port_is_ftp = (dst_port==21) || (dst_port==2100) || (dst_port==3535);

  if ( (rule_ID_in==1018) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==732) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==509) && (is_tcp) && true && (dst_port==24800) )
    return true;
  if ( (rule_ID_in==139) && (is_tcp) && true && (dst_port==3689) )
    return true;
  if ( (rule_ID_in==2945) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3528) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4222) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5060) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6595) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6607) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6960) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7184) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1366) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1365) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1364) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1363) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1362) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1361) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1360) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1359) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1357) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1356) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1333) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1282) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1281) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1272) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1271) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1270) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1269) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1268) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1255) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1226) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1191) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1190) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1189) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1181) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1180) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1179) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1178) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1177) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1176) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1101) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1100) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1099) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1098) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1097) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1095) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1094) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1093) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1002) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==996) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==995) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==994) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==993) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1407) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1439) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1427) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1462) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1460) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1459) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1454) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1452) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1451) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1450) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1449) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1515) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1514) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1511) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1510) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1509) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1508) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1507) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1586) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1585) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1584) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1583) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1581) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1617) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1673) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1672) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1671) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1686) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1769) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1767) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1764) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1762) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1761) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1846) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1844) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1843) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2075) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2073) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2072) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2071) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2070) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2069) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2068) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2067) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2066) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2064) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2061) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2077) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2168) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2167) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2166) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2163) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2162) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2161) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2160) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2159) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2156) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2155) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2147) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2235) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2234) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2233) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2265) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2278) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2284) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2302) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2301) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2158) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2157) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2392) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2390) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2387) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2386) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2385) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2384) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2446) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2459) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2485) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2498) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2497) && (is_tcp) && true && ((dst_port==25) || (dst_port==2525) || (dst_port==465) || (dst_port==587)) )
    return true;
  if ( (rule_ID_in==2496) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2495) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2544) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2543) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2542) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2541) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2540) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2539) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2538) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2549) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2681) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2679) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2678) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2677) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2676) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2674) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2688) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2687) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2804) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2799) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2796) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2793) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2788) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2787) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2786) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2785) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2784) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2783) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2833) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2856) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2869) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2867) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2865) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2863) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2862) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2948) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2966) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2965) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2964) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3071) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3070) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3069) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3068) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3067) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3066) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3065) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3041) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3039) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3038) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3036) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3035) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3034) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3030) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3029) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3028) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3027) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3026) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3025) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3024) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3147) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3146) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3145) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3144) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3139) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3155) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3203) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3250) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3248) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3247) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3246) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3243) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3284) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3366) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3365) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3363) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3362) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3361) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3352) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3351) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2944) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2154) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2074) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1890) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1845) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1760) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1582) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1512) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1464) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1461) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==334) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==155) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3450) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3449) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3448) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3447) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3446) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3445) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3444) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3443) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3442) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3441) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3437) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3435) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3434) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3433) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3484) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3513) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3561) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3560) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3558) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3556) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3554) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3553) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3552) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3550) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3547) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3546) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3545) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3645) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3638) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3637) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3636) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3700) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3759) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3757) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3756) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3752) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3748) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3747) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3765) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3806) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3805) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3867) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3866) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3864) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3861) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3860) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3944) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3933) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3932) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3930) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3929) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3928) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3927) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3926) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3925) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3924) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3923) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3922) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3961) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3960) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3959) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4020) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4018) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4017) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4016) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4007) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4006) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4005) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4004) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4002) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4000) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3999) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3997) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3996) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3995) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3994) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4140) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4130) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4217) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4216) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4215) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4213) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4212) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4203) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4200) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4199) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4198) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4191) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4225) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4324) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4322) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4321) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4319) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4318) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4316) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4314) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4313) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4312) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4310) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4309) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4308) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4373) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4429) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4428) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4423) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4421) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4531) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4521) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4519) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4513) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4511) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4510) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4642) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4641) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4640) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4639) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4635) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4631) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4630) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4629) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4699) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4697) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4696) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4694) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4692) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4691) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4690) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4707) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4794) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4791) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4788) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4787) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4785) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4782) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4781) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4858) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4849) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4899) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4926) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4913) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4911) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5007) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4996) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4991) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4989) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4988) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5016) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5038) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5094) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5090) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5089) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5088) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5087) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5161) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5180) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5203) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5192) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5257) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5210) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5201) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5200) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5197) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5194) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5193) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5191) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5273) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5272) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5271) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5270) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5269) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5268) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5267) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5266) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5342) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5339) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5332) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5325) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5321) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5320) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5410) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5400) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5399) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5398) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5397) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5390) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5388) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5520) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5519) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5515) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5514) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5494) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5474) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5473) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5472) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5470) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5616) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5614) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5611) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5610) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3737) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3736) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5654) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5652) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5650) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5649) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5725) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5723) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5722) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5721) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5720) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5719) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5718) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5717) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5716) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5799) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5798) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5797) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5796) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5795) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5794) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5793) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5792) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5791) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5785) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5783) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5802) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5849) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5848) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5847) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5846) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5845) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5844) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5855) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5873) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5870) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5906) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5894) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5893) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5941) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5938) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5937) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6025) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6024) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6017) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6015) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6014) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6012) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6009) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6008) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6005) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6003) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5995) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6061) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6123) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6099) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6097) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6095) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6159) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6211) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6205) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6204) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6259) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6257) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6256) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6255) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6254) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6253) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6252) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6251) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6250) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6249) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6248) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6262) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6283) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6282) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6293) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6338) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6337) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6336) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6335) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6333) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6359) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6370) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6395) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6394) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6393) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6392) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6391) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6390) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6453) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6538) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6535) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6534) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6533) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6530) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6529) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6587) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6614) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6615) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6628) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6647) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6646) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6645) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6643) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6642) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6708) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6763) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6762) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6761) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6760) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6757) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6756) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6755) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6754) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6753) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6752) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6751) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6750) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6748) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6747) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6746) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6745) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6744) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6743) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6741) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6740) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6829) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6827) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6826) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6825) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6824) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6823) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6822) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6821) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6820) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6894) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6933) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6916) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6914) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6913) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6912) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6910) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6908) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6951) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6952) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6963) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7002) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7001) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7000) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6999) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6998) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6997) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6996) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6995) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7132) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7131) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7130) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7129) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7128) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7112) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7109) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7108) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7107) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7106) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7207) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7206) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6258) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1235) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2815) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5162) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5463) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1372) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1561) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2334) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2447) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1789) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1788) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1787) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1598) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1597) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3772) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3771) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4134) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4282) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4418) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5043) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6232) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1399) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1398) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1397) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1396) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1395) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1394) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1393) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1390) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1389) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1371) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1370) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1369) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1368) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1367) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1344) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1343) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1275) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1267) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1259) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1258) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1257) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1252) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1251) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1250) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1249) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1248) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1247) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1246) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1245) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1243) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1239) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1238) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1237) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1224) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1223) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1222) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1217) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1216) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1215) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1214) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1213) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1212) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1211) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1210) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1204) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1203) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1201) && (is_tcp) && true && (dst_port==82) )
    return true;
  if ( (rule_ID_in==1196) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1193) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1192) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1171) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1170) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1169) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1168) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1165) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1156) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1155) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1154) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1153) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1152) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1151) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1150) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1149) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1148) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1147) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1146) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1141) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1140) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1126) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1117) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1116) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1115) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1114) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1109) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1108) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1107) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1105) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1104) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1103) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1057) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1056) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1055) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1052) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1051) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1026) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1025) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1024) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1023) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1022) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1021) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1015) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1006) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==998) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==997) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==973) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==972) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==971) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==970) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==969) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==962) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==961) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==960) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==956) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==949) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==943) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==942) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==941) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==940) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==935) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==934) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==865) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==858) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==857) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==702) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==701) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==700) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==699) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==689) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==688) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==687) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==686) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==685) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==683) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==614) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==613) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==570) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==569) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==568) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==567) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==566) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==565) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==564) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==563) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==531) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==530) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==482) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==481) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==480) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==479) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==475) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==474) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==473) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==472) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==406) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1405) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1443) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1442) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1437) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1436) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1435) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1434) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1433) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1432) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1431) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1430) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1420) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1419) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1418) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1417) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1458) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1457) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1456) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1455) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1484) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1483) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1481) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1540) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1539) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1538) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1544) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1543) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1542) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1556) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1555) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1554) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1551) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1568) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1575) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1615) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1614) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1613) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1612) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1611) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1610) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1609) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1608) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1607) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1606) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1605) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1604) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1603) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1602) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1601) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1600) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1599) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1594) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1593) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1622) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1618) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1648) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1646) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1643) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1642) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1641) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1663) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1662) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1666) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1677) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1676) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1675) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1688) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1697) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1696) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1709) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1707) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1706) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1730) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1748) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1747) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1743) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1742) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1741) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1739) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1738) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1756) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1755) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1806) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1805) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1804) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1803) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1794) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1816) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1815) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1854) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1869) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1868) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1867) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1866) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1865) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1879) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1878) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1877) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1928) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1927) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1949) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1948) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1992) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1991) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2022) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2021) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2020) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2019) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2018) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2017) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2129) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2128) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2127) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2126) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2165) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2164) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2187) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1090) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2223) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2222) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2221) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2218) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2260) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2259) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2279) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2295) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2294) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2293) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2292) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2312) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2311) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2310) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2309) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2308) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2307) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2306) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2305) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2304) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2303) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2341) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2400) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2399) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2398) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2415) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2414) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2413) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2412) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2445) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2444) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2443) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2516) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2515) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2513) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2527) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2535) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2575) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2573) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2572) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2566) && (is_tcp) && true && (dst_port==8087) )
    return true;
  if ( (rule_ID_in==2565) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2601) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2761) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2760) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2764) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2827) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2826) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2894) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2893) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2910) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2909) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2908) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2907) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2930) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2963) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2962) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2961) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2960) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2959) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2958) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3009) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3008) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3007) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3014) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3017) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3130) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3185) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3206) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3205) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3204) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3337) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3336) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2574) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2016) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1754) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1708) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1576) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1106) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3432) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3502) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3544) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3578) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3734) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3766) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3796) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3833) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3843) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3868) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3884) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3918) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3917) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3954) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3957) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4027) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4107) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4184) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4183) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4189) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4188) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4187) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4295) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4294) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4303) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4296) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4333) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4332) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4331) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4365) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4366) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4405) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4435) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4438) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4452) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4451) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4481) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4888) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5026) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5106) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5245) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5407) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5556) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5555) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5950) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5949) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6138) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6558) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7182) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==7181) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1161) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3374) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5075) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5074) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5139) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5137) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6064) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6341) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6454) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6641) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6905) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4402) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4401) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4400) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4399) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4398) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4397) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4396) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4395) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4394) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4393) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1292) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1229) && (is_tcp) && (src_port==1935) && true )
    return true;
  if ( (rule_ID_in==1228) && (is_tcp) && true && (dst_port==1935) )
    return true;
  if ( (rule_ID_in==1183) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1137) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1136) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1135) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1134) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1133) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1111) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==875) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1403) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1480) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1479) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1792) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1791) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1782) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1781) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1898) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1897) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1896) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1895) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2038) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2037) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2089) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2116) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2244) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2243) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2256) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2277) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2337) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2336) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2416) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2438) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2437) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2436) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2435) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2505) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2504) && (is_tcp) && src_port_is_file_data && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2525) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2526) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2562) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2561) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2564) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2563) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2629) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2668) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2659) && (is_tcp) && (src_port==1935) && true )
    return true;
  if ( (rule_ID_in==2708) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2707) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2704) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2703) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2732) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2731) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2730) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2729) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2753) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2823) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2822) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2821) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2820) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2819) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2838) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2837) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2836) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2835) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2834) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2831) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2830) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2825) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2844) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2884) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2883) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2881) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2880) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2889) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2888) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2947) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2946) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2939) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2938) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2957) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2970) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2969) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3006) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3005) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3004) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3003) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3002) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3020) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3019) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3016) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3063) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3062) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3061) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3060) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3059) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3058) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3057) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3056) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3055) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3054) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3053) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3052) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3051) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3050) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3049) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3048) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3047) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3046) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3045) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3044) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3043) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3042) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3091) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3090) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3088) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3087) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3086) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3114) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3113) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3112) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3104) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3103) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3102) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3101) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3100) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3099) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3098) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3097) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3096) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3095) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3119) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3118) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3184) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3183) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3193) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3192) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3191) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3190) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3202) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3201) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3200) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3199) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3223) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3214) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3274) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3273) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3272) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3271) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3270) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3269) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3268) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3267) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3265) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3264) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3282) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3281) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3280) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3279) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3308) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3307) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3306) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3305) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3304) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3302) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3301) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3297) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3296) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3295) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3294) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3293) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3292) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3291) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3290) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3289) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3320) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3319) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3345) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3344) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3379) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2118) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2117) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2053) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2052) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1813) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1812) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1811) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1810) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1807) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1089) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1087) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1086) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==421) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==420) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==419) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==418) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==357) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3407) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3406) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3403) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3402) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3397) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3396) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3394) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3391) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3390) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3385) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3384) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3383) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3382) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3411) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3475) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3474) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3473) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3472) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3462) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3461) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3459) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3458) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3457) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3456) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3455) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3453) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3452) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3451) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3504) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3527) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3562) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3589) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3588) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3587) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3586) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3585) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3584) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3583) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3582) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3581) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3580) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3579) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3572) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3571) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3570) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3569) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3568) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3567) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3566) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3565) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3610) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3609) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3632) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3631) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3629) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3628) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3627) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3680) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3679) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3678) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3677) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3676) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3675) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3674) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3671) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3670) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3669) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3668) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3667) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3666) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3665) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3664) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3663) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3662) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3661) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3699) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3698) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3696) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3695) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3694) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3693) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3692) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3691) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3690) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3689) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3688) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3687) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3686) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3685) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3684) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3683) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3682) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3681) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3718) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3717) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3716) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3715) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3710) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3709) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3731) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3730) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3729) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3728) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3746) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3745) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3744) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3743) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3742) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3777) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3776) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3775) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3791) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3790) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3789) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3788) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3787) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3786) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3785) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3784) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3783) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3781) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3793) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3792) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3812) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3811) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3810) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3809) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3836) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3835) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3834) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3832) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3831) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3826) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3825) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3824) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3823) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3821) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3820) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3819) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3859) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3856) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3855) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3854) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3853) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3852) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3851) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3850) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3849) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3848) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3847) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3846) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3845) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3881) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3880) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3876) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3875) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3888) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3887) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3886) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3885) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3903) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3902) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3901) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3900) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3899) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3898) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3895) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3905) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3904) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3977) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3976) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3975) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3974) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3973) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3972) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3970) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3969) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3967) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3966) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3965) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3982) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3981) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3980) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3979) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3986) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3985) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3984) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3983) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3990) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4066) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4065) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4064) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4063) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4062) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4061) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4060) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4056) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4055) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4054) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4053) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4052) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4051) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4050) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4049) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4047) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4046) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4045) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4044) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4078) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4077) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4073) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4071) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4070) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4069) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4068) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4100) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4099) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4098) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4097) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4096) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4095) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4094) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4093) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4092) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4091) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4090) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4089) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4088) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4087) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4085) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4084) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4083) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4082) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4081) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4080) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4102) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4101) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4124) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4123) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4122) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4121) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4120) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4115) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4114) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4113) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4112) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4108) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4106) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4105) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4104) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4103) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4129) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4128) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4127) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4126) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4151) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4150) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4149) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4148) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4232) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4228) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4224) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4223) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4235) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4234) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4237) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4245) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4244) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4253) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4252) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4251) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4250) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4284) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4283) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4280) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4279) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4278) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4277) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4276) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4274) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4273) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4271) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4270) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4269) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4268) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4267) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4266) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4265) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4264) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4263) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4262) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4261) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4260) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4259) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4258) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4257) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4256) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4255) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4254) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4300) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4299) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4298) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4297) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4359) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4358) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4356) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4355) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4352) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4351) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4350) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4349) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4348) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4347) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4346) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4345) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4344) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4343) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4342) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4341) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4340) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4339) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4338) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4337) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4336) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4335) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4334) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4364) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4363) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4374) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4404) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4403) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4413) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4444) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4462) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4461) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4460) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4459) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4532) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4530) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4529) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4528) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4527) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4526) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4525) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4517) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4541) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4540) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4545) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4544) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4599) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4598) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4596) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4595) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4594) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4593) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4590) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4589) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4585) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4581) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4579) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4578) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4658) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4657) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4656) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4655) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4654) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4653) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4652) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4651) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4650) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4649) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4648) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4646) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4645) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4644) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4683) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4682) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4686) && (is_tcp) && true && dst_port_is_file_data )
    return true;
  if ( (rule_ID_in==4721) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4720) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4719) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4717) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4716) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4715) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4714) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4712) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4711) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4710) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4731) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4741) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4740) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4737) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4745) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4750) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4753) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4772) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4826) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4820) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4866) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4865) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4864) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4863) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4862) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4861) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4860) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4884) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4933) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4931) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4945) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4942) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4955) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4971) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4970) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5023) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5022) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5021) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5020) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5019) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5018) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5039) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5035) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5102) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5101) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5100) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5099) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5098) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5097) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5126) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5124) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5121) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5147) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5154) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5179) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5178) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5163) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5184) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5212) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5211) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5209) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5215) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5222) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5230) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5229) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5239) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5289) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5288) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5304) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5303) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3801) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5340) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5413) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5412) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5409) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5408) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5405) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5404) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5403) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5402) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5449) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5525) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5524) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5523) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5518) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5510) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5509) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5506) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5505) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5504) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5503) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5502) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5501) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5500) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5499) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5498) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5497) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5459) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5573) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5570) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5576) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5588) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5615) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5613) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5612) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5655) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5663) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5753) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5739) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5734) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5733) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5852) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5856) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5876) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5888) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5887) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5910) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5911) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6026) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6033) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6032) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6042) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6200) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6199) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6213) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6260) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6349) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6581) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6580) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6804) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7027) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7026) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7077) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7076) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==272) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==393) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==402) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==389) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==183) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==142) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==390) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==201) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==368) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==401) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==184) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==380) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==245) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==400) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==381) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==137) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==376) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==164) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==246) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==395) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==391) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==392) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==407) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==408) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==403) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==182) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==412) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==427) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==425) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==439) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==432) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==424) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==440) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==431) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==462) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==466) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==467) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==464) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==465) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==463) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==469) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==505) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==516) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==542) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==543) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==599) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==607) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==627) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==640) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==631) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==638) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==637) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==641) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==639) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==642) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==644) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==645) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==652) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==666) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==675) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==663) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==671) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==673) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==669) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==672) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==661) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==664) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==670) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==667) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==676) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==714) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==727) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==713) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==728) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==730) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==760) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==754) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==761) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==773) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==752) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==745) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==740) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==759) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==748) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==747) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==751) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==742) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==788) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==746) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==741) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==823) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==824) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==830) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==843) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==884) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==887) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==888) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==889) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==881) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==900) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==933) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==964) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1020) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1072) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1120) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1123) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1122) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1124) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1121) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1125) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1158) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1160) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1159) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==1163) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1175) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==1187) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1227) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==1241) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1240) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1373) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1485) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1489) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1726) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1721) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1720) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1768) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1765) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1784) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==1783) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1880) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2258) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2257) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2714) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2854) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==2918) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3125) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3132) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==3357) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3356) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2931) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2758) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2680) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2673) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==2567) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2537) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2536) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2131) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2130) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2049) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==2014) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2005) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2000) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1958) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1853) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1852) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==1851) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==1236) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1232) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==1231) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==1195) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1157) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1088) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1049) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1048) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1047) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1017) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1016) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==959) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==948) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==947) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==946) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==945) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==936) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==916) && (is_tcp) && (src_port==143) && true )
    return true;
  if ( (rule_ID_in==909) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==891) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==886) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==885) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==883) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==882) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==854) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==850) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==848) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==846) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==832) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==831) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==798) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==797) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==796) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==795) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==794) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==793) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==790) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==789) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==787) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==786) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==785) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==784) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==783) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==782) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==781) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==780) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==779) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==778) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==777) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==776) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==775) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==774) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==772) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==771) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==770) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==769) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==768) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==767) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==766) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==765) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==764) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==763) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==762) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==758) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==757) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==756) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==755) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==753) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==750) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==749) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==744) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==743) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==739) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==720) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==697) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==696) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==695) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==694) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==693) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==692) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==690) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==677) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==674) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==668) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==665) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==662) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==660) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==659) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==618) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==617) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==616) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==612) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==611) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==609) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==608) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==606) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==605) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==604) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==603) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==602) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==601) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==600) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==588) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==587) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==586) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==585) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==584) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==583) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==582) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==581) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==580) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==579) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==578) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==577) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==576) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==575) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==574) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==573) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==572) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==571) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==557) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==556) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==550) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==549) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==548) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==547) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==546) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==529) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==528) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==527) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==511) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==504) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==503) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==502) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==485) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==484) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==471) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==470) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==461) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==460) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==459) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==458) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==457) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==456) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==455) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==454) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==453) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==452) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==451) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==450) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==449) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==448) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==447) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==446) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==445) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==444) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==443) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==441) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==438) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==437) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==436) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==435) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==434) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==433) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==426) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==422) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==411) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==410) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==405) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==399) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==398) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==397) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==396) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==394) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==388) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==387) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==386) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==385) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==384) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==383) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==382) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==379) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==378) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==377) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==375) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==374) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==372) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==349) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==288) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==287) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==286) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==270) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==269) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==252) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==241) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==236) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==232) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==228) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==225) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==196) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==170) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==168) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==167) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==158) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==154) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==153) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==149) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==148) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==147) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==145) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==143) && (is_tcp) && (src_port==554) && true )
    return true;
  if ( (rule_ID_in==138) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==135) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==134) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==129) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==122) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==121) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==114) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==109) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==86) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==11) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3427) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==3576) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3575) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==3630) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3624) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3724) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3750) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3882) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3947) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4074) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4275) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==4372) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4370) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4538) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4537) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4535) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4534) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4770) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4829) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4828) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==4854) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==4915) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4914) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5061) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==5091) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5345) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5355) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5354) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==5370) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5369) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5465) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5464) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5599) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5644) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5705) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==6063) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6062) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6589) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1358) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2340) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2339) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3260) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1280) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3714) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3830) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3829) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4507) && (is_tcp) && true && (dst_port_is_http || dst_port==25) )
    return true;
  if ( (rule_ID_in==4568) && (is_tcp) && true && (dst_port_is_http || dst_port==25) )
    return true;
  if ( (rule_ID_in==4567) && (is_tcp) && true && (dst_port_is_http || dst_port==25) )
    return true;
  if ( (rule_ID_in==4566) && (is_tcp) && true && (dst_port_is_http || dst_port==25) )
    return true;
  if ( (rule_ID_in==4587) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4586) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4612) && (is_tcp) && true && (dst_port_is_http || dst_port==25) )
    return true;
  if ( (rule_ID_in==4742) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4987) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5069) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5117) && (is_tcp) && true && (dst_port_is_http || dst_port==25) )
    return true;
  if ( (rule_ID_in==5133) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5159) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5158) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5277) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5138) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5343) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5362) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5466) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5539) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5551) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5726) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5731) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5730) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5755) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5752) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5744) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5741) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5921) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6142) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6268) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6396) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6403) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6443) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6442) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6437) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6436) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6434) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6433) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6452) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6444) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6501) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6536) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7003) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7070) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7068) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==819) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==818) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==825) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==826) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==829) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==828) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==833) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==840) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==821) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==817) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==822) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==820) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==939) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==991) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1119) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1184) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1302) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1560) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1569) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1857) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1957) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1954) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1953) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2047) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2468) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2706) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2705) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2442) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1856) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1558) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1535) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1516) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1465) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1429) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==992) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==847) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==711) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==710) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==709) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==708) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==562) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==561) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==560) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==559) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3633) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3807) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4233) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6785) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1102) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1440) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1902) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2169) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2241) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2280) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2471) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2470) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2469) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3092) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3303) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==510) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==133) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3773) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3877) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3705) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4302) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4301) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4357) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4353) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3703) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3702) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5152) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5240) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5543) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5561) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5557) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5572) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6350) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6474) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5198) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5195) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==430) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==63) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1182) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1591) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1590) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1589) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1588) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1587) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1580) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1578) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1679) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2175) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2174) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2173) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2172) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2171) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2170) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2478) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2477) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2487) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2585) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2675) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2798) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2868) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2866) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2861) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2906) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3040) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3037) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3141) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3252) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3251) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3249) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3245) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3244) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3364) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1770) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1753) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1752) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1751) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1750) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1749) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1014) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==862) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==815) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==814) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==802) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==712) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==619) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==598) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==597) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==596) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==595) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==251) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==157) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3440) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3439) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3438) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3519) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3518) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3559) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3555) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3549) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3548) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3604) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3654) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3650) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3649) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3648) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3647) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3646) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3644) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3755) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3754) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3753) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3760) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3782) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3808) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3797) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3863) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3862) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3948) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3945) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3940) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3939) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3936) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4026) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==4025) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4024) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4022) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4021) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4014) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4012) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4011) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4010) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4009) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4003) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4001) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3998) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4137) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4133) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4132) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4131) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4162) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4214) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4211) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4210) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4208) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4207) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4206) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4202) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4194) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4193) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4192) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4243) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4242) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4241) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4240) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4327) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4323) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4320) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4424) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4420) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4445) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4464) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4515) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4637) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4636) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4679) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4678) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4677) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4676) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4705) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4704) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4703) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4702) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4701) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4695) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4793) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4792) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4790) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4859) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4855) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4853) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4848) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4847) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4846) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4844) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4843) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4842) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4909) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4938) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5014) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5013) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5012) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5011) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5010) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5006) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4999) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4998) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4995) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4994) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5086) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5085) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5084) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5082) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5081) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5079) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5076) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5122) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5238) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5282) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5280) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5275) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5116) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4618) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5336) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5326) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5324) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5391) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5442) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5429) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5536) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5535) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5478) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5471) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5073) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5072) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5071) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5237) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5537) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5582) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4706) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5640) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5639) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5761) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5788) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5787) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5784) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5843) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5857) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5872) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5903) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5940) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6019) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6010) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6004) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6002) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5999) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5998) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5997) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5996) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6125) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6102) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6101) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6100) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6098) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6209) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6237) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6265) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6339) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6358) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6546) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6545) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6544) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6537) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6550) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6601) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6742) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6929) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6928) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6927) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6926) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6925) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6924) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6923) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6922) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6921) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6920) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6909) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7211) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7215) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1012) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1145) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1202) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==364) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==198) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1678) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1701) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1766) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1785) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1947) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1946) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1951) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2153) && (is_tcp) && true && dst_port_is_ftp )
    return true;
  if ( (rule_ID_in==2152) && (is_tcp) && true && (dst_port==20) )
    return true;
  if ( (rule_ID_in==2191) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2600) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2689) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2717) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2716) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2715) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2737) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2736) && (is_tcp) && (src_port==445) && true )
    return true;
  if ( (rule_ID_in==2735) && (is_tcp) && (src_port==445) && true )
    return true;
  if ( (rule_ID_in==2809) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2805) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2832) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2872) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3083) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3143) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3142) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3138) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3360) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3358) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3355) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3354) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3353) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3350) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2242) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==610) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3389) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3387) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3386) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3593) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3653) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3652) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3643) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3642) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3641) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3640) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3639) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3749) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3865) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3874) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3873) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3943) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3931) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3978) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4008) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4165) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4201) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4247) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4287) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4281) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4272) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4307) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4376) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4427) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4458) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4506) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4574) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4643) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4647) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4681) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4669) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4921) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5015) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5008) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5003) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5002) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5092) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5083) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5077) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5214) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5213) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5208) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5207) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5206) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5205) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5248) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5285) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5265) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5264) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5172) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5156) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5041) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4539) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4536) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3857) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3800) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3799) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3798) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5319) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5318) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5437) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5479) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3732) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5335) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5331) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5153) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5547) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5538) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5560) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5552) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5548) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5579) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5760) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5743) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5907) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5923) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5919) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5931) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5930) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5929) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5974) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5994) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6001) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6000) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6034) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6155) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6153) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6149) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6148) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6146) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6144) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6143) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6137) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6135) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6179) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6210) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6261) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6269) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6267) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6266) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6273) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6292) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6304) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6321) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6347) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6334) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6368) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6367) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6441) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6440) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6439) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6438) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6435) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6430) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6449) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6482) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6481) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6475) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6456) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6500) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6505) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6603) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6602) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6597) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6609) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6606) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6605) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6613) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6612) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6632) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6620) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6619) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6617) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6616) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6637) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6636) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6635) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6633) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6644) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6726) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6725) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6727) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6783) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6796) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6792) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6791) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6786) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6799) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6798) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6890) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7028) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7063) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7062) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7061) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7057) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7052) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7071) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7069) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7066) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7064) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5204) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==152) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1037) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1041) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1038) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1040) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1034) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1050) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1058) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1798) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1797) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1795) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1793) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1786) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1903) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2106) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2107) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2335) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2333) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2331) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2329) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2359) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2358) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2480) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2494) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2509) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2627) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2682) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2744) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2903) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2897) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2896) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2895) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2892) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3378) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1833) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1832) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1809) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1808) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1790) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1693) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1377) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1274) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1113) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1112) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==497) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==409) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3405) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3404) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3401) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3400) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3399) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3398) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3393) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3392) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3388) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3413) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3412) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3431) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3430) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3470) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3574) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3573) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3603) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3602) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3595) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3613) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3612) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3620) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3619) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3623) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3719) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3727) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3726) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3722) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4161) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4160) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4159) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4173) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4172) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4171) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4169) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4168) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4167) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4176) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4186) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4185) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4209) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4195) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4288) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4360) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4354) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4524) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4523) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4518) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4565) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4564) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4562) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4561) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4560) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4557) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4556) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4555) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4554) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4553) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4542) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4575) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4597) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4592) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4591) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4588) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4582) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4580) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4606) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4614) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4613) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4610) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4619) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4685) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4722) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4718) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4713) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4709) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4708) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4734) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4747) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4746) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4754) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4761) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4773) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4805) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4889) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4932) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4930) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4937) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4947) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4946) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4968) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4967) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4966) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4965) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4960) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4978) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4973) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4972) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4984) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4983) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5005) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5034) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5047) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5123) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5144) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5143) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5145) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5160) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5188) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5070) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5033) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5338) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5330) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5356) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5361) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5357) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5411) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5406) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5401) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5445) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5444) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5443) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5440) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5430) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5428) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5450) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5507) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5136) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5134) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5542) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5541) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5540) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5564) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5563) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5559) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5553) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5550) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5549) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5571) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5569) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5568) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5575) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5584) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5585) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5727) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5754) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5751) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5750) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5745) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5742) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5738) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5764) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5763) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5935) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5934) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5933) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5932) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6016) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6092) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6154) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6152) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6151) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6150) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6145) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6141) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6140) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6139) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6136) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6134) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6133) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6178) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6270) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6284) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6320) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6371) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6384) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6399) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6398) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6473) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6472) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6604) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6598) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6611) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6610) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6608) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6629) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6618) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6634) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6666) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6655) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6673) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6678) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6707) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6706) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6705) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6704) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6715) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6714) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6717) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6721) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6773) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6772) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6771) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6769) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6782) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6781) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6776) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6775) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6784) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6797) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6795) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6794) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6793) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6790) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6789) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6788) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6787) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6807) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6806) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6805) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6803) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6802) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6801) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6800) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6889) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6897) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7032) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7031) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7029) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7060) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7059) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7058) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7056) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7051) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7050) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7048) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7078) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7067) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7065) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7095) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7156) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7155) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5580) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==1144) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2142) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2141) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2389) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2463) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2462) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2461) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2475) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2912) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2085) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3564) && (is_tcp) && (src_port==448) && true )
    return true;
  if ( (rule_ID_in==3711) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4797) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5048) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5728) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5790) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5789) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5874) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6374) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6373) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6864) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6863) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6900) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==7016) && (is_tcp) && (src_port==445) && true )
    return true;
  if ( (rule_ID_in==7015) && (is_tcp) && (src_port==445) && true )
    return true;
  if ( (rule_ID_in==7014) && (is_tcp) && (src_port==445) && true )
    return true;
  if ( (rule_ID_in==7013) && (is_tcp) && (src_port==389) && true )
    return true;
  if ( (rule_ID_in==7012) && (is_tcp) && ((src_port==25) || (src_port==587)) && true )
    return true;
  if ( (rule_ID_in==7011) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==7010) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==7009) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==7008) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7007) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==7006) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==7005) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==7127) && (is_tcp) && (src_port==445) && true )
    return true;
  if ( (rule_ID_in==7126) && (is_tcp) && (src_port==110) && true )
    return true;
  if ( (rule_ID_in==7164) && (is_tcp) && (src_port==445) && true )
    return true;
  if ( (rule_ID_in==7163) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==7162) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==7161) && (is_tcp) && (src_port==445) && true )
    return true;
  if ( (rule_ID_in==7160) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==7183) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1035) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1036) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1069) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1166) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1172) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1218) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1230) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1428) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1482) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1553) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1552) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1621) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1645) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1644) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1716) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1715) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1737) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1736) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1735) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1825) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1824) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1860) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1950) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1952) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2034) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5491) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5453) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5598) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5922) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6525) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2025) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5249) && (!is_tcp) && true && (dst_port==69) )
    return true;
  if ( (rule_ID_in==6906) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1355) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1276) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1265) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1208) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1207) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1206) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==965) && (is_tcp) && true && (dst_port==7777) )
    return true;
  if ( (rule_ID_in==904) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==839) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==838) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==837) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==836) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==718) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==653) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==633) && (is_tcp) && true && (dst_port==5447) )
    return true;
  if ( (rule_ID_in==632) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==536) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==323) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==189) && (is_tcp) && true && (dst_port==7777) )
    return true;
  if ( (rule_ID_in==188) && (is_tcp) && true && (dst_port==7777) )
    return true;
  if ( (rule_ID_in==187) && (is_tcp) && true && (dst_port==7777) )
    return true;
  if ( (rule_ID_in==132) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==125) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==118) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==117) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==116) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==113) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==112) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==111) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==110) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==108) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==107) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==106) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==105) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==104) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==101) && (is_tcp) && true && (dst_port==1357) )
    return true;
  if ( (rule_ID_in==100) && (is_tcp) && (src_port==503) && true )
    return true;
  if ( (rule_ID_in==99) && (is_tcp) && true && (dst_port==503) )
    return true;
  if ( (rule_ID_in==98) && (is_tcp) && true && (dst_port==501) )
    return true;
  if ( (rule_ID_in==97) && (is_tcp) && (src_port==500) && true )
    return true;
  if ( (rule_ID_in==96) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==95) && (is_tcp) && true && (dst_port==54320) )
    return true;
  if ( (rule_ID_in==94) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==93) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==88) && (is_tcp) && true && (dst_port==58008) )
    return true;
  if ( (rule_ID_in==85) && (is_tcp) && (src_port==5712) && true )
    return true;
  if ( (rule_ID_in==84) && (is_tcp) && true && (dst_port==12667) )
    return true;
  if ( (rule_ID_in==83) && (is_tcp) && true && (dst_port==3132) )
    return true;
  if ( (rule_ID_in==82) && (is_tcp) && true && (dst_port==5600) )
    return true;
  if ( (rule_ID_in==81) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==78) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==77) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==60) && (is_tcp) && true && (dst_port==6666) )
    return true;
  if ( (rule_ID_in==59) && (is_tcp) && (src_port==877) && (dst_port==876) )
    return true;
  if ( (rule_ID_in==58) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==38) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==37) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==36) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==35) && (is_tcp) && (src_port==777) && true )
    return true;
  if ( (rule_ID_in==34) && (is_tcp) && (src_port==30029) && true )
    return true;
  if ( (rule_ID_in==33) && (is_tcp) && true && (dst_port==30029) )
    return true;
  if ( (rule_ID_in==32) && (is_tcp) && true && (dst_port==1480) )
    return true;
  if ( (rule_ID_in==31) && (is_tcp) && true && (dst_port==1480) )
    return true;
  if ( (rule_ID_in==30) && (is_tcp) && true && (dst_port==1480) )
    return true;
  if ( (rule_ID_in==29) && (is_tcp) && true && (dst_port==1480) )
    return true;
  if ( (rule_ID_in==28) && (is_tcp) && (src_port==5555) && true )
    return true;
  if ( (rule_ID_in==26) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==25) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==24) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==23) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==22) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==21) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==6) && (is_tcp) && true && (dst_port==5880) )
    return true;
  if ( (rule_ID_in==5) && (is_tcp) && (src_port==5880) && true )
    return true;
  if ( (rule_ID_in==1913) && (is_tcp) && true && (dst_port==2533) )
    return true;
  if ( (rule_ID_in==2299) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2483) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2482) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2530) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2616) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2615) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2646) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2661) && (is_tcp) && true && (dst_port==58273) )
    return true;
  if ( (rule_ID_in==2660) && (is_tcp) && true && (dst_port==53629) )
    return true;
  if ( (rule_ID_in==2712) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2711) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2710) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3162) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3611) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3614) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3721) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==3720) && (is_tcp) && (src_port==80) && true )
    return true;
  if ( (rule_ID_in==4163) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4379) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4378) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4377) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4502) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4501) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4500) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4499) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4498) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4497) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4496) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4495) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4494) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4493) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4492) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4491) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4490) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4489) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4488) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4487) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4486) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4485) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4484) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4483) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4482) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4605) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4604) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5944) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5971) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==7166) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7165) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7180) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7179) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==220) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==297) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==305) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==311) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==307) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==306) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==304) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==308) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==310) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==309) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==303) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==331) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==337) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==726) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1030) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1031) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1027) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1033) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1032) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1028) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1029) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2125) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2479) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2510) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2592) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2591) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2590) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2613) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2612) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2611) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2610) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2609) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2608) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2607) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2606) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2605) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2604) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==3105) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3314) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3464) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3778) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5426) && (is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==14) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==18) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==197) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==244) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==248) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==247) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==271) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==295) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==294) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==300) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==324) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==345) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==348) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==347) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==356) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==355) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==354) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==359) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==366) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==373) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==487) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==486) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==490) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==488) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==501) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==508) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==522) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==526) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==524) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==525) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==544) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==555) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==553) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==625) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==658) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==678) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==734) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==804) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==880) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==879) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==912) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==932) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==929) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==931) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==963) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==990) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1004) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1003) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1043) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1194) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1242) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==1253) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1256) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1298) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1291) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1290) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1332) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1477) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1546) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1545) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1596) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1717) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1774) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1836) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1840) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1839) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1945) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1941) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1937) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1931) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1989) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1981) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1998) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2060) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2059) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2079) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2086) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2184) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2193) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2220) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2219) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2215) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2212) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2229) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2227) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2236) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2356) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2366) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2375) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2396) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2448) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2603) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2602) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2631) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2649) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2644) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2728) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2727) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2742) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2790) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2767) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2924) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2923) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2922) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2932) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2971) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3001) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3000) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2999) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2998) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2997) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2996) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2995) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2994) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2993) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2992) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2991) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2990) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2989) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2988) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2987) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2986) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2985) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2984) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2983) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3109) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3106) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3124) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3129) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3164) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3178) && (is_tcp) && true && (dst_port_is_http || dst_port==6969) )
    return true;
  if ( (rule_ID_in==3189) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3186) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1077) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3419) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3468) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3599) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3701) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4361) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4371) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4577) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4576) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4749) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4808) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4840) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4883) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4882) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4878) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4891) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4986) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4985) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5017) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5040) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5036) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5057) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5056) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5142) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5173) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5169) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==5216) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5291) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5290) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5387) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5425) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5419) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5418) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5417) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5435) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5486) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5595) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5594) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5608) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5618) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5643) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5695) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5694) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5732) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5767) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5807) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5806) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3919) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==930) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1402) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1401) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1400) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1392) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1391) && (is_tcp) && true && (dst_port_is_http || dst_port==88) )
    return true;
  if ( (rule_ID_in==1388) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1387) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1386) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1385) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1384) && (is_tcp) && (src_port_is_http || (src_port==8264) || (src_port==8500)) && true )
    return true;
  if ( (rule_ID_in==1383) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1380) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1379) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1376) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1374) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1354) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1353) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1350) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1349) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1348) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1347) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1346) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1345) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1340) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1339) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1338) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1337) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1336) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1335) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1331) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1330) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1329) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1328) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1327) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1326) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1325) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1324) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1323) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1322) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1321) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1320) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1319) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1318) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1317) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1316) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1315) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1314) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1313) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1312) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1311) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1310) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1309) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1308) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1307) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1306) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1305) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1304) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1303) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1301) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1300) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1299) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1296) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1295) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1294) && (is_tcp) && true && (dst_port==250) )
    return true;
  if ( (rule_ID_in==1293) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1289) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1288) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1287) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1286) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1285) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1284) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1278) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1277) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1266) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1264) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1263) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==1262) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1261) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1260) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1254) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1234) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1221) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1220) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1209) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1205) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1200) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1188) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1186) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1185) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1174) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1173) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1164) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1162) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1143) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1142) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1139) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1138) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1132) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1128) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1127) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1118) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1110) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1092) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1091) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1085) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1084) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1083) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1082) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1081) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1080) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1079) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1078) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1076) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1075) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1074) && (is_tcp) && true && (dst_port==8899) )
    return true;
  if ( (rule_ID_in==1073) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1070) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1061) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1060) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1059) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1054) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1053) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1046) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==1045) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1044) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1042) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1039) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1019) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1011) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1010) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1009) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1008) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1007) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1005) && (is_tcp) && true && ((dst_port==110) || (dst_port==8080)) )
    return true;
  if ( (rule_ID_in==1001) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1000) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==999) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==989) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==984) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==979) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==978) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==977) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==976) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==975) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==974) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==968) && (is_tcp) && true && ((dst_port>=1024) && (dst_port<=65535)) )
    return true;
  if ( (rule_ID_in==966) && (is_tcp) && true && ((dst_port>=1024) && (dst_port<=65535)) )
    return true;
  if ( (rule_ID_in==955) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==954) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==951) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==950) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==928) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==911) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==910) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==908) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==907) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==906) && (is_tcp) && (src_port==406) && true )
    return true;
  if ( (rule_ID_in==905) && (is_tcp) && true && (dst_port==406) )
    return true;
  if ( (rule_ID_in==903) && (is_tcp) && true && (dst_port==81) )
    return true;
  if ( (rule_ID_in==901) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==899) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==898) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==897) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==896) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==895) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==894) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==893) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==892) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==890) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==878) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==877) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==876) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==872) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==871) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==870) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==869) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==868) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==867) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==855) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==853) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==852) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==851) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==849) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==845) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==844) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==827) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==816) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==813) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==812) && (is_tcp) && true && (dst_port==1433) )
    return true;
  if ( (rule_ID_in==811) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==809) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==808) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==807) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==806) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==805) && (is_tcp) && true && ((dst_port==25) || (dst_port==587)) )
    return true;
  if ( (rule_ID_in==803) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==799) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==791) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==738) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==737) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==735) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==731) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==729) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==725) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==724) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==722) && (is_tcp) && true && (dst_port==1001) )
    return true;
  if ( (rule_ID_in==721) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==719) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==717) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==716) && (is_tcp) && true && (dst_port==2011) )
    return true;
  if ( (rule_ID_in==715) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==707) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==706) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==705) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==704) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==703) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==684) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==682) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==681) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==679) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==657) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==656) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==655) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==654) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==650) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==649) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==648) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==647) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==646) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==643) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==636) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==635) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==634) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==629) && (is_tcp) && true && (dst_port_is_http || (dst_port>=1024)) )
    return true;
  if ( (rule_ID_in==628) && (is_tcp) && true && (dst_port_is_http || (dst_port>=1024)) )
    return true;
  if ( (rule_ID_in==622) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==621) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==620) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==615) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==594) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==593) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==592) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==591) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==590) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==589) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==554) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==552) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==551) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==545) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==540) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==539) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==538) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==537) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==535) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==534) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==521) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==520) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==519) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==518) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==517) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==515) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==514) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==513) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==512) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==507) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==506) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==500) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==496) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==495) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==494) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==493) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==492) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==491) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==489) && (is_tcp) && true && (dst_port==4455) )
    return true;
  if ( (rule_ID_in==468) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==442) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==423) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==417) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==416) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==415) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==414) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==413) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==404) && (is_tcp) && true && (dst_port==22292) )
    return true;
  if ( (rule_ID_in==371) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==370) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==367) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==365) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==363) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==362) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==361) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==360) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==353) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==352) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==351) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==350) && (is_tcp) && true && (dst_port==12080) )
    return true;
  if ( (rule_ID_in==346) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==343) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==342) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==341) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==340) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==339) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==336) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==333) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==332) && (is_tcp) && true && (dst_port==6667) )
    return true;
  if ( (rule_ID_in==330) && (is_tcp) && true && (dst_port==3070) )
    return true;
  if ( (rule_ID_in==329) && (!is_tcp) && true && (dst_port==9023) )
    return true;
  if ( (rule_ID_in==328) && (!is_tcp) && true && (dst_port==9023) )
    return true;
  if ( (rule_ID_in==327) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==326) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==325) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==322) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==321) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==320) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==319) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==318) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==317) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==316) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==315) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==314) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==313) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==312) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==302) && (is_tcp) && true && (dst_port==8080) )
    return true;
  if ( (rule_ID_in==301) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==299) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==298) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==296) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==290) && (is_tcp) && true && (dst_port==6667) )
    return true;
  if ( (rule_ID_in==289) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==284) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==283) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==282) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==281) && (is_tcp) && true && (dst_port==1868) )
    return true;
  if ( (rule_ID_in==280) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==279) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==268) && (is_tcp) && true && (dst_port==99) )
    return true;
  if ( (rule_ID_in==267) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==266) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==265) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==264) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==263) && (is_tcp) && true && (dst_port==143) )
    return true;
  if ( (rule_ID_in==262) && (is_tcp) && true && ((dst_port>=6666) && (dst_port<=6667)) )
    return true;
  if ( (rule_ID_in==261) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==260) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==259) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==258) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==257) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==256) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==255) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==254) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==253) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==250) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==243) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==242) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==227) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==226) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==219) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==218) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==217) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==216) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==215) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==214) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==213) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==212) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==211) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==210) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==209) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==208) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==207) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==206) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==203) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==202) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==200) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==195) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==194) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==193) && (is_tcp) && true && (dst_port==7382) )
    return true;
  if ( (rule_ID_in==192) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==191) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==190) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==186) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==185) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==181) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==178) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==176) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==175) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==174) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==173) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==172) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==169) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==166) && (is_tcp) && (src_port==27374) && true )
    return true;
  if ( (rule_ID_in==165) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==163) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==162) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==161) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==160) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==156) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==146) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==80) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==79) && (!is_tcp) && (src_port==7871) && true )
    return true;
  if ( (rule_ID_in==75) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==74) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==73) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==72) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==71) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==66) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==65) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==39) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1411) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1410) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1409) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1408) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1406) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1404) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1438) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1425) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1423) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1421) && (is_tcp) && true && (dst_port==3337) )
    return true;
  if ( (rule_ID_in==1416) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1415) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1414) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1413) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1412) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1445) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1466) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1476) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1496) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1493) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1492) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1491) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1490) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1487) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1498) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1506) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1522) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1521) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1520) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1519) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1518) && (is_tcp) && true && (dst_port_is_http || dst_port==443) )
    return true;
  if ( (rule_ID_in==1517) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1536) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1534) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1533) && (is_tcp) && true && (dst_port==1314) )
    return true;
  if ( (rule_ID_in==1532) && (is_tcp) && true && (dst_port==1314) )
    return true;
  if ( (rule_ID_in==1531) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1530) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1529) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1528) && (is_tcp) && true && (dst_port==1122) )
    return true;
  if ( (rule_ID_in==1527) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1526) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1525) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1524) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1523) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1537) && (is_tcp) && true && (dst_port_is_http || dst_port==443) )
    return true;
  if ( (rule_ID_in==1541) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1548) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1547) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1559) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1557) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1550) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1549) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1567) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1574) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1573) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1572) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==1571) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1570) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1577) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1616) && (is_tcp) && true && (dst_port_is_http || dst_port==443) )
    return true;
  if ( (rule_ID_in==1595) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1592) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1620) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1619) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1624) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1647) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1640) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1639) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1638) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1637) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1636) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1635) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1634) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1633) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1632) && (is_tcp) && true && (dst_port==8080) )
    return true;
  if ( (rule_ID_in==1631) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1630) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1629) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1628) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1627) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==1626) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1649) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1651) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1650) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1661) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1660) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1659) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1658) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1657) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1656) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1655) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1654) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1653) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1665) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1664) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1674) && (is_tcp) && true && (dst_port==666) )
    return true;
  if ( (rule_ID_in==1670) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1669) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1668) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1667) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1683) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==1682) && (is_tcp) && true && ((dst_port>=1024) && (dst_port<=65535)) )
    return true;
  if ( (rule_ID_in==1681) && (is_tcp) && true && ((dst_port>=1024) && (dst_port<=65535)) )
    return true;
  if ( (rule_ID_in==1680) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1689) && (is_tcp) && true && ((dst_port>=1024) && (dst_port<=65535)) )
    return true;
  if ( (rule_ID_in==1687) && (is_tcp) && true && ((dst_port>=1024) && (dst_port<=65535)) )
    return true;
  if ( (rule_ID_in==1684) && (is_tcp) && true && dst_port_is_ftp )
    return true;
  if ( (rule_ID_in==1694) && (is_tcp) && true && (dst_port==6667) )
    return true;
  if ( (rule_ID_in==1692) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1691) && (is_tcp) && true && (dst_port==91) )
    return true;
  if ( (rule_ID_in==1690) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1700) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1695) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1710) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1705) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1719) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==1714) && (is_tcp) && true && (dst_port==8000) )
    return true;
  if ( (rule_ID_in==1713) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1712) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1728) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1727) && (is_tcp) && true && ((dst_port>=6666) && (dst_port<=7000)) )
    return true;
  if ( (rule_ID_in==1746) && (is_tcp) && true && (dst_port==1039) )
    return true;
  if ( (rule_ID_in==1745) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1744) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1734) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==1731) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1763) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1759) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1758) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1757) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1771) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1772) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1775) && (is_tcp) && true && (dst_port==1314) )
    return true;
  if ( (rule_ID_in==1773) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==1802) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1801) && (is_tcp) && true && (dst_port==6178) )
    return true;
  if ( (rule_ID_in==1800) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1799) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1796) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1780) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1779) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1778) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1777) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1776) && (is_tcp) && true && dst_port_is_ftp )
    return true;
  if ( (rule_ID_in==1814) && (is_tcp) && true && (dst_port==3306) )
    return true;
  if ( (rule_ID_in==1823) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1822) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1821) && (!is_tcp) && true && (dst_port==2090) )
    return true;
  if ( (rule_ID_in==1820) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1819) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1818) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1817) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1724) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1733) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1732) && (is_tcp) && true && (dst_port==9002) )
    return true;
  if ( (rule_ID_in==1831) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1830) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1829) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1828) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1827) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1826) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1850) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1842) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1841) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1838) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1837) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1872) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1871) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1870) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1864) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==1863) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1862) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1861) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1859) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1855) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1887) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1881) && (is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==1876) && (is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==1875) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1874) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1873) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1889) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1901) && (is_tcp) && true && (dst_port==8111) )
    return true;
  if ( (rule_ID_in==1900) && (is_tcp) && true && (dst_port==8256) )
    return true;
  if ( (rule_ID_in==1899) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1894) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1893) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1891) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1930) && (is_tcp) && true && ((dst_port==25) || (dst_port==465) || (dst_port==587) || (dst_port==2525) || (dst_port==2526)) )
    return true;
  if ( (rule_ID_in==1929) && (is_tcp) && true && (dst_port==2024) )
    return true;
  if ( (rule_ID_in==1926) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1925) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1924) && (is_tcp) && true && (dst_port==133) )
    return true;
  if ( (rule_ID_in==1923) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1922) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1921) && (is_tcp) && true && (dst_port==8889) )
    return true;
  if ( (rule_ID_in==1920) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1919) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1918) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1917) && (is_tcp) && true && (dst_port==8080) )
    return true;
  if ( (rule_ID_in==1916) && (is_tcp) && true && (dst_port==8080) )
    return true;
  if ( (rule_ID_in==1914) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==1912) && (is_tcp) && true && (dst_port==146) )
    return true;
  if ( (rule_ID_in==1911) && (is_tcp) && true && (dst_port_is_http || dst_port==443) )
    return true;
  if ( (rule_ID_in==1910) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1909) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1908) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1907) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1906) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1905) && (is_tcp) && true && (dst_port==1863) )
    return true;
  if ( (rule_ID_in==1904) && (is_tcp) && true && (dst_port==1431) )
    return true;
  if ( (rule_ID_in==1944) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1943) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1942) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1940) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==1939) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1938) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1936) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1935) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1934) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1932) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1972) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1971) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1970) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1969) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1968) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1967) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1966) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1964) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==1963) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==1962) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1961) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1960) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1959) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1956) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1955) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1990) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1988) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1987) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1986) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1985) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1984) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1983) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1982) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1980) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1979) && (is_tcp) && true && (dst_port==921) )
    return true;
  if ( (rule_ID_in==1978) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1977) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1976) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1975) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1974) && (is_tcp) && true && ((dst_port==1994) || (dst_port==81)) )
    return true;
  if ( (rule_ID_in==1973) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2002) && (is_tcp) && true && (dst_port==2080) )
    return true;
  if ( (rule_ID_in==1999) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1997) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1996) && (is_tcp) && true && (dst_port==3308) )
    return true;
  if ( (rule_ID_in==1995) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==1993) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2015) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2013) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2012) && (is_tcp) && true && (dst_port==6178) )
    return true;
  if ( (rule_ID_in==2011) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2010) && (is_tcp) && true && ((dst_port>=1024) && (dst_port<=65535)) )
    return true;
  if ( (rule_ID_in==2009) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2008) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==2006) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2026) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2024) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2023) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==2033) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2032) && (is_tcp) && true && (dst_port==3301) )
    return true;
  if ( (rule_ID_in==2031) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2030) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2028) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2027) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2046) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2045) && (is_tcp) && true && (dst_port==60005) )
    return true;
  if ( (rule_ID_in==2044) && (is_tcp) && true && ((dst_port>=80) && (dst_port<=81)) )
    return true;
  if ( (rule_ID_in==2043) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2042) && (is_tcp) && true && (dst_port==27977) )
    return true;
  if ( (rule_ID_in==2041) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2040) && (is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==2039) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2036) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2076) && (is_tcp) && true && (dst_port==2352) )
    return true;
  if ( (rule_ID_in==2065) && (is_tcp) && true && (dst_port_is_http || dst_port==443) )
    return true;
  if ( (rule_ID_in==2063) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2062) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2058) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2056) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2055) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2054) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2082) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2081) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2080) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2084) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2083) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2087) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2105) && (is_tcp) && true && (dst_port==888) )
    return true;
  if ( (rule_ID_in==2104) && (is_tcp) && true && (dst_port==6000) )
    return true;
  if ( (rule_ID_in==2103) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2102) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2101) && (is_tcp) && true && (dst_port==8080) )
    return true;
  if ( (rule_ID_in==2100) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2099) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2098) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2097) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2096) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2095) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2094) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2093) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2092) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2091) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2090) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2115) && (is_tcp) && true && (dst_port==6900) )
    return true;
  if ( (rule_ID_in==2114) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2113) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2112) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2111) && (is_tcp) && true && (dst_port==4000) )
    return true;
  if ( (rule_ID_in==2110) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2108) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2124) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2123) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2122) && (is_tcp) && true && dst_port_is_ftp )
    return true;
  if ( (rule_ID_in==2121) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2120) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2119) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2146) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2145) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2140) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2139) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==2138) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2135) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2134) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2133) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2132) && (is_tcp) && true && (dst_port==8850) )
    return true;
  if ( (rule_ID_in==2151) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2150) && (is_tcp) && true && (dst_port==8080) )
    return true;
  if ( (rule_ID_in==2149) && (is_tcp) && true && (dst_port==3900) )
    return true;
  if ( (rule_ID_in==2148) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2179) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2178) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2177) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2176) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2186) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2185) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2183) && (is_tcp) && (src_port==128) && true )
    return true;
  if ( (rule_ID_in==2181) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2180) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2189) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2188) && (is_tcp) && true && ((dst_port==80) || (dst_port==443)) )
    return true;
  if ( (rule_ID_in==2190) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2208) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2207) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2206) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2205) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2203) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2202) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2195) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2194) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2225) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2217) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2216) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2214) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2213) && (is_tcp) && true && (dst_port==8000) )
    return true;
  if ( (rule_ID_in==2211) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2210) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==2209) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2228) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2232) && (is_tcp) && true && ((dst_port>=1600) && (dst_port<=1604)) )
    return true;
  if ( (rule_ID_in==2231) && (is_tcp) && true && ((dst_port>=1600) && (dst_port<=1604)) )
    return true;
  if ( (rule_ID_in==2230) && (is_tcp) && ((src_port>=1600) && (src_port<=1604)) && true )
    return true;
  if ( (rule_ID_in==2237) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2248) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2247) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2245) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2255) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2254) && (is_tcp) && true && (dst_port==2698) )
    return true;
  if ( (rule_ID_in==2263) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2262) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2275) && (is_tcp) && true && (dst_port==1337) )
    return true;
  if ( (rule_ID_in==2274) && (is_tcp) && true && (dst_port==1337) )
    return true;
  if ( (rule_ID_in==2273) && (is_tcp) && true && (dst_port==1337) )
    return true;
  if ( (rule_ID_in==2272) && (is_tcp) && true && (dst_port==1337) )
    return true;
  if ( (rule_ID_in==2271) && (is_tcp) && true && (dst_port==1337) )
    return true;
  if ( (rule_ID_in==2270) && (is_tcp) && true && (dst_port==1337) )
    return true;
  if ( (rule_ID_in==2269) && (is_tcp) && true && (dst_port==1337) )
    return true;
  if ( (rule_ID_in==2268) && (is_tcp) && true && (dst_port==1337) )
    return true;
  if ( (rule_ID_in==2267) && (is_tcp) && true && (dst_port==1337) )
    return true;
  if ( (rule_ID_in==2276) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2283) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2282) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==2286) && (is_tcp) && (src_port==9005) && true )
    return true;
  if ( (rule_ID_in==2285) && (is_tcp) && true && (dst_port==82) )
    return true;
  if ( (rule_ID_in==2296) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2290) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2289) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2288) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2287) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2300) && (is_tcp) && true && (dst_port==8766) )
    return true;
  if ( (rule_ID_in==2297) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==2332) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2330) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==2328) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2327) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2326) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2325) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2323) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2322) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2321) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2320) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2319) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2318) && (is_tcp) && true && (dst_port==89) )
    return true;
  if ( (rule_ID_in==2317) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2316) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2315) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2314) && (is_tcp) && true && (dst_port==48919) )
    return true;
  if ( (rule_ID_in==2313) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2338) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2343) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2342) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2352) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2351) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2350) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2349) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2348) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2347) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2346) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2345) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==2344) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2354) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2353) && (is_tcp) && true && (dst_port==5013) )
    return true;
  if ( (rule_ID_in==2007) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2373) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2372) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2371) && (!is_tcp) && true && ((dst_port==16464) || (dst_port==16465) || (dst_port==16470) || (dst_port==16471)) )
    return true;
  if ( (rule_ID_in==2370) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2369) && (is_tcp) && true && ((dst_port==25) || (dst_port==465) || (dst_port==587)) )
    return true;
  if ( (rule_ID_in==2368) && (is_tcp) && true && (dst_port==2145) )
    return true;
  if ( (rule_ID_in==2367) && (is_tcp) && true && (dst_port==1433) )
    return true;
  if ( (rule_ID_in==2365) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2364) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2363) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2362) && (is_tcp) && true && (dst_port==5655) )
    return true;
  if ( (rule_ID_in==2361) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2360) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2381) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2380) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2379) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2378) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2377) && (is_tcp) && true && (dst_port==8082) )
    return true;
  if ( (rule_ID_in==2374) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2391) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2382) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2403) && (is_tcp) && true && (dst_port==5000) )
    return true;
  if ( (rule_ID_in==2402) && (is_tcp) && true && ((dst_port==9003) || (dst_port==9400)) )
    return true;
  if ( (rule_ID_in==2401) && (is_tcp) && ((src_port==9003) || (src_port==9400)) && true )
    return true;
  if ( (rule_ID_in==2397) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2395) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2394) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2393) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2410) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2409) && (is_tcp) && true && (dst_port==8080) )
    return true;
  if ( (rule_ID_in==2408) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2407) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2406) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2405) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2404) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2423) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2422) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2421) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2419) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2417) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2411) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2428) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2427) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2426) && (is_tcp) && true && (dst_port==3001) )
    return true;
  if ( (rule_ID_in==2425) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2424) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2439) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2434) && (is_tcp) && true && (dst_port==86) )
    return true;
  if ( (rule_ID_in==2433) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2432) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2431) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2441) && (is_tcp) && true && (dst_port==8080) )
    return true;
  if ( (rule_ID_in==2450) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2449) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2451) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2456) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2455) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2454) && (is_tcp) && true && ((dst_port==1177) || (dst_port==81)) )
    return true;
  if ( (rule_ID_in==2453) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2452) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2466) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2481) && (is_tcp) && true && ((dst_port==80) || (dst_port==8080) || (dst_port==443)) )
    return true;
  if ( (rule_ID_in==2476) && (is_tcp) && true && (dst_port==1337) )
    return true;
  if ( (rule_ID_in==2474) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2484) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==2486) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2493) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2492) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2491) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2490) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2489) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2488) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2501) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2500) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2499) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2511) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2508) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2507) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2506) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2503) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2502) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2522) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2521) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==2520) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2519) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2518) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2517) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2514) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2512) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2523) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2524) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2533) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2532) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2531) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2529) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2534) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2548) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2547) && (is_tcp) && true && ((dst_port==587) || (dst_port==2525)) )
    return true;
  if ( (rule_ID_in==2546) && (is_tcp) && true && ((dst_port==587) || (dst_port==2525)) )
    return true;
  if ( (rule_ID_in==2545) && (is_tcp) && true && ((dst_port==80) || (dst_port==443)) )
    return true;
  if ( (rule_ID_in==2560) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2559) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2558) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2557) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2555) && (is_tcp) && true && (dst_port==5222) )
    return true;
  if ( (rule_ID_in==2554) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2553) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2551) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2550) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2571) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2570) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2569) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2584) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2583) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2582) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2581) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2580) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2579) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2578) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2577) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2576) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2597) && (is_tcp) && true && (dst_port==2010) )
    return true;
  if ( (rule_ID_in==2596) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2595) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2594) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2593) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2589) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2588) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2587) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2586) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2614) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2620) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2619) && (is_tcp) && true && (dst_port==23) )
    return true;
  if ( (rule_ID_in==2618) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2638) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2637) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2636) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2635) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2634) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2633) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2632) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2630) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2628) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2626) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2625) && (is_tcp) && true && (dst_port==8010) )
    return true;
  if ( (rule_ID_in==2624) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==2623) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2622) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2621) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2653) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2652) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2651) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2650) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2647) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2645) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2643) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2642) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2667) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2666) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2665) && (is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==2664) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2663) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2658) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2657) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2656) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2655) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2654) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2672) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2671) && (is_tcp) && true && (dst_port==6667) )
    return true;
  if ( (rule_ID_in==2670) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2669) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2686) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2685) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2684) && (is_tcp) && true && ((dst_port==53) || (dst_port==80) || (dst_port==443) || (dst_port==5432)) )
    return true;
  if ( (rule_ID_in==2683) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2692) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2691) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2690) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2699) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2698) && (is_tcp) && true && (dst_port==587) )
    return true;
  if ( (rule_ID_in==2697) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2696) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2695) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2694) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2693) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2702) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2701) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2700) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2718) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2713) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2709) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2734) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2733) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2726) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2725) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2724) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2723) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2722) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2721) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2720) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2746) && (is_tcp) && true && (dst_port==9999) )
    return true;
  if ( (rule_ID_in==2745) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2743) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2741) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2740) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2739) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2738) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2751) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2748) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2754) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2752) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2757) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2756) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2763) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2762) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2759) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2813) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2812) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2811) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==2810) && (is_tcp) && true && (dst_port==205) )
    return true;
  if ( (rule_ID_in==2808) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2807) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2806) && (!is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2803) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2802) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2801) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2800) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2795) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2794) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2792) && (is_tcp) && (src_port==172) && true )
    return true;
  if ( (rule_ID_in==2791) && (is_tcp) && true && (dst_port==172) )
    return true;
  if ( (rule_ID_in==2789) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2766) && (is_tcp) && true && (dst_port==1863) )
    return true;
  if ( (rule_ID_in==2765) && (is_tcp) && true && (dst_port==1604) )
    return true;
  if ( (rule_ID_in==2816) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2814) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2829) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2828) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==2824) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2843) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2842) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2841) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2840) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2853) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2852) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2851) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2850) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2849) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2848) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2847) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2846) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2845) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2859) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2858) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2857) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2864) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2860) && (is_tcp) && true && (dst_port==8080) )
    return true;
  if ( (rule_ID_in==2885) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2879) && (is_tcp) && true && (dst_port==6667) )
    return true;
  if ( (rule_ID_in==2878) && (is_tcp) && true && (dst_port==2015) )
    return true;
  if ( (rule_ID_in==2876) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2875) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2874) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2871) && (is_tcp) && true && (dst_port==9090) )
    return true;
  if ( (rule_ID_in==2870) && (is_tcp) && true && (dst_port==8080) )
    return true;
  if ( (rule_ID_in==2887) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2886) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2902) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2901) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2900) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2899) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2898) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2891) && (is_tcp) && (src_port==9999) && true )
    return true;
  if ( (rule_ID_in==2890) && (is_tcp) && true && (dst_port==9999) )
    return true;
  if ( (rule_ID_in==2905) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2904) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2911) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2915) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2914) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2913) && (is_tcp) && (src_port==80) && true )
    return true;
  if ( (rule_ID_in==2921) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2920) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2919) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2917) && (is_tcp) && true && ((dst_port==25) || (dst_port==2525) || (dst_port==587)) )
    return true;
  if ( (rule_ID_in==2916) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2929) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2928) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2927) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2926) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2925) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2943) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2942) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2941) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2940) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2937) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2936) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2935) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2934) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2954) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2953) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2952) && (is_tcp) && true && (dst_port==5551) )
    return true;
  if ( (rule_ID_in==2951) && (is_tcp) && true && (dst_port==587) )
    return true;
  if ( (rule_ID_in==2950) && (is_tcp) && true && (dst_port==587) )
    return true;
  if ( (rule_ID_in==2949) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2956) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2955) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2972) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2968) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2967) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2982) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2979) && (is_tcp) && true && ((dst_port==25) || (dst_port==587)) )
    return true;
  if ( (rule_ID_in==2978) && (is_tcp) && true && ((dst_port==25) || (dst_port==587)) )
    return true;
  if ( (rule_ID_in==2977) && (is_tcp) && true && ((dst_port==25) || (dst_port==587)) )
    return true;
  if ( (rule_ID_in==2976) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2975) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2974) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3013) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3012) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3011) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3018) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3015) && (is_tcp) && true && (dst_port==3373) )
    return true;
  if ( (rule_ID_in==3076) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3075) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3074) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3073) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3072) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3064) && (is_tcp) && true && (dst_port==8080) )
    return true;
  if ( (rule_ID_in==3033) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3032) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3031) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3089) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3085) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3084) && (is_tcp) && true && (dst_port==8080) )
    return true;
  if ( (rule_ID_in==3081) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3080) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3079) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3078) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3077) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3111) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3110) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3108) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3107) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3093) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3116) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3115) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3117) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3123) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==3122) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==3121) && (is_tcp) && true && ((dst_port==443) || (dst_port==446) || (dst_port==447)) )
    return true;
  if ( (rule_ID_in==3120) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3128) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3127) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3126) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3137) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3136) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3135) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3134) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3133) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3153) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3152) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3151) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3150) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3149) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3148) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3161) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3160) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3159) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3158) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3157) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3173) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3172) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3171) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3170) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3169) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3168) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3167) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3166) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3165) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3177) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3176) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3174) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3182) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3181) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3180) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==3179) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3188) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3187) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3198) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3196) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3195) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==3194) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3222) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3221) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3220) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3219) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3218) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3217) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3216) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3215) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3213) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3212) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3211) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3210) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3209) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3208) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3207) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3238) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3237) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3236) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3235) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3234) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3233) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3232) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3231) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3230) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3229) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3228) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3227) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3226) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3225) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3224) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3241) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3240) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3239) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3261) && (is_tcp) && (src_port==1433) && true )
    return true;
  if ( (rule_ID_in==3259) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3258) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3257) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3256) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3255) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3254) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3253) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3266) && (is_tcp) && true && (dst_port==8000) )
    return true;
  if ( (rule_ID_in==3263) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3262) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3278) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3277) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3276) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3300) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3299) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3298) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3288) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3287) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3286) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3285) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3312) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3311) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3310) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3309) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3330) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3329) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3328) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3327) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3326) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3325) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3324) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3323) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3322) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3321) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3317) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3316) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3315) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3313) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3335) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3334) && (is_tcp) && true && (dst_port==9000) )
    return true;
  if ( (rule_ID_in==3333) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3332) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3331) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3343) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3342) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3341) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3340) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3339) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3349) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3348) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3347) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==3346) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3373) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3372) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3371) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3370) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3369) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3368) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3376) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3375) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2051) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2050) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1198) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3395) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3381) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3380) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3410) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3409) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3408) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3425) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3424) && (is_tcp) && true && (dst_port==587) )
    return true;
  if ( (rule_ID_in==3423) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3422) && (is_tcp) && true && (dst_port==1433) )
    return true;
  if ( (rule_ID_in==3421) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3420) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3418) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3417) && (is_tcp) && true && (dst_port==4000) )
    return true;
  if ( (rule_ID_in==3416) && (is_tcp) && true && (dst_port==1010) )
    return true;
  if ( (rule_ID_in==3415) && (is_tcp) && true && (dst_port==1991) )
    return true;
  if ( (rule_ID_in==3414) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3429) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3428) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3426) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3482) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3481) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3480) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3479) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3478) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3477) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3476) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3471) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3469) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3467) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3466) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3465) && (is_tcp) && true && ((dst_port==25) || (dst_port==465) || (dst_port==587) || (dst_port==2525) || (dst_port==2526)) )
    return true;
  if ( (rule_ID_in==3463) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3460) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3490) && (is_tcp) && (src_port==21) && true )
    return true;
  if ( (rule_ID_in==3489) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3486) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3485) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3483) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3495) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3494) && (is_tcp) && true && ((dst_port>=1024) && (dst_port<=65535)) )
    return true;
  if ( (rule_ID_in==3493) && (is_tcp) && true && (dst_port==8585) )
    return true;
  if ( (rule_ID_in==3492) && (is_tcp) && true && (dst_port==3330) )
    return true;
  if ( (rule_ID_in==3491) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3501) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3500) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3499) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3498) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3497) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3503) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3510) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3509) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3508) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3507) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3512) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3526) && (is_tcp) && true && (dst_port==3502) )
    return true;
  if ( (rule_ID_in==3525) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3524) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3523) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3522) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3521) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==3520) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==3540) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3539) && (is_tcp) && true && (dst_port==58275) )
    return true;
  if ( (rule_ID_in==3538) && (is_tcp) && true && (dst_port==15525) )
    return true;
  if ( (rule_ID_in==3537) && (is_tcp) && true && (dst_port==15525) )
    return true;
  if ( (rule_ID_in==3536) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3535) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3534) && (is_tcp) && true && (dst_port==9003) )
    return true;
  if ( (rule_ID_in==3533) && (is_tcp) && true && (dst_port==25565) )
    return true;
  if ( (rule_ID_in==3532) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3531) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3530) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3529) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3543) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3542) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3577) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3563) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3592) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3591) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3590) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3605) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3601) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3600) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3598) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3597) && (is_tcp) && true && (dst_port==8889) )
    return true;
  if ( (rule_ID_in==3596) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3594) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3608) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3607) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3606) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3621) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3618) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3617) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3616) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3615) && (is_tcp) && true && (dst_port==1433) )
    return true;
  if ( (rule_ID_in==3622) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3635) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3634) && (is_tcp) && true && (dst_port==6666) )
    return true;
  if ( (rule_ID_in==3626) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3625) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3659) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3658) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3673) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==3672) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==3660) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3713) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3712) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3707) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3706) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3725) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3723) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3733) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3761) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3762) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3764) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3763) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3780) && (is_tcp) && ((src_port==3030) || (src_port==1150)) && true )
    return true;
  if ( (rule_ID_in==3779) && (is_tcp) && true && (dst_port==81) )
    return true;
  if ( (rule_ID_in==3774) && (is_tcp) && ((src_port==1234) || (src_port==3340) || (src_port==3433) || (src_port==33911) || (src_port==64111)) && true )
    return true;
  if ( (rule_ID_in==3770) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3769) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3768) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3767) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3795) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3794) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==3804) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==3803) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3802) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3817) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3815) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3814) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3813) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3841) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3840) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3839) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3838) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3837) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3828) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3827) && (is_tcp) && (src_port==81) && true )
    return true;
  if ( (rule_ID_in==3822) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3842) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3858) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3871) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3870) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3869) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3879) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3878) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3872) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==3883) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3897) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3896) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3894) && (is_tcp) && true && (dst_port==20) )
    return true;
  if ( (rule_ID_in==3893) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3892) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3891) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3890) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3889) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3909) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3908) && (is_tcp) && true && dst_port_is_ftp )
    return true;
  if ( (rule_ID_in==3907) && (is_tcp) && true && dst_port_is_ftp )
    return true;
  if ( (rule_ID_in==3906) && (is_tcp) && true && dst_port_is_ftp )
    return true;
  if ( (rule_ID_in==3916) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3915) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3914) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3913) && (is_tcp) && true && (dst_port==1777) )
    return true;
  if ( (rule_ID_in==3912) && (is_tcp) && (src_port==1777) && true )
    return true;
  if ( (rule_ID_in==3911) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3910) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3951) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3942) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3921) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3920) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3953) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3952) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3955) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3956) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3958) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3971) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3968) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3989) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3988) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3987) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3992) && (is_tcp) && true && ((dst_port==80) || (dst_port==443)) )
    return true;
  if ( (rule_ID_in==4059) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4058) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4057) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4043) && (is_tcp) && true && (dst_port==45678) )
    return true;
  if ( (rule_ID_in==4042) && (is_tcp) && true && (dst_port==18892) )
    return true;
  if ( (rule_ID_in==4041) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4040) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4039) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4038) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4037) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4036) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4035) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4034) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4033) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4032) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4031) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4030) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4029) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4028) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3993) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4076) && (is_tcp) && (src_port==8080) && true )
    return true;
  if ( (rule_ID_in==4072) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4067) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4086) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4119) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4118) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4117) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4116) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4111) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4110) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4109) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4155) && (is_tcp) && true && (dst_port==6667) )
    return true;
  if ( (rule_ID_in==4154) && (is_tcp) && (src_port==6667) && true )
    return true;
  if ( (rule_ID_in==4153) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4152) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4147) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4146) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==4145) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4144) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4158) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4156) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4170) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4166) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4175) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4174) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4180) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4179) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4178) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4177) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4218) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4190) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4230) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4229) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4226) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4238) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4249) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4246) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4291) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4290) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4289) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4286) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4285) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4305) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4304) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4326) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4328) && (is_tcp) && (src_port==2556) && true )
    return true;
  if ( (rule_ID_in==4330) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4329) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4362) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4380) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4383) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4382) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4381) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4389) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4388) && (is_tcp) && (src_port==4043) && true )
    return true;
  if ( (rule_ID_in==4384) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4392) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4391) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==4390) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==4437) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4434) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4433) && (!is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4432) && (!is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4431) && (!is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4430) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4443) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4442) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4441) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4440) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4439) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4450) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4449) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4448) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4447) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4446) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4457) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4456) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4455) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4454) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4453) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4469) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4468) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4467) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4466) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4465) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4463) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4478) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4479) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4505) && (is_tcp) && true && (dst_port>=2012) )
    return true;
  if ( (rule_ID_in==4503) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4480) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4559) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4558) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4550) && (is_tcp) && true && ((dst_port==25) || (dst_port==587)) )
    return true;
  if ( (rule_ID_in==4549) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4548) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4547) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4546) && (!is_tcp) && true && (dst_port==6892) )
    return true;
  if ( (rule_ID_in==4570) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4569) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4600) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4584) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==4583) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4602) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4601) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4608) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4607) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4603) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4615) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4617) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4616) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4624) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4623) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4622) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4621) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4620) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4659) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4663) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4660) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4668) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4667) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4680) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4675) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4674) && (is_tcp) && true && ((dst_port==25) || (dst_port==587)) )
    return true;
  if ( (rule_ID_in==4673) && (is_tcp) && true && ((dst_port==25) || (dst_port==587)) )
    return true;
  if ( (rule_ID_in==4684) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4687) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4730) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4729) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4728) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4727) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4726) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4725) && (is_tcp) && true && (dst_port>=9000) )
    return true;
  if ( (rule_ID_in==4724) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4723) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4738) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4736) && (is_tcp) && (src_port==5050) && true )
    return true;
  if ( (rule_ID_in==4732) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4748) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4744) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4743) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4756) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4769) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4764) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4774) && (is_tcp) && true && (dst_port==900) )
    return true;
  if ( (rule_ID_in==4771) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4804) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4803) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4802) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4801) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4800) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4799) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4798) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4807) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4809) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4812) && (is_tcp) && true && ((dst_port==25) || (dst_port==587)) )
    return true;
  if ( (rule_ID_in==4830) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4827) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4824) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4822) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4821) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4832) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4831) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4841) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4838) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4837) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4881) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4880) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4879) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4877) && (is_tcp) && true && (dst_port==1395) )
    return true;
  if ( (rule_ID_in==4876) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4875) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4874) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4873) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4872) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4867) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4892) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4890) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4894) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4893) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4897) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4896) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4895) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4898) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4901) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4904) && (!is_tcp) && true && (dst_port==4444) )
    return true;
  if ( (rule_ID_in==4903) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4902) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4929) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4928) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4939) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4936) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4934) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4941) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4940) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4944) && (is_tcp) && true && (dst_port_is_http || dst_port==8000) )
    return true;
  if ( (rule_ID_in==4943) && (is_tcp) && true && ((dst_port==8088) || (dst_port==18001) || (dst_port==18088)) )
    return true;
  if ( (rule_ID_in==4953) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4952) && (is_tcp) && true && (dst_port==23) )
    return true;
  if ( (rule_ID_in==4951) && (is_tcp) && true && ((dst_port==23) || (dst_port==2323) || (dst_port==5555) || (dst_port==7547)) )
    return true;
  if ( (rule_ID_in==4950) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4949) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4948) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4961) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4958) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4957) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4956) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4979) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4977) && (is_tcp) && true && (dst_port==23) )
    return true;
  if ( (rule_ID_in==4976) && (is_tcp) && true && (dst_port==23) )
    return true;
  if ( (rule_ID_in==4975) && (is_tcp) && true && (dst_port==23) )
    return true;
  if ( (rule_ID_in==4974) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4982) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4981) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5009) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5025) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5024) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5032) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5030) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5029) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5028) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5027) && (is_tcp) && true && (dst_port==12421) )
    return true;
  if ( (rule_ID_in==5042) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5046) && (is_tcp) && true && ((dst_port==15963) || (dst_port==1114) || (dst_port==9999) || (dst_port==80) || (dst_port==81) || (dst_port==1177) || (dst_port==1100)) )
    return true;
  if ( (rule_ID_in==5045) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5044) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5054) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5053) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5052) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5051) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5050) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5049) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5064) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5067) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5066) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5095) && (is_tcp) && true && (dst_port==31337) )
    return true;
  if ( (rule_ID_in==5105) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5104) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5111) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5110) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5120) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5119) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5118) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5132) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5131) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5130) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5129) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5128) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5127) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5125) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5141) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5140) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5151) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5150) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5149) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5148) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5146) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5183) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5182) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5181) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5177) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5176) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5175) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5174) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5170) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==5168) && (is_tcp) && (src_port==6667) && true )
    return true;
  if ( (rule_ID_in==5167) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5166) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5165) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5164) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5186) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5217) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5228) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5227) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5226) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5224) && (is_tcp) && ((src_port==4431) || (src_port==4432) || (src_port==4433)) && true )
    return true;
  if ( (rule_ID_in==5223) && (is_tcp) && ((src_port==4431) || (src_port==4432) || (src_port==4433)) && true )
    return true;
  if ( (rule_ID_in==5221) && (is_tcp) && true && (dst_port==8888) )
    return true;
  if ( (rule_ID_in==5220) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5219) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5232) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5231) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5247) && (!is_tcp) && (src_port==53) && true )
    return true;
  if ( (rule_ID_in==5246) && (is_tcp) && (src_port==53) && true )
    return true;
  if ( (rule_ID_in==5243) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5302) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5301) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5300) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5299) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5298) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5297) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5296) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5295) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5294) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5293) && (is_tcp) && true && (dst_port==18080) )
    return true;
  if ( (rule_ID_in==5292) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5306) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5312) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5311) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5310) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5309) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5313) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5314) && (is_tcp) && true && ((dst_port==23) || (dst_port==2323) || (dst_port==5555) || (dst_port==7547)) )
    return true;
  if ( (rule_ID_in==5315) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5317) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5316) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5328) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==5327) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5351) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5350) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5349) && (is_tcp) && true && (dst_port==799) )
    return true;
  if ( (rule_ID_in==5347) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5346) && (is_tcp) && true && ((dst_port==995) || (dst_port==80) || (dst_port==53) || (dst_port==443)) )
    return true;
  if ( (rule_ID_in==5360) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5359) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5358) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5365) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5364) && (is_tcp) && (src_port==445) && true )
    return true;
  if ( (rule_ID_in==5379) && (is_tcp) && true && ((dst_port==995) || (dst_port==80) || (dst_port==53) || (dst_port==443)) )
    return true;
  if ( (rule_ID_in==5378) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5377) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5376) && (is_tcp) && true && (dst_port==799) )
    return true;
  if ( (rule_ID_in==5375) && (is_tcp) && true && (dst_port_is_http || dst_port==53) )
    return true;
  if ( (rule_ID_in==5381) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5380) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5386) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5385) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5384) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5382) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5424) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5423) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5422) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5421) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5420) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5441) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5439) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5438) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5434) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5433) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5432) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5431) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5448) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5447) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5446) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5527) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5522) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5521) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5517) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5513) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5512) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5511) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5495) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5493) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5492) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5489) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5488) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5482) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5481) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5480) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5460) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5455) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5452) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5544) && (is_tcp) && true && (dst_port==7080) )
    return true;
  if ( (rule_ID_in==5558) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5554) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5574) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==5567) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5566) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5565) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5578) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5577) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5581) && (is_tcp) && true && (dst_port==2008) )
    return true;
  if ( (rule_ID_in==5589) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5597) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5596) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5593) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5592) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5591) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==5590) && (is_tcp) && true && (dst_port==8001) )
    return true;
  if ( (rule_ID_in==5602) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5601) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5600) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5607) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5605) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5604) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5603) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5620) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5619) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5638) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5637) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5636) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5635) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5634) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5633) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5632) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5631) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5630) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5629) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5628) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5627) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5626) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5625) && (is_tcp) && ((src_port==443) || (src_port==447) || (src_port==449)) && true )
    return true;
  if ( (rule_ID_in==5624) && (is_tcp) && ((src_port==443) || (src_port==447) || (src_port==449)) && true )
    return true;
  if ( (rule_ID_in==5623) && (is_tcp) && ((src_port==443) || (src_port==447) || (src_port==449)) && true )
    return true;
  if ( (rule_ID_in==5622) && (is_tcp) && ((src_port==443) || (src_port==447) || (src_port==449)) && true )
    return true;
  if ( (rule_ID_in==5621) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5646) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5645) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5642) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5641) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5658) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5657) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5656) && (is_tcp) && true && (dst_port==6280) )
    return true;
  if ( (rule_ID_in==5666) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5665) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==5664) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==5660) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5659) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5672) && (is_tcp) && true && (dst_port==7878) )
    return true;
  if ( (rule_ID_in==5671) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5670) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5669) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5668) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5667) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5673) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5682) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5679) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5678) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5677) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5686) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5683) && (is_tcp) && (src_port==8888) && true )
    return true;
  if ( (rule_ID_in==5707) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5706) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5704) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5703) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5702) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5701) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5700) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5699) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5698) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5697) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5696) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5693) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5692) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5691) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5690) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5689) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5688) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5687) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5715) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5714) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5713) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5712) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5711) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5710) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5709) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5708) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5729) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5758) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5757) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5756) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5749) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==5748) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==5747) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==5746) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==5740) && (is_tcp) && true && (dst_port==22) )
    return true;
  if ( (rule_ID_in==5737) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5736) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5735) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5762) && (is_tcp) && ( ((src_port>=6660) && (src_port<=6669)) || (src_port==7000) ) && true )
    return true;
  if ( (rule_ID_in==5769) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5768) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5766) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5778) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5777) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5776) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5775) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5774) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5773) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5772) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5771) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5770) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5779) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5800) && (!is_tcp) && true && (dst_port==6892) )
    return true;
  if ( (rule_ID_in==5805) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5801) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5815) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5814) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5812) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5809) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5808) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5817) && (!is_tcp) && true && (dst_port==1502) )
    return true;
  if ( (rule_ID_in==5836) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5835) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5834) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5833) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5832) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5831) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5830) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5829) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5828) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5827) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5826) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5825) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5824) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5823) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5850) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5864) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5863) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5862) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5861) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5860) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5859) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5858) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5866) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5871) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5885) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5884) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5882) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5881) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5880) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5879) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5886) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5890) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5905) && (is_tcp) && true && (dst_port_is_http || (dst_port>=1025)) )
    return true;
  if ( (rule_ID_in==5902) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5900) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5899) && (is_tcp) && true && (dst_port>=1025) )
    return true;
  if ( (rule_ID_in==5898) && (is_tcp) && (src_port>=1025) && true )
    return true;
  if ( (rule_ID_in==5897) && (is_tcp) && (src_port>=1025) && true )
    return true;
  if ( (rule_ID_in==5896) && (is_tcp) && (src_port>=1025) && true )
    return true;
  if ( (rule_ID_in==5895) && (is_tcp) && true && (dst_port>=1025) )
    return true;
  if ( (rule_ID_in==5908) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5917) && (is_tcp) && true && ((dst_port==8043) || (dst_port==8080) || (dst_port==8843)) )
    return true;
  if ( (rule_ID_in==5916) && (is_tcp) && true && ((dst_port==8043) || (dst_port==8080) || (dst_port==8843)) )
    return true;
  if ( (rule_ID_in==5915) && (is_tcp) && true && ((dst_port==8043) || (dst_port==8080) || (dst_port==8843)) )
    return true;
  if ( (rule_ID_in==5914) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5928) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5927) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5924) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5953) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5952) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5947) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5946) && (!is_tcp) && (src_port==53) && true )
    return true;
  if ( (rule_ID_in==5945) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5968) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5967) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5966) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5965) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5964) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5963) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5962) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5961) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5957) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5956) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5955) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5954) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5973) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5970) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5969) && (is_tcp) && true && ((dst_port==2050) || (dst_port==7020) || (dst_port==7628)) )
    return true;
  if ( (rule_ID_in==5975) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5985) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5984) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5983) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5982) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5980) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5979) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5978) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5977) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5976) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5988) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5992) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==5991) && (is_tcp) && true && (dst_port==8888) )
    return true;
  if ( (rule_ID_in==5990) && (is_tcp) && (src_port==8888) && true )
    return true;
  if ( (rule_ID_in==5989) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5993) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6031) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6030) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6029) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6028) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6027) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6023) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6022) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6020) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6011) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6007) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6040) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6039) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6038) && (is_tcp) && true && dst_port_is_ftp )
    return true;
  if ( (rule_ID_in==6037) && (is_tcp) && true && dst_port_is_ftp )
    return true;
  if ( (rule_ID_in==6036) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6035) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6045) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6060) && (is_tcp) && true && dst_port_is_file_data )
    return true;
  if ( (rule_ID_in==6055) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6054) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6053) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6052) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6051) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6050) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6049) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6048) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6047) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6078) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6077) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6076) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6075) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6074) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6073) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6072) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6071) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6066) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6065) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6093) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6091) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==6090) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6089) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6088) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6087) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6122) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6121) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6120) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6119) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6118) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6117) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6116) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6115) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6114) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6113) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6112) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6111) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6110) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6109) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6108) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6107) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6106) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6105) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6132) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6131) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6128) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6127) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6147) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6161) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6160) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6158) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6157) && (is_tcp) && true && dst_port_is_file_data )
    return true;
  if ( (rule_ID_in==6174) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6173) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6170) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6169) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6168) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6167) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6166) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6165) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6164) && (is_tcp) && true && ((dst_port==443) || (dst_port==8443)) )
    return true;
  if ( (rule_ID_in==6190) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6189) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6188) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6185) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6182) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6180) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6192) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6195) && (is_tcp) && true && (dst_port==20480) )
    return true;
  if ( (rule_ID_in==6194) && (is_tcp) && (src_port==20480) && true )
    return true;
  if ( (rule_ID_in==6193) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6198) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6197) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6215) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6212) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6207) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6201) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6221) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6220) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6219) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6218) && (is_tcp) && ((src_port==443) || (src_port==447) || (src_port==449)) && true )
    return true;
  if ( (rule_ID_in==6217) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==6216) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6224) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6223) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6222) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6229) && (is_tcp) && true && (dst_port_is_http || (dst_port==1337) || (dst_port==5156)) )
    return true;
  if ( (rule_ID_in==6228) && (is_tcp) && true && (dst_port_is_http || (dst_port==3000) || (dst_port==5156) || (dst_port==7218)) )
    return true;
  if ( (rule_ID_in==6227) && (is_tcp) && true && ((dst_port==1433) || (dst_port==5003)) )
    return true;
  if ( (rule_ID_in==6235) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6234) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6233) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6230) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6236) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6242) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6241) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6240) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6239) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6238) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6247) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6246) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6245) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6244) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6243) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6264) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6263) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6271) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6280) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6279) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6277) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6276) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6275) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6274) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6272) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6302) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6301) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6300) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6298) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6297) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6296) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6295) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6294) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6291) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6290) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6289) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6288) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6287) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6286) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6285) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6309) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6308) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6307) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6306) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6305) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6316) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6313) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6317) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6330) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6329) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6328) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6327) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6326) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6325) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6324) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6323) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6322) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6319) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6318) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6348) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==6343) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6342) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6357) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==6356) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==6355) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6354) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6353) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6361) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6360) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6366) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6365) && (!is_tcp) && true && (dst_port==6901) )
    return true;
  if ( (rule_ID_in==6364) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6363) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6372) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6377) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6380) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6387) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6385) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6383) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6382) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6381) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6389) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6397) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6407) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6406) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6405) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6404) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6402) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6401) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6400) && (is_tcp) && true && (dst_port==1700) )
    return true;
  if ( (rule_ID_in==6418) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6417) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6412) && (is_tcp) && true && (dst_port==5416) )
    return true;
  if ( (rule_ID_in==6427) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6426) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6425) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6424) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6423) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6422) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6421) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6420) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6419) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6432) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6431) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6451) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6450) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6448) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6447) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6446) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6445) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6483) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6480) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6479) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6478) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6477) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6476) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6470) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6469) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6468) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6467) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6466) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6465) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6464) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6463) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6462) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6461) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6460) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6459) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6458) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6457) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6493) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6492) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6491) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6490) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6489) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6488) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6487) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6486) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6485) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6499) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6498) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6497) && (is_tcp) && true && (dst_port==27) )
    return true;
  if ( (rule_ID_in==6496) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6495) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6508) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6507) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6506) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6520) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6519) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6518) && (is_tcp) && true && (dst_port==8852) )
    return true;
  if ( (rule_ID_in==6517) && (is_tcp) && true && (dst_port==8852) )
    return true;
  if ( (rule_ID_in==6516) && (is_tcp) && true && (dst_port==8852) )
    return true;
  if ( (rule_ID_in==6515) && (is_tcp) && true && (dst_port==8852) )
    return true;
  if ( (rule_ID_in==6514) && (is_tcp) && true && (dst_port==8852) )
    return true;
  if ( (rule_ID_in==6513) && (is_tcp) && true && (dst_port==8694) )
    return true;
  if ( (rule_ID_in==6512) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6511) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6510) && (is_tcp) && true && ((dst_port==22) || (dst_port==23)) )
    return true;
  if ( (rule_ID_in==6528) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6527) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6526) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6524) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6523) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6522) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6521) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6543) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6542) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==6541) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6540) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6549) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==6556) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6555) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6554) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6553) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6552) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6551) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6557) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6560) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6559) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6562) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6561) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6569) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6568) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6567) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6566) && (is_tcp) && true && (dst_port_is_http || dst_port==6500) )
    return true;
  if ( (rule_ID_in==6565) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6564) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6563) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6577) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6576) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6575) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6574) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6573) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6572) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6594) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6593) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6592) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6591) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6590) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6586) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6585) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6584) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6583) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6600) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6599) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6627) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6626) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6640) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6639) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6638) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6652) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6651) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6671) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6670) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6669) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6668) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6667) && (is_tcp) && true && (dst_port_is_http || dst_port==8880) )
    return true;
  if ( (rule_ID_in==6682) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6681) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6680) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6677) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6676) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6675) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6674) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6703) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6702) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6701) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6700) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6699) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6698) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==6697) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6696) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6695) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6694) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6693) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6692) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6691) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6690) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6689) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6686) && (is_tcp) && true && ((dst_port==443) || (dst_port==3606)) )
    return true;
  if ( (rule_ID_in==6685) && (is_tcp) && true && ((dst_port==443) || (dst_port==3606)) )
    return true;
  if ( (rule_ID_in==6684) && (is_tcp) && true && ((dst_port==443) || (dst_port==3606)) )
    return true;
  if ( (rule_ID_in==6683) && (is_tcp) && true && ((dst_port==443) || (dst_port==3606)) )
    return true;
  if ( (rule_ID_in==6713) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6710) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6709) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6720) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6719) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==6718) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6722) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6738) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6737) && (is_tcp) && true && (dst_port_is_http || dst_port==4444) )
    return true;
  if ( (rule_ID_in==6736) && (is_tcp) && true && (dst_port_is_http || dst_port==4444) )
    return true;
  if ( (rule_ID_in==6735) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6734) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6733) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6732) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6731) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6730) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6729) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6768) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6774) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6780) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6779) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6778) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6777) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6812) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6811) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==6810) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==6809) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==6808) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6815) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6819) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6818) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6817) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6816) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6832) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==6831) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6830) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6837) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6836) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==6850) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6849) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6848) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6847) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==6846) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6845) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==6844) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6843) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6842) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6841) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6840) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6839) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==6862) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6861) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6860) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6859) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6858) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6857) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6856) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6855) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6854) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6853) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6884) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6883) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6881) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6880) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6878) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==6877) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==6876) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==6875) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==6874) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6873) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==6872) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==6871) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==6870) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6866) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6865) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6888) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6887) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6886) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6885) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6893) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6892) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6891) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6898) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6919) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6904) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6903) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6902) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6901) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6949) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6948) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6947) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6946) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6945) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6944) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6943) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6942) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6941) && (is_tcp) && true && ((dst_port==20) || (dst_port==21) || (dst_port==25)) )
    return true;
  if ( (rule_ID_in==6940) && (is_tcp) && true && (dst_port==4444) )
    return true;
  if ( (rule_ID_in==6939) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6959) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6958) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6957) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6956) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6968) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6967) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6966) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6965) && (is_tcp) && true && (dst_port==8393) )
    return true;
  if ( (rule_ID_in==6964) && (is_tcp) && true && (dst_port==8393) )
    return true;
  if ( (rule_ID_in==6976) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6975) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6974) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6991) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6990) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6989) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6988) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6987) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6986) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6985) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6984) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6983) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7019) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==7018) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7017) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7004) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6993) && (is_tcp) && true && (dst_port==11000) )
    return true;
  if ( (rule_ID_in==6992) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7023) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7030) && (is_tcp) && true && (dst_port==8852) )
    return true;
  if ( (rule_ID_in==7025) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==7043) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7042) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7040) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7038) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7037) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7036) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7035) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7034) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7033) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7055) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7054) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7053) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7047) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7046) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7045) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7044) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7075) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7074) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7073) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7072) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7086) && (is_tcp) && true && (dst_port==3000) )
    return true;
  if ( (rule_ID_in==7085) && (is_tcp) && true && (dst_port==3000) )
    return true;
  if ( (rule_ID_in==7084) && (is_tcp) && true && (dst_port==3000) )
    return true;
  if ( (rule_ID_in==7083) && (is_tcp) && true && (dst_port==3000) )
    return true;
  if ( (rule_ID_in==7099) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==7098) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==7097) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==7096) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==7125) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==7124) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7123) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7122) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==7121) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7120) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7119) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7118) && (!is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==7154) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7153) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7152) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==7151) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7150) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7149) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7148) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7147) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7146) && (is_tcp) && true && (dst_port==22222) )
    return true;
  if ( (rule_ID_in==7145) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7144) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7143) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7142) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7141) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7140) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7139) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7138) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7137) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7136) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7135) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7158) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==7169) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7168) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7173) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7171) && (is_tcp) && true && (dst_port_is_http || dst_port==443) )
    return true;
  if ( (rule_ID_in==7170) && (is_tcp) && true && (dst_port_is_http || dst_port==443) )
    return true;
  if ( (rule_ID_in==7177) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7176) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7175) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7174) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7197) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7192) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7191) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7190) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7189) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7188) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7187) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7186) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7185) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7203) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7202) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7220) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7219) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7218) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7217) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7214) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7213) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7226) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7225) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==7224) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==7223) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7234) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==7233) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==7232) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==7231) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==7230) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==7229) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==7228) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==7227) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==498) && (is_tcp) && (src_port==21) && true )
    return true;
  if ( (rule_ID_in==499) && (is_tcp) && (src_port==21) && true )
    return true;
  if ( (rule_ID_in==967) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2224) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==3022) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1652) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1444) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1382) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1381) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1375) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1342) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==1341) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1297) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1283) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1279) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1244) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1233) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1219) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1197) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1167) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1063) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1062) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1013) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==988) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==987) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==986) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==985) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==983) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==982) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==981) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==980) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==958) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==957) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==953) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==952) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==944) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==938) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==927) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==926) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==925) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==924) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==923) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==922) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==921) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==920) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==919) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==918) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==917) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==915) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==914) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==913) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==902) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==874) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==873) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==863) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==861) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==860) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==859) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==856) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==842) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==841) && (!is_tcp) && true && (dst_port==137) )
    return true;
  if ( (rule_ID_in==835) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==800) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==792) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==733) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==680) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==651) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==630) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==338) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==285) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==277) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==136) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==130) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==126) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==124) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==123) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==120) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==119) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==115) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==92) && (is_tcp) && true && (dst_port==456) )
    return true;
  if ( (rule_ID_in==91) && (is_tcp) && true && (dst_port==456) )
    return true;
  if ( (rule_ID_in==90) && (is_tcp) && (src_port==456) && true )
    return true;
  if ( (rule_ID_in==89) && (is_tcp) && true && (dst_port==456) )
    return true;
  if ( (rule_ID_in==76) && (is_tcp) && true && (dst_port==456) )
    return true;
  if ( (rule_ID_in==70) && (is_tcp) && true && (dst_port==135) )
    return true;
  if ( (rule_ID_in==69) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==68) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==67) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==64) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==62) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==61) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==57) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==56) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==53) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==52) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==51) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==50) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==49) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==48) && (is_tcp) && true && (dst_port==868) )
    return true;
  if ( (rule_ID_in==47) && (is_tcp) && (src_port==868) && true )
    return true;
  if ( (rule_ID_in==46) && (is_tcp) && (src_port==868) && true )
    return true;
  if ( (rule_ID_in==45) && (is_tcp) && (src_port==868) && true )
    return true;
  if ( (rule_ID_in==44) && (is_tcp) && (src_port==868) && true )
    return true;
  if ( (rule_ID_in==43) && (is_tcp) && true && (dst_port==10050) )
    return true;
  if ( (rule_ID_in==42) && (is_tcp) && true && (dst_port==10050) )
    return true;
  if ( (rule_ID_in==41) && (is_tcp) && true && (dst_port==10050) )
    return true;
  if ( (rule_ID_in==40) && (is_tcp) && true && (dst_port==10050) )
    return true;
  if ( (rule_ID_in==19) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==17) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==16) && (is_tcp) && true && (dst_port==21) )
    return true;
  if ( (rule_ID_in==15) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==13) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1426) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1424) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1422) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1471) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1470) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1475) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1495) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1494) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1497) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1505) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1504) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1718) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1834) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==1886) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1885) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1884) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1882) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1994) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2057) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2144) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2143) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2226) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2251) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2250) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2298) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2383) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2429) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2460) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2467) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2617) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==2719) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3154) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3175) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3197) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3338) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1725) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3506) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3505) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3511) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3844) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4367) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4387) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4386) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4385) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4412) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4411) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4410) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4409) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4408) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4407) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4406) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4436) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4477) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4476) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4475) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4474) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4473) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4472) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4471) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4470) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4551) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4666) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4665) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4733) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4755) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4765) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4763) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4762) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4760) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4759) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4778) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4777) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4776) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4775) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4789) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==4779) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4818) && (!is_tcp) && (src_port==53) && true )
    return true;
  if ( (rule_ID_in==4817) && (!is_tcp) && (src_port==53) && true )
    return true;
  if ( (rule_ID_in==4816) && (!is_tcp) && (src_port==53) && true )
    return true;
  if ( (rule_ID_in==4815) && (!is_tcp) && (src_port==53) && true )
    return true;
  if ( (rule_ID_in==4823) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4836) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4835) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4834) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4871) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4870) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4869) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4868) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5068) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5218) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5416) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5415) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5532) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5531) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5530) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5508) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5487) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5546) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5545) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5562) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5583) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5676) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5675) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5674) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5759) && (is_tcp) && ((src_port==139) || (src_port==445)) && true )
    return true;
  if ( (rule_ID_in==5869) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5868) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5867) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5883) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5925) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6162) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6177) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==6181) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6191) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6226) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6225) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6231) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6281) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==6299) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6310) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6331) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6410) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6409) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6408) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6416) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6415) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6414) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6413) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6548) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6571) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6570) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6596) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6631) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6630) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6625) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6624) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6623) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6622) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6621) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6664) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6663) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6662) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6659) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6658) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6657) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6656) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6648) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==6679) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6688) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6687) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6712) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6711) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6724) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==6723) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6882) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6867) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6938) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6937) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6954) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6962) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6961) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6970) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6969) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6982) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6981) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6980) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7021) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==7020) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==7081) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7080) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7079) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7094) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7093) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7092) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7091) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7090) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7089) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7088) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7087) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7082) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7117) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7116) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7104) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7103) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7102) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7172) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7195) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7194) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==7204) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7201) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7200) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7216) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7222) && (is_tcp) && ((src_port==443) || (src_port==447) || (src_port==449)) && true )
    return true;
  if ( (rule_ID_in==7221) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==532) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==523) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==483) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==478) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==55) && (is_tcp) && true && (dst_port==4563) )
    return true;
  if ( (rule_ID_in==54) && (is_tcp) && true && (dst_port==4563) )
    return true;
  if ( (rule_ID_in==1915) && (is_tcp) && true && (dst_port==20) )
    return true;
  if ( (rule_ID_in==3496) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4231) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4768) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4767) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4766) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4758) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5241) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6582) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7133) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7159) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7167) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7178) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==8) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==151) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==150) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==177) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==335) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==369) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==223) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==205) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==204) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==6504) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==4164) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4811) && (is_tcp) && (src_port==3240) && true )
    return true;
  if ( (rule_ID_in==4810) && (is_tcp) && (src_port==3240) && true )
    return true;
  if ( (rule_ID_in==4954) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4964) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4963) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4962) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5107) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==810) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2281) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3541) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2599) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2598) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2641) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2640) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2639) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3708) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5135) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5062) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5287) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==5842) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5841) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5840) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5839) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5838) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5837) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5854) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==12) && (is_tcp) && true && (dst_port==515) )
    return true;
  if ( (rule_ID_in==5352) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5283) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5202) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5199) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5196) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==866) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==834) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1453) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2568) && (is_tcp) && true && (dst_port==88) )
    return true;
  if ( (rule_ID_in==2797) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2782) && (!is_tcp) && (src_port==4433) && true )
    return true;
  if ( (rule_ID_in==2781) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2780) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2779) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2778) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2777) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2776) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2775) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2774) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2773) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2772) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2771) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2770) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2769) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==2873) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==3140) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3163) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==3242) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==3275) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3367) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3359) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2035) && (is_tcp) && true && ((dst_port==137) || (dst_port==139)) )
    return true;
  if ( (rule_ID_in==1740) && (is_tcp) && true && ((dst_port==137) || (dst_port==139)) )
    return true;
  if ( (rule_ID_in==801) && (is_tcp) && true && ((dst_port==138) || (dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==541) && (is_tcp) && true && (dst_port==3389) )
    return true;
  if ( (rule_ID_in==222) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==249) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==179) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==159) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==3436) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3551) && (is_tcp) && true && (dst_port==3389) )
    return true;
  if ( (rule_ID_in==3655) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3651) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3758) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3751) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3704) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3949) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3946) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3941) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3938) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3937) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3935) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3934) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4023) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4019) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4015) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4013) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4139) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4138) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4136) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4135) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4205) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4204) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4197) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4196) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4325) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4317) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4315) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4311) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4306) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4426) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4425) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4422) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4419) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4417) && (is_tcp) && ((src_port==135) || (src_port==139) || (src_port==445) || (src_port==49154)) && true )
    return true;
  if ( (rule_ID_in==4416) && (is_tcp) && true && ((dst_port==135) || (dst_port==139) || (dst_port==445) || (dst_port==49154)) )
    return true;
  if ( (rule_ID_in==4415) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4414) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==4522) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4520) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4516) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4514) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4512) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4509) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4508) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4638) && (!is_tcp) && (src_port==137) && (dst_port==137) )
    return true;
  if ( (rule_ID_in==4634) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4633) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4632) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4628) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4627) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4700) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4698) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4693) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4689) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4688) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4796) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4795) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4786) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4784) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4783) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4780) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4839) && (is_tcp) && (src_port==2049) && true )
    return true;
  if ( (rule_ID_in==4857) && (is_tcp) && true && (dst_port==389) )
    return true;
  if ( (rule_ID_in==4856) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4852) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4851) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4850) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4845) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4927) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4924) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4923) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4922) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4920) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4919) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4918) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4917) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4916) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4912) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4910) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4959) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5004) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5001) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5000) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4997) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4993) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4992) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4990) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5059) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5093) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5080) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5078) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5286) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5284) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5279) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5278) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5276) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5274) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5263) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5262) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5261) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4611) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4533) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5341) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5337) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5334) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5333) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5329) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5322) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5281) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5353) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5368) && (is_tcp) && (src_port==445) && true )
    return true;
  if ( (rule_ID_in==5367) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5383) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5396) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5395) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5394) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5393) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5392) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5389) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5414) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5451) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5516) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5496) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5477) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5476) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5475) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5609) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5651) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5724) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5786) && (is_tcp) && true && ((dst_port==139) || (dst_port==445)) )
    return true;
  if ( (rule_ID_in==5904) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5901) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==5892) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5943) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5942) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5939) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5936) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6018) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6013) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6006) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6083) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6126) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6124) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6104) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6103) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6096) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6094) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6163) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6172) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6171) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6187) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6186) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6214) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6208) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6206) && (is_tcp) && (src_port==53) && true )
    return true;
  if ( (rule_ID_in==6346) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6345) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6344) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6386) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6388) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6411) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6455) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6503) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6539) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6532) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6531) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6661) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6660) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6654) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6653) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6650) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6649) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6716) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6767) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6766) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6765) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6764) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6759) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6758) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6749) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==6813) && (!is_tcp) && true && (dst_port==67) )
    return true;
  if ( (rule_ID_in==6835) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6834) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6828) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6934) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6932) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6931) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6930) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6918) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6917) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6915) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6911) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6907) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6936) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6935) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7022) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6994) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7024) && (is_tcp) && true && (dst_port==3389) )
    return true;
  if ( (rule_ID_in==7041) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7049) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7134) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7115) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7114) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7113) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7111) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7110) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7196) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7199) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==7198) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==7212) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7210) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7209) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7208) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==7205) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==1130) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1131) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1129) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2556) && (is_tcp) && true && dst_port_is_ftp )
    return true;
  if ( (rule_ID_in==3818) && (is_tcp) && (src_port==23) && true )
    return true;
  if ( (rule_ID_in==4248) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5189) && (is_tcp) && true && (dst_port==55443) )
    return true;
  if ( (rule_ID_in==5374) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5373) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5372) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5371) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5821) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5820) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5819) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==5818) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6278) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6429) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==6428) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==4905) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5462) && (is_tcp) && true && (dst_port==143) )
    return true;
  if ( (rule_ID_in==5457) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==5456) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==3697) && (is_tcp) && (src_port==1900) && true )
    return true;
  if ( (rule_ID_in==199) && (is_tcp) && true && (dst_port==110) )
    return true;
  if ( (rule_ID_in==2249) && (is_tcp) && true && (dst_port==20171) )
    return true;
  if ( (rule_ID_in==2266) && (!is_tcp) && true && (dst_port==52302) )
    return true;
  if ( (rule_ID_in==2648) && (is_tcp) && true && (dst_port==12401) )
    return true;
  if ( (rule_ID_in==1225) && (is_tcp) && true && ((dst_port==12397) || (dst_port==12399)) )
    return true;
  if ( (rule_ID_in==5242) && (!is_tcp) && true && (dst_port==20010) )
    return true;
  if ( (rule_ID_in==5308) && (!is_tcp) && true && (dst_port==260) )
    return true;
  if ( (rule_ID_in==5307) && (!is_tcp) && true && (dst_port==260) )
    return true;
  if ( (rule_ID_in==4806) && (!is_tcp) && true && (dst_port==161) )
    return true;
  if ( (rule_ID_in==10) && (is_tcp) && true && (dst_port==23) )
    return true;
  if ( (rule_ID_in==9) && (is_tcp) && true && (dst_port==23) )
    return true;
  if ( (rule_ID_in==626) && (is_tcp) && (src_port==23) && true )
    return true;
  if ( (rule_ID_in==2933) && (is_tcp) && true && (dst_port==23) )
    return true;
  if ( (rule_ID_in==937) && (is_tcp) && (src_port==2000) && true )
    return true;
  if ( (rule_ID_in==698) && (is_tcp) && (src_port==5038) && true )
    return true;
  if ( (rule_ID_in==2197) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2196) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==344) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==278) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==171) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==141) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==140) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==127) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==1699) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1698) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1711) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1723) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1722) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1849) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1848) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1847) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1858) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2355) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2973) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==3021) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3023) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3094) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4227) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4573) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4572) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4571) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5875) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6196) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6315) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6314) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6352) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6351) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5877) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2839) && (is_tcp) && true && (dst_port==80) )
    return true;
  if ( (rule_ID_in==5878) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5926) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5960) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5959) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==5958) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==6021) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==6059) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==6058) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6057) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6056) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6070) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6069) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6068) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6067) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==6739) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6770) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==102) && (is_tcp) && true && ((dst_port>=16800) && (dst_port<=17000)) )
    return true;
  if ( (rule_ID_in==103) && (is_tcp) && ((src_port>=16800) && (src_port<=17000)) && true )
    return true;
  if ( (rule_ID_in==131) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3082) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4625) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==736) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==558) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==477) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1473) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1472) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1503) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1502) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1501) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1500) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1474) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==476) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4907) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5251) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5260) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5259) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5653) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5986) && (is_tcp) && true && ((dst_port==10001) || (dst_port==10002)) )
    return true;
  if ( (rule_ID_in==6369) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6379) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6378) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2981) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==2980) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==230) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==229) && (is_tcp) && (src_port==143) && true )
    return true;
  if ( (rule_ID_in==4739) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5782) && (is_tcp) && ((src_port==110) || (src_port==143)) && true )
    return true;
  if ( (rule_ID_in==5781) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==7105) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==3557) && (is_tcp) && true && ((dst_port>=1024) && (dst_port<=5000)) )
    return true;
  if ( (rule_ID_in==2818) && (is_tcp) && true && (dst_port==3306) )
    return true;
  if ( (rule_ID_in==234) && (is_tcp) && (src_port>=1024) && true )
    return true;
  if ( (rule_ID_in==6978) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6977) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1334) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1273) && (is_tcp) && (src_port==443) && true )
    return true;
  if ( (rule_ID_in==1096) && (is_tcp) && true && (dst_port_is_http || dst_port==5555) )
    return true;
  if ( (rule_ID_in==1071) && (is_tcp) && true && ((dst_port==5001) || (dst_port==5002)) )
    return true;
  if ( (rule_ID_in==1068) && (is_tcp) && true && (dst_port==3000) )
    return true;
  if ( (rule_ID_in==1067) && (is_tcp) && true && (dst_port==3000) )
    return true;
  if ( (rule_ID_in==1066) && (is_tcp) && true && (dst_port==3000) )
    return true;
  if ( (rule_ID_in==1064) && (is_tcp) && true && (dst_port==3000) )
    return true;
  if ( (rule_ID_in==276) && (is_tcp) && true && (dst_port==2400) )
    return true;
  if ( (rule_ID_in==275) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==274) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==273) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==240) && (is_tcp) && (src_port==41523) && true )
    return true;
  if ( (rule_ID_in==20) && (is_tcp) && true && (dst_port==13724) )
    return true;
  if ( (rule_ID_in==1467) && (!is_tcp) && true && (dst_port==623) )
    return true;
  if ( (rule_ID_in==1469) && (is_tcp) && (src_port==8575) && true )
    return true;
  if ( (rule_ID_in==2048) && (is_tcp) && true && (dst_port==2400) )
    return true;
  if ( (rule_ID_in==2182) && (is_tcp) && true && ((dst_port==19985) || (dst_port==19988)) )
    return true;
  if ( (rule_ID_in==2238) && (is_tcp) && true && ((dst_port==21) || (dst_port==25) || (dst_port==443) || (dst_port==465) || (dst_port==636) || (dst_port==992) || (dst_port==993) || (dst_port==995) || (dst_port==2484)) )
    return true;
  if ( (rule_ID_in==2240) && (is_tcp) && true && ((dst_port==21) || (dst_port==25) || (dst_port==443) || (dst_port==465) || (dst_port==636) || (dst_port==992) || (dst_port==993) || (dst_port==995) || (dst_port==2484)) )
    return true;
  if ( (rule_ID_in==2239) && (is_tcp) && true && ((dst_port==21) || (dst_port==25) || (dst_port==443) || (dst_port==465) || (dst_port==636) || (dst_port==992) || (dst_port==993) || (dst_port==995) || (dst_port==2484)) )
    return true;
  if ( (rule_ID_in==2246) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2261) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2264) && (is_tcp) && ((src_port==21) || (src_port==25) || (src_port==443) || (src_port==465) || (src_port==636) || (src_port==992) || (src_port==993) || (src_port==995) || (src_port==2484)) && true )
    return true;
  if ( (rule_ID_in==2291) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2324) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2376) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2420) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2458) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2457) && (is_tcp) && true && (dst_port==443) )
    return true;
  if ( (rule_ID_in==2473) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2472) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2528) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2662) && (!is_tcp) && true && ((dst_port==696) || (dst_port==7426)) )
    return true;
  if ( (rule_ID_in==2747) && (is_tcp) && true && (dst_port==40003) )
    return true;
  if ( (rule_ID_in==2755) && (!is_tcp) && true && ((dst_port==696) || (dst_port==7426)) )
    return true;
  if ( (rule_ID_in==2768) && (!is_tcp) && true && ((dst_port==696) || (dst_port==7426)) )
    return true;
  if ( (rule_ID_in==2817) && (!is_tcp) && true && ((dst_port==696) || (dst_port==7426)) )
    return true;
  if ( (rule_ID_in==2855) && (!is_tcp) && true && ((dst_port==696) || (dst_port==7426)) )
    return true;
  if ( (rule_ID_in==3131) && (is_tcp) && true && (dst_port==3465) )
    return true;
  if ( (rule_ID_in==2749) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==2201) && (is_tcp) && true && (dst_port==5555) )
    return true;
  if ( (rule_ID_in==2200) && (is_tcp) && true && (dst_port==5555) )
    return true;
  if ( (rule_ID_in==2199) && (is_tcp) && true && (dst_port==5555) )
    return true;
  if ( (rule_ID_in==2198) && (is_tcp) && true && (dst_port==5555) )
    return true;
  if ( (rule_ID_in==2109) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1835) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1685) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1623) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1566) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1565) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1564) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1563) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1562) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1513) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1499) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1488) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1478) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1468) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1463) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1448) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1447) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1446) && (is_tcp) && true && (dst_port>=1024) )
    return true;
  if ( (rule_ID_in==1352) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1351) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1065) && (is_tcp) && true && (dst_port==3000) )
    return true;
  if ( (rule_ID_in==624) && (is_tcp) && true && (dst_port==8300) )
    return true;
  if ( (rule_ID_in==623) && (is_tcp) && true && (dst_port==8300) )
    return true;
  if ( (rule_ID_in==429) && (is_tcp) && true && (dst_port==1500) )
    return true;
  if ( (rule_ID_in==239) && (is_tcp) && (src_port==41523) && true )
    return true;
  if ( (rule_ID_in==238) && (is_tcp) && true && (dst_port==50000) )
    return true;
  if ( (rule_ID_in==237) && (is_tcp) && true && (dst_port==631) )
    return true;
  if ( (rule_ID_in==233) && (is_tcp) && true && ( ((dst_port>=5900) && (dst_port<=5999)) || (dst_port==5800) ) )
    return true;
  if ( (rule_ID_in==27) && (is_tcp) && true && ( ((dst_port>=5900) && (dst_port<=5999)) || (dst_port==5800) ) )
    return true;
  if ( (rule_ID_in==3657) && (is_tcp) && true && (dst_port==8045) )
    return true;
  if ( (rule_ID_in==3656) && (is_tcp) && true && (dst_port==8045) )
    return true;
  if ( (rule_ID_in==3735) && (is_tcp) && true && (dst_port==51000) )
    return true;
  if ( (rule_ID_in==3963) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3962) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==3964) && (is_tcp) && true && (dst_port_is_http || (dst_port==1099) || (dst_port==6099) || (dst_port==7001)) )
    return true;
  if ( (rule_ID_in==4079) && (is_tcp) && true && ((dst_port==22) || (dst_port==23)) )
    return true;
  if ( (rule_ID_in==4143) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4142) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4141) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4157) && (is_tcp) && (src_port==22) && true )
    return true;
  if ( (rule_ID_in==4182) && (!is_tcp) && true && (dst_port==123) )
    return true;
  if ( (rule_ID_in==4181) && (!is_tcp) && true && (dst_port==123) )
    return true;
  if ( (rule_ID_in==3991) && (!is_tcp) && true && (dst_port==500) )
    return true;
  if ( (rule_ID_in==4236) && (!is_tcp) && true && (dst_port==500) )
    return true;
  if ( (rule_ID_in==691) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4375) && (is_tcp) && true && (dst_port==6379) )
    return true;
  if ( (rule_ID_in==4504) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4609) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4672) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==4813) && (is_tcp) && true && (dst_port==11460) )
    return true;
  if ( (rule_ID_in==4825) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4887) && (!is_tcp) && true && ((dst_port==500) || (dst_port==848) || (dst_port==4500) || (dst_port==4848)) )
    return true;
  if ( (rule_ID_in==4886) && (!is_tcp) && true && ((dst_port==500) || (dst_port==848) || (dst_port==4500) || (dst_port==4848)) )
    return true;
  if ( (rule_ID_in==4885) && (!is_tcp) && ((src_port==500) || (src_port==848) || (src_port==4500) || (src_port==4848)) && true )
    return true;
  if ( (rule_ID_in==4900) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4925) && (is_tcp) && true && (dst_port==11460) )
    return true;
  if ( (rule_ID_in==4908) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4906) && (is_tcp) && true && (dst_port==11460) )
    return true;
  if ( (rule_ID_in==4969) && (!is_tcp) && true && (dst_port==53) )
    return true;
  if ( (rule_ID_in==5031) && (is_tcp) && true && (dst_port==11460) )
    return true;
  if ( (rule_ID_in==5096) && (is_tcp) && true && (dst_port==30024) )
    return true;
  if ( (rule_ID_in==5108) && (is_tcp) && ((src_port==3301) || (src_port==3302)) && true )
    return true;
  if ( (rule_ID_in==5236) && (is_tcp) && true && (dst_port==4786) )
    return true;
  if ( (rule_ID_in==5235) && (is_tcp) && true && (dst_port==4786) )
    return true;
  if ( (rule_ID_in==5234) && (is_tcp) && true && (dst_port==4786) )
    return true;
  if ( (rule_ID_in==5233) && (is_tcp) && true && (dst_port==4786) )
    return true;
  if ( (rule_ID_in==5256) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5255) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5254) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5253) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==5252) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==2253) && (is_tcp) && (src_port==1194) && true )
    return true;
  if ( (rule_ID_in==2252) && (is_tcp) && (src_port==1194) && true )
    return true;
  if ( (rule_ID_in==5323) && (is_tcp) && true && (dst_port==389) )
    return true;
  if ( (rule_ID_in==5348) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5363) && (is_tcp) && true && (dst_port==10051) )
    return true;
  if ( (rule_ID_in==5436) && (!is_tcp) && (src_port==123) && true )
    return true;
  if ( (rule_ID_in==5534) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5468) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5461) && (is_tcp) && true && ((dst_port==1556) || (dst_port==13720)) )
    return true;
  if ( (rule_ID_in==5458) && (is_tcp) && true && (dst_port==9000) )
    return true;
  if ( (rule_ID_in==5065) && (is_tcp) && true && (dst_port==50021) )
    return true;
  if ( (rule_ID_in==5586) && (!is_tcp) && true && (dst_port==500) )
    return true;
  if ( (rule_ID_in==3741) && (is_tcp) && true && (dst_port==5159) )
    return true;
  if ( (rule_ID_in==3740) && (is_tcp) && (src_port==6780) && true )
    return true;
  if ( (rule_ID_in==3739) && (is_tcp) && true && (dst_port==6780) )
    return true;
  if ( (rule_ID_in==3738) && (is_tcp) && true && (dst_port==8011) )
    return true;
  if ( (rule_ID_in==5765) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5889) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5909) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5918) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==5951) && (is_tcp) && true && ((dst_port==8094) || (dst_port==8096) || (dst_port==8097) || (dst_port==8098) || (dst_port==9121)) )
    return true;
  if ( (rule_ID_in==6080) && (is_tcp) && true && (dst_port==7001) )
    return true;
  if ( (rule_ID_in==6079) && (is_tcp) && true && (dst_port==7001) )
    return true;
  if ( (rule_ID_in==6081) && (is_tcp) && true && (dst_port==5432) )
    return true;
  if ( (rule_ID_in==6084) && (is_tcp) && true && (dst_port==4786) )
    return true;
  if ( (rule_ID_in==6086) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6085) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6203) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==6202) && (is_tcp) && true && (dst_port==25) )
    return true;
  if ( (rule_ID_in==6502) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6579) && (is_tcp) && true && (dst_port==7001) )
    return true;
  if ( (rule_ID_in==6578) && (is_tcp) && true && (dst_port==7001) )
    return true;
  if ( (rule_ID_in==6814) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6838) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6869) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6868) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6896) && (is_tcp) && true && (dst_port==4840) )
    return true;
  if ( (rule_ID_in==6895) && (is_tcp) && true && (dst_port==4840) )
    return true;
  if ( (rule_ID_in==6973) && (is_tcp) && true && ((dst_port>=3900) && (dst_port<=3999)) )
    return true;
  if ( (rule_ID_in==6972) && (is_tcp) && true && ((dst_port>=3300) && (dst_port<=3399)) )
    return true;
  if ( (rule_ID_in==5187) && (is_tcp) && ((src_port==139) || (src_port==445)) && true )
    return true;
  if ( (rule_ID_in==5816) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==6728) && (is_tcp) && true && (dst_port==445) )
    return true;
  if ( (rule_ID_in==4369) && (is_tcp) && true && (dst_port==5054) )
    return true;
  if ( (rule_ID_in==4368) && (is_tcp) && true && (dst_port==5054) )
    return true;
  if ( (rule_ID_in==1378) && (is_tcp) && true && (dst_port==50000) )
    return true;
  if ( (rule_ID_in==1199) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==533) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==428) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==358) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==235) && (is_tcp) && src_port_is_http && true )
    return true;
  if ( (rule_ID_in==1579) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1625) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1704) && (!is_tcp) && true && (dst_port==7329) )
    return true;
  if ( (rule_ID_in==1703) && (!is_tcp) && true && (dst_port==7329) )
    return true;
  if ( (rule_ID_in==1702) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1965) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2001) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2004) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2078) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2088) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2192) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2204) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2357) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2388) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2418) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==2430) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2440) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2465) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2464) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2552) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2750) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2882) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2877) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3010) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3156) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3283) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3318) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3377) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2029) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2003) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1933) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1892) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1888) && (is_tcp) && true && (dst_port==7071) )
    return true;
  if ( (rule_ID_in==1883) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1729) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1441) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==864) && (is_tcp) && true && (dst_port==383) )
    return true;
  if ( (rule_ID_in==231) && (is_tcp) && true && (dst_port==3128) )
    return true;
  if ( (rule_ID_in==3454) && (is_tcp) && true && ((dst_port==52869) || (dst_port==49152)) )
    return true;
  if ( (rule_ID_in==3488) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3487) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3517) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3516) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3515) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3514) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3816) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==3950) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4048) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4075) && (is_tcp) && true && dst_port_is_file_data )
    return true;
  if ( (rule_ID_in==4125) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4221) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4220) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4219) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4239) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4293) && (is_tcp) && true && (dst_port_is_http || (dst_port==1099) || (dst_port==6099) || (dst_port==7001)) )
    return true;
  if ( (rule_ID_in==4292) && (is_tcp) && true && (dst_port_is_http || (dst_port==1099) || (dst_port==6099) || (dst_port==7001)) )
    return true;
  if ( (rule_ID_in==4563) && (is_tcp) && true && ((dst_port==8088) || (dst_port==8089)) )
    return true;
  if ( (rule_ID_in==4552) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4543) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4626) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4662) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4661) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4664) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4671) && (is_tcp) && src_port_is_file_data && true )
    return true;
  if ( (rule_ID_in==4670) && (is_tcp) && true && (dst_port==8445) )
    return true;
  if ( (rule_ID_in==4735) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4752) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4751) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4757) && (is_tcp) && true && true )
    return true;
  if ( (rule_ID_in==4819) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4814) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4833) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4935) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==4980) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5037) && (is_tcp) && true && ((dst_port==5555) || (dst_port==7547)) )
    return true;
  if ( (rule_ID_in==5055) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5058) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5063) && (is_tcp) && true && (dst_port==7001) )
    return true;
  if ( (rule_ID_in==5103) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5109) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5155) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5157) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5171) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5185) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5190) && (is_tcp) && true && (dst_port==55443) )
    return true;
  if ( (rule_ID_in==5225) && (is_tcp) && true && (dst_port==55443) )
    return true;
  if ( (rule_ID_in==5244) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5250) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5258) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5305) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5344) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5366) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5427) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5533) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5529) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5528) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5526) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5490) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5485) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5484) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5483) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5469) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5467) && (is_tcp) && (src_port==8750) && true )
    return true;
  if ( (rule_ID_in==5454) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5115) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5114) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5113) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5112) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5587) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5606) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5617) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5647) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5648) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5662) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5661) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5681) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5680) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5685) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5684) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5780) && (is_tcp) && true && (dst_port==37215) )
    return true;
  if ( (rule_ID_in==5804) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5803) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5813) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5811) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5810) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5822) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5851) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5853) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5865) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5891) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5913) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5912) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5920) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5948) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5972) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5987) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==5981) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6044) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6043) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6041) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6046) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6082) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6130) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6129) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6156) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6176) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6175) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6184) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6183) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6303) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6312) && (is_tcp) && true && (dst_port==7001) )
    return true;
  if ( (rule_ID_in==6311) && (is_tcp) && true && (dst_port==7001) )
    return true;
  if ( (rule_ID_in==6332) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6340) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6362) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6376) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6375) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6471) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6484) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6494) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6509) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6547) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6588) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6665) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6672) && (is_tcp) && true && (dst_port==50000) )
    return true;
  if ( (rule_ID_in==6833) && (is_tcp) && true && ((dst_port==8500) || (dst_port==8501)) )
    return true;
  if ( (rule_ID_in==6852) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6851) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6879) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6950) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6953) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6955) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==6971) && (is_tcp) && true && dst_port_is_file_data )
    return true;
  if ( (rule_ID_in==6979) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7039) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7101) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7100) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7157) && (is_tcp) && true && ((dst_port==11002) || (dst_port==11004) || (dst_port==11006)) )
    return true;
  if ( (rule_ID_in==7193) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7235) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1) && (is_tcp) && (src_port==1433) && true )
    return true;
  if ( (rule_ID_in==180) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==221) && (is_tcp) && true && (dst_port==1433) )
    return true;
  if ( (rule_ID_in==293) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==292) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==1486) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2137) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==2136) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==723) && (is_tcp) && ((src_port==1315) || (src_port==2315)) && true )
    return true;
  if ( (rule_ID_in==291) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==224) && (is_tcp) && true && (dst_port==50000) )
    return true;
  if ( (rule_ID_in==144) && (is_tcp) && true && (dst_port==50000) )
    return true;
  if ( (rule_ID_in==128) && (is_tcp) && true && (dst_port==7210) )
    return true;
  if ( (rule_ID_in==87) && (is_tcp) && true && (dst_port==21064) )
    return true;
  if ( (rule_ID_in==6899) && (is_tcp) && true && dst_port_is_http )
    return true;
  if ( (rule_ID_in==7236) && (is_tcp) && true && true )
    return true;
  return false;
}
