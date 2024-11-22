#include "s21_string.h"

void *s21_trim(const char *src, const char *trim_chars) {
  char *res = s21_NULL;
  if (src) {
    if (trim_chars == s21_NULL) {
      res = (char *)calloc((s21_strlen(src) + 1), sizeof(char));
      if (res) {
        s21_strncpy(res, src, s21_strlen(src));
        res[s21_strlen(src)] = '\0';
      }
    } else {
      const char *b_str = src;
      const char *e_str = src + s21_strlen(src);

      while (*b_str && s21_strchr(trim_chars, *b_str)) {
        b_str++;
      }

      while (e_str != b_str && s21_strchr(trim_chars, *(e_str - 1))) {
        e_str--;
      }

      res = (char *)malloc((e_str - b_str + 1) * sizeof(char));
      if (res) {
        s21_strncpy(res, b_str, e_str - b_str);
        res[e_str - b_str] = '\0';
      }
    }
  }
  return res;
}
