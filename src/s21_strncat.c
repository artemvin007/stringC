#include "s21_string.h"

// if len of dest + n > size of dest - zsh: illegal hardware instruction
char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  int size = s21_strlen(dest);
  for (s21_size_t i = 0; i < n && i < s21_strlen(src); i++)
    dest[size + i] = src[i];
  return dest;
}