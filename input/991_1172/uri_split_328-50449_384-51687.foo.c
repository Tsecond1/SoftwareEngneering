#include "../include/dycfoo.h"
#include "../include/uri_split.i.hd.c.h"
void __dyc_foo(void) 
{ int state ;
  char const   *path_first ;
  char const   *path_last ;
  char const   *query_first ;
  char const   *query_last ;
  char const   *fragment_first ;
  char const   *last_slash ;
  char const   *p ;
  int32_t port ;
  int tmp___2 ;
  int __dyc_funcallvar_4 ;

  {
  p = (char const   *)__dyc_read_ptr__char();
  port = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  state = 0;
  path_first = 0;
  path_last = 0;
  query_first = 0;
  query_last = 0;
  fragment_first = 0;
  last_slash = 0;
  tmp___2 = 0;
  switch_1_14:  
  if ((int )*p == 47) {
    goto switch_11_47;
  } else {
    if ((int )*p == 63) {
      goto switch_11_63;
    } else {
      if ((int )*p == 35) {
        goto switch_11_35;
      } else {
        {
        goto switch_11_default;
        if (0) {
          switch_11_47:  
          last_slash = p;
          path_first = last_slash;
          state = 15;
          goto switch_11_break;
          switch_11_63:  
          state = 16;
          goto switch_11_break;
          switch_11_35:  
          state = 18;
          goto switch_11_break;
          switch_11_default:  
          {
          tmp___2 = __dyc_funcallvar_4;
          }
          if (tmp___2) {
            port *= 10;
            port += (int32_t )((int const   )*p - 48);
            if (port > 65535) {
              goto __dyc_dummy_label;
            }
          } else {
            goto __dyc_dummy_label;
          }
        } else {
          switch_11_break:  ;
        }
        }
      }
    }
  }
  goto __dyc_dummy_label;
  switch_1_15:  
  if ((int )*p == 47) {
    goto switch_12_47;
  } else {
    if ((int )*p == 63) {
      goto switch_12_63;
    } else {
      if ((int )*p == 35) {
        goto switch_12_35;
      } else {
        if (0) {
          switch_12_47:  
          last_slash = p;
          goto switch_12_break;
          switch_12_63:  
          path_last = p;
          state = 16;
          goto switch_12_break;
          switch_12_35:  
          path_last = p;
          state = 18;
          goto switch_12_break;
        } else {
          switch_12_break:  ;
        }
      }
    }
  }
  goto __dyc_dummy_label;
  switch_1_16:  
  query_first = p;
  if ((int const   )*p == 35) {
    query_last = p;
    state = 18;
  } else {
    state = 17;
  }
  goto __dyc_dummy_label;
  switch_1_17:  
  if ((int const   )*p == 35) {
    query_last = p;
    state = 18;
  }
  goto __dyc_dummy_label;
  switch_1_18:  
  fragment_first = p;
  state = 19;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(state);
  __dyc_print_ptr__char(path_first);
  __dyc_print_ptr__char(path_last);
  __dyc_print_ptr__char(query_first);
  __dyc_print_ptr__char(query_last);
  __dyc_print_ptr__char(fragment_first);
  __dyc_print_ptr__char(last_slash);
}
}
