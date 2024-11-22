#include "s21_string.h"

// if n > size of dest or src - error ocurses (zsh: illegal hardware instruction
// <command>)
void *s21_memset(void *str, int c, s21_size_t n) {
  unsigned char *s_str = (unsigned char *)str;
  for (s21_size_t i = 0; i < n; i++, s_str++) *s_str = (char)c;
  return str;
}

// 2-3 tests