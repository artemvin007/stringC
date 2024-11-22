#include "s21_string.h"

void *s21_insert(const char *src, const char *str, size_t start_index) {
  char *i_str = s21_NULL;
  if (src != s21_NULL && str != s21_NULL) {
    s21_size_t s_src = s21_strlen(src);
    s21_size_t s_str = s21_strlen(str);
    s21_size_t size = s_src + s_str;

    if (start_index <= s_src) {
      i_str = (char *)calloc((size + 1), sizeof(char));
      for (s21_size_t i = 0, j = 0; i <= size; i++) {
        if (start_index == i) {
          while (j < s_str) {
            i_str[i] = str[j];
            j++;
            i++;
          }
        }
        i_str[i] = src[i - j];
      }
    }
  }
  return (void *)i_str;
}
