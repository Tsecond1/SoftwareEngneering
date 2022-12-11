#include "../include/dycfoo.h"
#include "../include/wslay_frame.i.hd.c.h"
void __dyc_foo(void) 
{ ptrdiff_t len___1 ;
  ssize_t r ;
  int flags ;
  size_t totallen ;
  uint8_t temp[4096] ;
  uint8_t const   *datamark ;
  uint8_t const   *datalimit ;
  size_t datalen ;
  uint8_t const   *writelimit ;
  unsigned long tmp___1 ;
  size_t writelen ;
  ssize_t r___0 ;
  size_t i ;
  ssize_t r___1 ;
  wslay_frame_context_ptr ctx ;
  struct wslay_frame_iocb *iocb ;
  ssize_t __dyc_funcallvar_3 ;
  ssize_t __dyc_funcallvar_4 ;
  ssize_t __dyc_funcallvar_5 ;

  {
  ctx = __dyc_read_ptr__comp_30wslay_frame_context();
  iocb = __dyc_read_ptr__comp_29wslay_frame_iocb();
  __dyc_funcallvar_3 = (ssize_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (ssize_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (ssize_t )__dyc_readpre_byte();
  len___1 = 0;
  r = 0;
  flags = 0;
  totallen = 0;
  datamark = 0;
  datalimit = 0;
  datalen = 0;
  writelimit = 0;
  tmp___1 = 0;
  writelen = 0;
  r___0 = 0;
  i = 0;
  r___1 = 0;
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
  if ((int )ctx->ostate == 3) {
    totallen = (size_t )0;
    if (iocb->data_length > 0UL) {
      if (ctx->omask) {
        datamark = iocb->data;
        datalimit = iocb->data + iocb->data_length;
        {
        while (1) {
          while_0_continue:  ;
          if (! ((unsigned long )datamark < (unsigned long )datalimit)) {
            goto while_0_break;
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
          {
          while (1) {
            while_1_continue:  ;
            if (! (i < writelen)) {
              goto while_1_break;
            }
            temp[i] = (unsigned char )((int const   )*(datamark + i) ^ (int const   )ctx->omaskkey[(ctx->opayloadoff + i) % 4UL]);
            i ++;
          }
          while_1_break:  ;
          }
          {
          r___0 = __dyc_funcallvar_4;
          }
          if (r___0 > 0L) {
            if ((unsigned long )r___0 > writelen) {
              goto __dyc_dummy_label;
            } else {
              datamark += r___0;
              ctx->opayloadoff += (unsigned long )r___0;
              totallen += (unsigned long )r___0;
            }
          } else {
            if (totallen > 0UL) {
              goto while_0_break;
            } else {
              goto __dyc_dummy_label;
            }
          }
        }
        while_0_break:  ;
        }
      } else {
        {
        r___1 = __dyc_funcallvar_5;
        }
        if (r___1 > 0L) {
          if ((unsigned long )r___1 > iocb->data_length) {
            goto __dyc_dummy_label;
          } else {
            ctx->opayloadoff += (unsigned long )r___1;
            totallen = (unsigned long )r___1;
          }
        } else {
          goto __dyc_dummy_label;
        }
      }
    }
    if (ctx->opayloadoff == ctx->opayloadlen) {
      ctx->ostate = 0;
    }
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len___1);
  __dyc_printpre_byte(flags);
  __dyc_printpre_byte(totallen);
}
}
