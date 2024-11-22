#include "s21_string.h"

// if n > len of str1 or str2 - error
int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int res = 0;
  for (s21_size_t i = 0; i < n && res == 0; i++) {
    res = str1[i] - str2[i];
  }
  return res;
}