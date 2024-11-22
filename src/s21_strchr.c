#include "s21_string.h"

char *s21_strchr(const char *str, int c) {
  char *s_str = (char *)str;
  char *res = s21_NULL;
  for (s21_size_t i = 0; i < s21_strlen(s_str) + 1; i++) {
    if (s_str[i] == c) {
      res = &s_str[i];
      break;
    }
  }
  return res;
}