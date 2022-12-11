#include "../include/dycfoo.h"
#include "../include/uri_split.i.hd.c.h"
void __dyc_foo(void) 
{ int state ;
  char const   *path_first ;
  char const   *last_slash ;
  char const   *p ;
  int32_t port ;
  int tmp___0 ;
  int __dyc_funcallvar_2 ;

  {
  p = (char const   *)__dyc_read_ptr__char();
  port = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  state = 0;
  path_first = 0;
  last_slash = 0;
  tmp___0 = 0;
  if ((int )*p == 47) {
    goto switch_7_47;
  } else {
    if ((int )*p == 63) {
      goto switch_7_63;
    } else {
      if ((int )*p == 35) {
        goto switch_7_35;
      } else {
        if (0) {
          switch_7_47:  
          last_slash = p;
          path_first = last_slash;
          state = 15;
          goto switch_7_break;
          switch_7_63:  
          state = 16;
          goto switch_7_break;
          switch_7_35:  
          state = 18;
          goto switch_7_break;
        } else {
          switch_7_break:  ;
        }
      }
    }
  }
  goto __dyc_dummy_label;
  switch_6_default:  ;
  if (port != -1) {
    {
    tmp___0 = __dyc_funcallvar_2;
    }
    if (tmp___0) {
      port *= 10;
      port += (int32_t )((int const   )*p - 48);
      if (port > 65535) {
        port = -1;
      }
    } else {
      port = -1;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(state);
  __dyc_print_ptr__char(path_first);
  __dyc_printpre_byte(port);
}
}
