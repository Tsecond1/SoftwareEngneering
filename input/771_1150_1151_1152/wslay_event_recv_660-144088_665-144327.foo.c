#include "../include/dycfoo.h"
#include "../include/wslay_event.i.hd.c.h"
void __dyc_foo(void) 
{ ssize_t r ;
  uint8_t *msg ;
  struct wslay_event_msg pong_arg ;
  int tmp___15 ;
  wslay_event_context_ptr ctx ;
  int __dyc_funcallvar_20 ;

  {
  r = (ssize_t )__dyc_readpre_byte();
  msg = __dyc_read_ptr__typdef_uint8_t();
  ctx = __dyc_read_ptr__comp_31wslay_event_context();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  memset(& pong_arg, 0, sizeof(struct wslay_event_msg ));
  tmp___15 = 0;
  if (r != 0L) {
    {

    }
    goto __dyc_dummy_label;
  }
  if ((int )(ctx->imsg)->opcode == 9) {
    {
    pong_arg.opcode = (unsigned char)10;
    pong_arg.msg = (uint8_t const   *)msg;
    pong_arg.msg_length = (ctx->imsg)->msg_length;
    tmp___15 = __dyc_funcallvar_20;
    r = (long )tmp___15;
    }
    if (r) {
      if (r != -302L) {
        {
        ctx->read_enabled = (unsigned char)0;

        }
        goto __dyc_dummy_label;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_comp_36wslay_event_msg(pong_arg);
}
}
