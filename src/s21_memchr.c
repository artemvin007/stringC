#include "s21_string.h"

// if n > size of str -> error;
void *s21_memchr(const void *str, int c, s21_size_t n) {
  unsigned char *string = (unsigned char *)str;
  unsigned char *res = s21_NULL;
  for (s21_size_t i = 0; i < n; i++, string++) {
    if (*string == c) {
      res = string;
      break;
    }
  }
  return res;
}

// 4-5 tests