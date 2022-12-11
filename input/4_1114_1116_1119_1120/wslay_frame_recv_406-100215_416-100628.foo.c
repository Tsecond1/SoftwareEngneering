#include "../include/dycfoo.h"
#include "../include/wslay_frame.i.hd.c.h"
void __dyc_foo(void) 
{ ssize_t r ;
  uint8_t *readlimit ;
  uint8_t *readmark ;
  uint64_t rempayloadlen ;
  wslay_frame_context_ptr ctx ;
  ssize_t __dyc_funcallvar_5 ;

  {
  ctx = __dyc_read_ptr__comp_30wslay_frame_context();
  __dyc_funcallvar_5 = (ssize_t )__dyc_readpre_byte();
  r = 0;
  readlimit = 0;
  readmark = 0;
  rempayloadlen = 0;
  rempayloadlen = ctx->ipayloadlen - ctx->ipayloadoff;
  if ((unsigned long )(ctx->ibuflimit - ctx->ibufmark) == 0UL) {
    if (rempayloadlen > 0UL) {
      {
      r = __dyc_funcallvar_5;
      }
      if (r <= 0L) {
        goto __dyc_dummy_label;
      }
    }
  }
  readmark = ctx->ibufmark;
  if ((unsigned long )(ctx->ibuflimit - ctx->ibufmark) < rempayloadlen) {
    readlimit = ctx->ibuflimit;
  } else {
    readlimit = ctx->ibufmark + rempayloadlen;
  }
  if (ctx->imask) {
    {
    while (1) {
      while_4_continue:  ;
      if (! ((unsigned long )ctx->ibufmark != (unsigned long )readlimit)) {
        goto while_4_break;
      }
      *(ctx->ibufmark + 0) = (unsigned char )((int )*(ctx->ibufmark + 0) ^ (int )ctx->imaskkey[ctx->ipayloadoff % 4UL]);
      (ctx->ibufmark) ++;
      (ctx->ipayloadoff) ++;
    }
    while_4_break:  ;
    }
  } else {
    ctx->ibufmark = readlimit;
    ctx->ipayloadoff += (unsigned long )(readlimit - readmark);
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_uint8_t(readmark);
}
}
