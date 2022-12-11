#include "../include/dycfoo.h"
#include "../include/wslay_frame.i.hd.c.h"
void __dyc_foo(void) 
{ uint8_t const   *datamark ;
  uint8_t const   *datalimit ;
  size_t datalen ;
  uint8_t const   *writelimit ;
  unsigned long tmp___1 ;
  size_t writelen ;
  size_t i ;
  wslay_frame_context_ptr ctx ;

  {
  datamark = (uint8_t const   *)__dyc_read_ptr__typdef_uint8_t();
  datalimit = (uint8_t const   *)__dyc_read_ptr__typdef_uint8_t();
  ctx = __dyc_read_ptr__comp_30wslay_frame_context();
  datalen = 0;
  writelimit = 0;
  tmp___1 = 0;
  writelen = 0;
  i = 0;
  ctx->ostate = 3;
  goto __dyc_dummy_label;
  while_0_continue:  ;
  if (! ((unsigned long )datamark < (unsigned long )datalimit)) {
    goto __dyc_dummy_label;
  }
  datalen = (unsigned long )(datalimit - datamark);
  if (sizeof(uint8_t [4096]) < datalen) {
    tmp___1 = sizeof(uint8_t [4096]);
  } else {
    tmp___1 = datalen;
  }
  writelimit = datamark + tmp___1;
  writelen = (unsigned long )(writelimit - datamark);
  i = 0UL;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(writelen);
  __dyc_printpre_byte(i);
}
}
