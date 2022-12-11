#include "../include/dycfoo.h"
#include "../include/wslay_frame.i.hd.c.h"
void __dyc_foo(void) 
{ uint8_t *hdptr ;
  uint16_t len ;
  unsigned short __v ;
  unsigned short __x ;
  uint64_t len___0 ;
  uint64_t tmp ;
  int tmp___0 ;
  ptrdiff_t len___1 ;
  ssize_t r ;
  int flags ;
  wslay_frame_context_ptr ctx ;
  struct wslay_frame_iocb *iocb ;
  uint64_t __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  ssize_t __dyc_funcallvar_3 ;

  {
  __v = (unsigned short )__dyc_readpre_byte();
  ctx = __dyc_read_ptr__comp_30wslay_frame_context();
  iocb = __dyc_read_ptr__comp_29wslay_frame_iocb();
  __dyc_funcallvar_1 = (uint64_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (ssize_t )__dyc_readpre_byte();
  hdptr = 0;
  len = 0;
  __x = 0;
  len___0 = 0;
  tmp = 0;
  tmp___0 = 0;
  len___1 = 0;
  r = 0;
  flags = 0;
  if (iocb->data_length > iocb->payload_length) {
    goto __dyc_dummy_label;
  }
  if ((int )ctx->ostate == 0) {
    {
    hdptr = ctx->oheader;

    *hdptr = (unsigned char )((int )*hdptr | (int )((unsigned char )((unsigned int )((unsigned char )((int )iocb->fin << 7)) & 128U)));
    *hdptr = (unsigned char )((int )*hdptr | (int )((unsigned char )((unsigned int )((unsigned char )((int )iocb->rsv << 4)) & 112U)));
    *hdptr = (unsigned char )((int )*hdptr | (int )((unsigned char )((unsigned int )((unsigned char )((int )iocb->opcode)) & 15U)));
    hdptr ++;
    *hdptr = (unsigned char )((int )*hdptr | (int )((unsigned char )((unsigned int )((unsigned char )((int )iocb->mask << 7)) & 128U)));
    }
    if (((int )iocb->opcode >> 3) & 1) {
      if (iocb->payload_length > 125UL) {
        goto __dyc_dummy_label;
      }
    }
    if (iocb->payload_length < 126UL) {
      *hdptr = (unsigned char )((int )*hdptr | (int )((unsigned char )iocb->payload_length));
      hdptr ++;
    } else {
      if (iocb->payload_length < (uint64_t )(1 << 16)) {
        {
        __x = (unsigned short )iocb->payload_length;

        len = __v;
        *hdptr = (unsigned char )((int )*hdptr | 126);
        hdptr ++;

        hdptr += 2;
        }
      } else {
        if ((unsigned long long )iocb->payload_length < 1ULL << 63) {
          {
          tmp = __dyc_funcallvar_1;
          len___0 = tmp;
          *hdptr = (unsigned char )((int )*hdptr | 127);
          hdptr ++;

          hdptr += 8;
          }
        } else {
          goto __dyc_dummy_label;
        }
      }
    }
    if (iocb->mask) {
      {
      tmp___0 = __dyc_funcallvar_2;
      }
      if (tmp___0 != 0) {
        goto __dyc_dummy_label;
      } else {
        {
        ctx->omask = (unsigned char)1;

        hdptr += 4;
        }
      }
    }
    ctx->ostate = 2;
    ctx->oheadermark = ctx->oheader;
    ctx->oheaderlimit = hdptr;
    ctx->opayloadlen = iocb->payload_length;
    ctx->opayloadoff = 0UL;
  }
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
  __dyc_print_ptr__typdef_uint8_t(hdptr);
  __dyc_printpre_byte(len);
  __dyc_printpre_byte(__x);
  __dyc_printpre_byte(len___0);
  __dyc_printpre_byte(len___1);
  __dyc_printpre_byte(flags);
}
}
