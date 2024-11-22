#include "s21_string.h"

char *s21_strstr(const char *haystack, const char *needle) {
  char *res = s21_NULL;
  for (s21_size_t i = 0; i <= s21_strlen(haystack) && res == s21_NULL; i++) {
    s21_size_t j = 0;
    while (needle[j] == haystack[i + j]) {
      j++;
    }
    if (j >= s21_strlen(needle)) {
      res = (char *)haystack + i;
    }
  }
  return res;
}