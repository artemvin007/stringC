#include "s21_string.h"

// if n > size of str1/str2 -> error;
int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  unsigned char *s1 = (unsigned char *)str1;
  unsigned char *s2 = (unsigned char *)str2;
  int res = 0;
  for (s21_size_t i = 0; i < n && res == 0; i++, s1++, s2++) {
    res += *s1 - *s2;
  }
  return res;
}

// 6-8 tests