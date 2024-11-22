#include "s21_string.h"

void *s21_to_upper(const char *str) {
  if (str != s21_NULL) {
    s21_size_t length = s21_strlen(str);
    char *res = (char *)calloc(length + 1, sizeof(char));
    if (res != s21_NULL) {
      for (s21_size_t i = 0; i <= length; i++) {
        res[i] = str[i];
        if (res[i] >= 'a' && res[i] <= 'z') {
          res[i] = str[i] - 32;
        } else {
          res[i] = str[i];
        }
      }
      res[length] = '\0';
      return res;
    } else {
      return s21_NULL;
    }
  }

  return s21_NULL;
}
