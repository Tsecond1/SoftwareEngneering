#include "../include/dycfoo.h"
#include "../include/wslay_event.i.hd.c.h"
void __dyc_foo(void) 
{ struct wslay_frame_iocb iocb ;
  ssize_t r ;
  int tmp___10 ;
  struct wslay_event_on_msg_recv_arg arg ;
  uint16_t status_code ;
  uint8_t *msg ;
  size_t msg_length ;
  int tmp___11 ;
  uint8_t const   *reason ;
  size_t reason_length ;
  unsigned short __v ;
  unsigned short __x ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  struct wslay_event_msg pong_arg ;
  int tmp___15 ;
  wslay_event_context_ptr ctx ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  uint8_t *__dyc_funcallvar_16 ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;

  {
  iocb = __dyc_read_comp_29wslay_frame_iocb();
  __v = (unsigned short )__dyc_readpre_byte();
  ctx = __dyc_read_ptr__comp_31wslay_event_context();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_read_ptr__typdef_uint8_t();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  r = 0;
  tmp___10 = 0;
  memset(& arg, 0, sizeof(struct wslay_event_on_msg_recv_arg ));
  status_code = 0;
  msg = 0;
  msg_length = 0;
  tmp___11 = 0;
  reason = 0;
  reason_length = 0;
  __x = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  memset(& pong_arg, 0, sizeof(struct wslay_event_msg ));
  tmp___15 = 0;
  if (ctx->ipayloadoff == ctx->ipayloadlen) {
    if ((ctx->imsg)->fin) {
      if ((int )(ctx->imsg)->opcode == 1) {
        goto _L___5;
      } else {
        if ((int )(ctx->imsg)->opcode == 8) {
          _L___5:  
          if ((ctx->imsg)->utf8state != 0U) {
            {
            tmp___10 = __dyc_funcallvar_14;
            r = (long )tmp___10;
            }
            if (r != 0L) {
              goto __dyc_dummy_label;
            }
            goto __dyc_dummy_label;
          }
        }
      }
    }
    {

    }
    if ((ctx->imsg)->fin) {
      if (ctx->callbacks.on_msg_recv_callback) {
        goto _L___7;
      } else {
        if ((int )(ctx->imsg)->opcode == 8) {
          goto _L___7;
        } else {
          if ((int )(ctx->imsg)->opcode == 9) {
            _L___7:  
            {
            status_code = (uint16_t )0;
            msg = (uint8_t *)((void *)0);
            msg_length = (size_t )0;
            tmp___11 = __dyc_funcallvar_15;
            }
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
            if ((int )(ctx->imsg)->opcode == 8) {
              if ((ctx->imsg)->msg_length >= 2UL) {
                {

                __x = status_code;

                status_code = __v;
                tmp___13 = __dyc_funcallvar_17;
                }
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
              } else {
                reason = (uint8_t const   *)((void *)0);
                reason_length = 0UL;
              }
              ctx->close_status = (unsigned char )((int )ctx->close_status | 1);
              if ((int )status_code == 0) {
                ctx->status_code_recv = (unsigned short)1005;
              } else {
                ctx->status_code_recv = status_code;
              }
              {
              tmp___14 = __dyc_funcallvar_19;
              r = (long )tmp___14;
              }
              if (r != 0L) {
                {

                }
                goto __dyc_dummy_label;
              }
            } else {
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
            }
            if (ctx->callbacks.on_msg_recv_callback) {
              {
              arg.rsv = (ctx->imsg)->rsv;
              arg.opcode = (ctx->imsg)->opcode;
              arg.msg = (uint8_t const   *)msg;
              arg.msg_length = msg_length;
              arg.status_code = status_code;
              ctx->error = 0;

              }
            }
            {

            }
          }
        }
      }
      {

      }
      if ((unsigned long )ctx->imsg == (unsigned long )(& ctx->imsgs[1])) {
        ctx->imsg = & ctx->imsgs[0];
      }
    }
    ctx->ipayloadoff = 0UL;
    ctx->ipayloadlen = ctx->ipayloadoff;
  }
  __dyc_dummy_label:  ;
  __dyc_print_comp_32wslay_event_on_msg_recv_arg(arg);
  __dyc_printpre_byte(status_code);
  __dyc_print_ptr__typdef_uint8_t(msg);
  __dyc_printpre_byte(msg_length);
  __dyc_print_ptr__typdef_uint8_t(reason);
  __dyc_printpre_byte(reason_length);
  __dyc_printpre_byte(__x);
  __dyc_print_comp_36wslay_event_msg(pong_arg);
}
}
