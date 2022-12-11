#include "../include/dycfoo.h"
#include "../include/wslay_frame.i.hd.c.h"
void __dyc_foo(void) 
{ uint8_t *readlimit ;
  uint8_t *readmark ;
  uint64_t rempayloadlen ;
  wslay_frame_context_ptr ctx ;

  {
  rempayloadlen = (uint64_t )__dyc_readpre_byte();
  ctx = __dyc_read_ptr__comp_30wslay_frame_context();
  readlimit = 0;
  readmark = 0;
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
