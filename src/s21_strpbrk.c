#include "s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  char *res = s21_NULL;
  for (char *chr = (char *)str1; *chr != '\0' && res == s21_NULL; chr++) {
    if (s21_strchr(str2, *chr)) {
      res = chr;
    }
  }
  return res;
}