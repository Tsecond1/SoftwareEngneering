#include "../include/dycfoo.h"
#include "../include/uri_split.i.hd.c.h"
void __dyc_foo(void) 
{ int state ;
  char const   *host_first ;
  char const   *host_last ;
  char const   *path_first ;
  char const   *user_first ;
  char const   *user_last ;
  char const   *passwd_first ;
  char const   *passwd_last ;
  char const   *last_atmark ;
  char const   *last_slash ;
  char const   *p ;
  int32_t port ;
  int tmp___0 ;
  int __dyc_funcallvar_2 ;

  {
  p = (char const   *)__dyc_read_ptr__char();
  state = 0;
  host_first = 0;
  host_last = 0;
  path_first = 0;
  user_first = 0;
  user_last = 0;
  passwd_first = 0;
  passwd_last = 0;
  last_atmark = 0;
  last_slash = 0;
  port = 0;
  tmp___0 = 0;
  __dyc_funcallvar_2 = 0;
  if (0) {
    switch_6_64:  
    last_atmark = p;
    passwd_last = last_atmark;
    port = -1;
    state = 8;
    goto switch_6_break;
    switch_6_91:  
    goto __dyc_dummy_label;
    switch_6_47:  
    switch_6_63:  
    switch_6_35:  
    if (port == -1) {
      goto __dyc_dummy_label;
    }
    if (last_atmark) {
      host_first = last_atmark + 1;
      host_last = passwd_first - 1;
      user_last = last_atmark;
    } else {
      host_first = user_first;
      host_last = passwd_first - 1;
      user_last = (char const   *)((void *)0);
      user_first = user_last;
    }
    passwd_last = (char const   *)((void *)0);
    passwd_first = passwd_last;
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
    goto switch_6_break;
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
    goto switch_6_break;
  } else {
    switch_6_break:  ;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(state);
  __dyc_print_ptr__char(passwd_last);
  __dyc_printpre_byte(port);
}
}
