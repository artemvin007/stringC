#include "s21_string.h"

char *s21_strtok(char *str, const char *delim) {
  static char *start = s21_NULL;

  if (str != s21_NULL) {
    start = str;
  }
  char *res = start;
  if (start != s21_NULL) {
    while (*start != '\0' && s21_strchr(delim, *start) != s21_NULL) {
      start++;
    }
    if (*start != '\0') {
      char *end = start;
      while (s21_strchr(delim, *end) == s21_NULL && *end != '\0') {
        end++;
      }
      res = start;
      if (*end == '\0') {
        start = end;
      } else {
        start = end + 1;
      }
      *end = '\0';
    } else {
      res = s21_NULL;
    }
  }

  return res;
}