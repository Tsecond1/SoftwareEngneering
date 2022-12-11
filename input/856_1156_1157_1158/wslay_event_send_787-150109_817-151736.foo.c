#include "../include/dycfoo.h"
#include "../include/wslay_event.i.hd.c.h"
void __dyc_foo(void) 
{ ssize_t r ;
  uint16_t status_code ;
  unsigned short __v ;
  unsigned short __x ;
  int eof ;
  wslay_event_context_ptr ctx ;
  ssize_t __dyc_funcallvar_9 ;

  {
  r = (ssize_t )__dyc_readpre_byte();
  __v = (unsigned short )__dyc_readpre_byte();
  ctx = __dyc_read_ptr__comp_31wslay_event_context();
  __dyc_funcallvar_9 = (ssize_t )__dyc_readpre_byte();
  status_code = 0;
  __x = 0;
  eof = 0;
  if (r >= 0L) {
    ctx->opayloadoff += (unsigned long )r;
    if (ctx->opayloadoff == ctx->opayloadlen) {
      (ctx->queued_msg_count) --;
      ctx->queued_msg_length -= (ctx->omsg)->data_length;
      if ((int )(ctx->omsg)->opcode == 8) {
        status_code = (uint16_t )0;
        ctx->write_enabled = (unsigned char)0;
        ctx->close_status = (unsigned char )((int )ctx->close_status | 4);
        if ((ctx->omsg)->data_length >= 2UL) {
          {

          __x = status_code;

          status_code = __v;
          }
        }
        if ((int )status_code == 0) {
          ctx->status_code_sent = (unsigned short)1005;
        } else {
          ctx->status_code_sent = status_code;
        }
      }
      {

      ctx->omsg = (struct wslay_event_omsg *)((void *)0);
      }
    } else {
      goto __dyc_dummy_label;
    }
  } else {
    if (r != -101L) {
      ctx->write_enabled = (unsigned char)0;
      goto __dyc_dummy_label;
    } else {
      if (ctx->error != -401) {
        if (ctx->error != 0) {
          ctx->write_enabled = (unsigned char)0;
          goto __dyc_dummy_label;
        }
      }
    }
    goto __dyc_dummy_label;
  }
  if ((int )(ctx->omsg)->fin == 0) {
    if ((unsigned long )ctx->obuflimit == (unsigned long )ctx->obufmark) {
      {
      eof = 0;
      r = __dyc_funcallvar_9;
      }
      if (r == 0L) {
        if (eof == 0) {
          goto __dyc_dummy_label;
        } else {
          goto _L;
        }
      } else {
        _L:  
        if (r < 0L) {
          ctx->write_enabled = (unsigned char)0;
          goto __dyc_dummy_label;
        }
      }
      ctx->obuflimit = ctx->obuf + r;
      if (eof) {
        (ctx->omsg)->fin = (unsigned char)1;
      }
      ctx->opayloadlen = (unsigned long )r;
      ctx->opayloadoff = 0UL;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(__x);
  __dyc_printpre_byte(eof);
}
}
