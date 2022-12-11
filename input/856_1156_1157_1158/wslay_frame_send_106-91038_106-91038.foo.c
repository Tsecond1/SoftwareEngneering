#include "../include/dycfoo.h"
#include "../include/wslay_frame.i.hd.c.h"
void __dyc_foo(void) 
{ ptrdiff_t len___1 ;
  ssize_t r ;
  int flags ;
  wslay_frame_context_ptr ctx ;
  struct wslay_frame_iocb *iocb ;
  ssize_t __dyc_funcallvar_3 ;

  {
  ctx = __dyc_read_ptr__comp_30wslay_frame_context();
  iocb = __dyc_read_ptr__comp_29wslay_frame_iocb();
  __dyc_funcallvar_3 = (ssize_t )__dyc_readpre_byte();
  len___1 = 0;
  r = 0;
  flags = 0;
  if ((int )ctx->ostate == 2) {
    len___1 = (ptrdiff_t )(ctx->oheaderlimit - ctx->oheadermark);
    flags = 0;
    if (iocb->data_length > 0UL) {
      flags |= 1;
    }
    {
    r = __dyc_funcallvar_3;
    }
    if (r > 0L) {
      if (r > len___1) {
        goto __dyc_dummy_label;
      } else {
        ctx->oheadermark += r;
        if ((unsigned long )ctx->oheadermark == (unsigned long )ctx->oheaderlimit) {
          ctx->ostate = 3;
        } else {
          goto __dyc_dummy_label;
        }
      }
    } else {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len___1);
  __dyc_printpre_byte(flags);
}
}
