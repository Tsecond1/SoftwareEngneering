#include "../include/dycfoo.h"
#include "../include/uri_split.i.hd.c.h"
void __dyc_foo(void) 
{ int state ;
  char const   *host_first ;
  char const   *host_last ;
  char const   *path_first ;
  char const   *user_first ;
  char const   *user_last ;
  char const   *last_atmark ;
  char const   *last_slash ;
  char const   *p ;

  {
  user_first = (char const   *)__dyc_read_ptr__char();
  last_atmark = (char const   *)__dyc_read_ptr__char();
  p = (char const   *)__dyc_read_ptr__char();
  state = 0;
  host_first = 0;
  host_last = 0;
  path_first = 0;
  user_last = 0;
  last_slash = 0;
  if ((int )*p == 58) {
    goto switch_3_58;
  } else {
    if ((int )*p == 91) {
      goto switch_3_91;
    } else {
      if ((int )*p == 47) {
        goto switch_3_47;
      } else {
        if ((int )*p == 63) {
          goto switch_3_47;
        } else {
          if ((int )*p == 35) {
            goto switch_3_47;
          } else {
            if (0) {
              switch_3_64:  
              last_atmark = p;
              goto switch_3_break;
              switch_3_58:  
              user_last = p;
              state = 6;
              goto switch_3_break;
              switch_3_91:  
              if ((unsigned long )last_atmark == (unsigned long )(p - 1)) {
                user_last = last_atmark;
                state = 10;
              } else {
                goto __dyc_dummy_label;
              }
              goto switch_3_break;
              switch_3_47:  
              switch_3_63:  
              switch_3_35:  
              if (last_atmark) {
                host_first = last_atmark + 1;
                host_last = p;
                user_last = last_atmark;
              } else {
                host_first = user_first;
                host_last = p;
                user_last = (char const   *)((void *)0);
                user_first = user_last;
              }
              if ((int )*p == 47) {
                goto switch_4_47;
              } else {
                if ((int )*p == 63) {
                  goto switch_4_63;
                } else {
                  if ((int )*p == 35) {
                    goto switch_4_35;
                  } else {
                    if (0) {
                      switch_4_47:  
                      last_slash = p;
                      path_first = last_slash;
                      state = 15;
                      goto switch_4_break;
                      switch_4_63:  
                      state = 16;
                      goto switch_4_break;
                      switch_4_35:  
                      state = 18;
                      goto switch_4_break;
                    } else {
                      switch_4_break:  ;
                    }
                  }
                }
              }
              goto switch_3_break;
            } else {
              switch_3_break:  ;
            }
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
  __dyc_print_ptr__char(user_first);
  __dyc_print_ptr__char(user_last);
  __dyc_print_ptr__char(last_atmark);
}
}
