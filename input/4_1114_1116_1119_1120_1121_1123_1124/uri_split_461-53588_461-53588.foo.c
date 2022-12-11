#include "../include/dycfoo.h"
#include "../include/uri_split.i.hd.c.h"
void __dyc_foo(void) 
{ int state ;
  char const   *host_first ;
  char const   *host_last ;
  char const   *path_last ;
  char const   *query_first ;
  char const   *query_last ;
  char const   *fragment_first ;
  char const   *fragment_last ;
  char const   *user_first ;
  char const   *user_last ;
  char const   *passwd_first ;
  char const   *passwd_last ;
  char const   *last_atmark ;
  char const   *p ;
  int32_t port ;

  {
  state = __dyc_readpre_byte();
  p = (char const   *)__dyc_read_ptr__char();
  host_first = 0;
  host_last = 0;
  path_last = 0;
  query_first = 0;
  query_last = 0;
  fragment_first = 0;
  fragment_last = 0;
  user_first = 0;
  user_last = 0;
  passwd_first = 0;
  passwd_last = 0;
  last_atmark = 0;
  port = 0;
  if (state == 19) {
    goto switch_13_19;
  } else {
    {
    goto switch_13_default;
    if (0) {
      switch_13_0:  
      switch_13_1:  
      switch_13_2:  
      switch_13_3:  
      goto __dyc_dummy_label;
      switch_13_4:  
      goto __dyc_dummy_label;
      switch_13_5:  
      if (last_atmark) {
        host_first = last_atmark + 1;
        host_last = p;
        if ((unsigned long )host_first == (unsigned long )host_last) {
          goto __dyc_dummy_label;
        }
        user_last = last_atmark;
      } else {
        host_first = user_first;
        host_last = p;
        user_last = (char const   *)((void *)0);
        user_first = user_last;
      }
      goto switch_13_break;
      switch_13_6:  
      goto __dyc_dummy_label;
      switch_13_7:  
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
      goto switch_13_break;
      switch_13_8:  
      goto __dyc_dummy_label;
      switch_13_9:  
      host_last = p;
      goto switch_13_break;
      switch_13_10:  
      switch_13_11:  
      goto __dyc_dummy_label;
      switch_13_12:  
      goto switch_13_break;
      switch_13_13:  
      goto __dyc_dummy_label;
      switch_13_14:  
      if (port == -1) {
        goto __dyc_dummy_label;
      }
      goto switch_13_break;
      switch_13_15:  
      path_last = p;
      goto switch_13_break;
      switch_13_16:  
      query_last = p;
      query_first = query_last;
      goto switch_13_break;
      switch_13_17:  
      query_last = p;
      goto switch_13_break;
      switch_13_18:  
      fragment_last = p;
      fragment_first = fragment_last;
      goto switch_13_break;
      switch_13_19:  
      fragment_last = p;
      goto switch_13_break;
      switch_13_default:  ;
      goto __dyc_dummy_label;
    } else {
      switch_13_break:  ;
    }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(fragment_last);
}
}
