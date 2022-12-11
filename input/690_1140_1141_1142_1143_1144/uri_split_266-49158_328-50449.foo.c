#include "../include/dycfoo.h"
#include "../include/uri_split.i.hd.c.h"
void __dyc_foo(void) 
{ int state ;
  char const   *host_first ;
  char const   *host_last ;
  char const   *path_first ;
  char const   *last_slash ;
  char const   *p ;
  int32_t port ;
  uint8_t flags ;
  int tmp___1 ;
  int tmp___2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  p = (char const   *)__dyc_read_ptr__char();
  port = __dyc_readpre_byte();
  flags = (uint8_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  state = 0;
  host_first = 0;
  host_last = 0;
  path_first = 0;
  last_slash = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  switch_1_9:  
  if ((int )*p == 58) {
    goto switch_9_58;
  } else {
    if ((int )*p == 47) {
      goto switch_9_47;
    } else {
      if ((int )*p == 63) {
        goto switch_9_63;
      } else {
        if ((int )*p == 35) {
          goto switch_9_35;
        } else {
          if (0) {
            switch_9_58:  
            host_last = p;
            state = 13;
            goto switch_9_break;
            switch_9_47:  
            last_slash = p;
            path_first = last_slash;
            host_last = path_first;
            state = 15;
            goto switch_9_break;
            switch_9_63:  
            host_last = p;
            state = 16;
            goto switch_9_break;
            switch_9_35:  
            host_last = p;
            state = 18;
            goto switch_9_break;
          } else {
            switch_9_break:  ;
          }
        }
      }
    }
  }
  goto __dyc_dummy_label;
  switch_1_10:  
  if ((int const   )*p == 93) {
    goto __dyc_dummy_label;
  }
  host_first = p;
  state = 11;
  goto __dyc_dummy_label;
  switch_1_11:  
  if ((int const   )*p == 93) {
    flags = (unsigned char )((int )flags | 1);
    host_last = p;
    state = 12;
  }
  goto __dyc_dummy_label;
  switch_1_12:  
  if ((int )*p == 58) {
    goto switch_10_58;
  } else {
    if ((int )*p == 47) {
      goto switch_10_47;
    } else {
      if ((int )*p == 63) {
        goto switch_10_63;
      } else {
        if ((int )*p == 35) {
          goto switch_10_35;
        } else {
          {
          goto switch_10_default;
          if (0) {
            switch_10_58:  
            state = 13;
            goto switch_10_break;
            switch_10_47:  
            last_slash = p;
            path_first = last_slash;
            state = 15;
            goto switch_10_break;
            switch_10_63:  
            state = 16;
            goto switch_10_break;
            switch_10_35:  
            state = 18;
            goto switch_10_break;
            switch_10_default:  ;
            goto __dyc_dummy_label;
          } else {
            switch_10_break:  ;
          }
          }
        }
      }
    }
  }
  goto __dyc_dummy_label;
  tmp___1 = __dyc_funcallvar_3;
  if (tmp___1) {
    port = (int )((int const   )*p - 48);
    state = 14;
  } else {
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(state);
  __dyc_print_ptr__char(host_first);
  __dyc_print_ptr__char(host_last);
  __dyc_print_ptr__char(path_first);
  __dyc_printpre_byte(port);
  __dyc_printpre_byte(flags);
}
}
