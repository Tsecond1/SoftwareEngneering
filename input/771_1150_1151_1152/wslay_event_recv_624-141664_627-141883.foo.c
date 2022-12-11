#include "../include/dycfoo.h"
#include "../include/wslay_event.i.hd.c.h"
void __dyc_foo(void) 
{ struct wslay_frame_iocb iocb ;
  uint16_t status_code ;
  uint8_t *msg ;
  size_t msg_length ;
  int tmp___11 ;
  wslay_event_context_ptr ctx ;
  int __dyc_funcallvar_15 ;
  uint8_t *__dyc_funcallvar_16 ;

  {
  iocb = __dyc_read_comp_29wslay_frame_iocb();
  ctx = __dyc_read_ptr__comp_31wslay_event_context();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_read_ptr__typdef_uint8_t();
  status_code = 0;
  msg = 0;
  msg_length = 0;
  tmp___11 = 0;
  status_code = (uint16_t )0;
  msg = (uint8_t *)((void *)0);
  msg_length = (size_t )0;
  tmp___11 = __dyc_funcallvar_15;
  if (tmp___11) {
    if (((int )iocb.opcode >> 3) & 1) {
      _L___6:  
      {
      msg = __dyc_funcallvar_16;
      }
      if ((ctx->imsg)->msg_length) {
        if (! msg) {
          ctx->read_enabled = (unsigned char)0;
          goto __dyc_dummy_label;
        }
      }
      msg_length = (ctx->imsg)->msg_length;
    }
  } else {
    goto _L___6;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(status_code);
  __dyc_print_ptr__typdef_uint8_t(msg);
  __dyc_printpre_byte(msg_length);
}
}
