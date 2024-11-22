#include "s21_string.h"

// if n > size of dest or src - error ocurses (zsh: illegal hardware instruction
// <command>)
void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  unsigned char *s_dest = (unsigned char *)dest;
  const unsigned char *s_src = (const unsigned char *)src;
  for (s21_size_t i = 0; i < n; s_dest++, s_src++, i++)
    *s_dest = *s_src;  // define end of allocated memory
  return dest;
}

// 3-4 tests