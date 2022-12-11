#include "../include/dycfoo.h"
#include "../include/wslay_event.i.hd.c.h"
void __dyc_foo(void) 
{ ssize_t r ;
  uint16_t status_code ;
  uint8_t *msg ;
  uint8_t const   *reason ;
  size_t reason_length ;
  unsigned short __v ;
  int tmp___12 ;
  int tmp___13 ;
  wslay_event_context_ptr ctx ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;

  {
  msg = __dyc_read_ptr__typdef_uint8_t();
  __v = (unsigned short )__dyc_readpre_byte();
  ctx = __dyc_read_ptr__comp_31wslay_event_context();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  r = 0;
  status_code = 0;
  reason = 0;
  reason_length = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  status_code = __v;
  tmp___13 = __dyc_funcallvar_17;
  if (! tmp___13) {
    {

    tmp___12 = __dyc_funcallvar_18;
    r = (long )tmp___12;
    }
    if (r != 0L) {
      goto __dyc_dummy_label;
    }
    goto __dyc_dummy_label;
  }
  reason = (uint8_t const   *)(msg + 2);
  reason_length = (ctx->imsg)->msg_length - 2UL;
  reason = (uint8_t const   *)((void *)0);
  reason_length = 0UL;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(status_code);
  __dyc_print_ptr__typdef_uint8_t(reason);
  __dyc_printpre_byte(reason_length);
}
}
