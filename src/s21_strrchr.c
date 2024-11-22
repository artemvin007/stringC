#include "s21_string.h"

char *s21_strrchr(const char *str, int c) {
  char *res = s21_NULL;
  int size = (s21_strlen(str) + 1);
  for (; 0 <= size; size--) {
    if (str[size] == c) {
      res = (char *)&str[size];
      break;
    }
  }
  return res;
}