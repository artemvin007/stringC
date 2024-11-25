#include "s21_string.h"

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  s21_size_t len = 0;
  for (s21_size_t i = 0; i < s21_strlen(str1); i++) {
    if (s21_strchr(str2, str1[i]) == s21_NULL)
      len++;
    else
      break;
  }
  return len;
}