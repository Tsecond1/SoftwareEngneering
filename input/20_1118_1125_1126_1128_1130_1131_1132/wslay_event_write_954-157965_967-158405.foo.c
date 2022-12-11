#include "../include/dycfoo.h"
#include "../include/wslay_event.i.hd.c.h"
void __dyc_foo(void) 
{ ssize_t r ;
  int eof ;
  wslay_event_context_ptr ctx ;
  ssize_t __dyc_funcallvar_9 ;

  {
  ctx = __dyc_read_ptr__comp_31wslay_event_context();
  __dyc_funcallvar_9 = (ssize_t )__dyc_readpre_byte();
  r = 0;
  eof = 0;
  eof = 0;
  r = __dyc_funcallvar_9;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(eof);
}
}
