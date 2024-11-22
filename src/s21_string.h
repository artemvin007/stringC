#ifndef S21_STRINGH
#define S21_STRINGH

#include <math.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#define s21_NULL ((void *)0)

typedef long unsigned s21_size_t;

struct s_struct {
  int flag_Plus;     // флаг плюс
  int flag_Minus;    // флаг минус
  int flag_Space;    // флаг пробел
  int flag_Zero;     // флаг нуля
  int flag_Sharp;    // флаг #
  char flag_length;  // вид длинны
  int Width;         // размер ширины
  int Precision;     // размер точности
  char specifier;    // присновение спецификатора
  int sign;          // знак +/-
  int point;         // флаг точки
  int zero_simbol;   // флак символов 0 \0
  int step;
};

void *s21_memchr(const void *str, int c, s21_size_t n);
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memset(void *str, int c, s21_size_t n);
char *s21_strncat(char *dest, const char *src, s21_size_t n);

char *s21_strchr(const char *str, int c);
int s21_strncmp(const char *str1, const char *str2, s21_size_t n);
char *s21_strncpy(char *dest, const char *src, s21_size_t n);
s21_size_t s21_strcspn(const char *str1, const char *str2);
char *s21_strerror(int errnum);

s21_size_t s21_strlen(const char *str);
char *s21_strpbrk(const char *str1, const char *str2);
char *s21_strrchr(const char *str, int c);
char *s21_strstr(const char *haystack, const char *needle);
char *s21_strtok(char *str, const char *delim);

void *s21_to_upper(const char *str);
void *s21_to_lower(const char *str);
void *s21_insert(const char *src, const char *str, size_t start_index);
void *s21_trim(const char *src, const char *trim_chars);

char *s21_strcpy(char *dest, const char *src);
char *s21_strcat(char *dest, const char *src);

void add_char(char *str, const char *format, int *zero_str_flag,
              struct s_struct *formats);
void s21_move_string(char *tmp_sr);
int check_flags(const char *format);
int check_lenght(const char *format);
int check_dig(const char *format);
void s21_reverse_string(char *str);
int check_specf(struct s_struct *formats, const char *format);
void set_flags(struct s_struct *formats, const char *format);
void set_width_Precision(int *number, const char *format, va_list *arg);
void s21_string_flags(struct s_struct *formats, char *tmp_str);
void s21_string_width(struct s_struct *formats, char *tmp_str);
void s21_string_precision(struct s_struct *formats, char *tmp_str);
void s21_c(char *p_str, va_list *arg, struct s_struct *formats,
           int *zero_str_flag);
void s21_s(char *p_str, va_list *arg, struct s_struct *formats);
void s21_f(char *tmp_str, va_list *arg, struct s_struct *formats);
void s21_d(char *tmp_str, va_list *arg, struct s_struct *formats);
void s21_o(char *tmp_str, va_list *arg, struct s_struct *formats);
void s21_u(char *tmp_str, va_list *arg, struct s_struct *formats);
void s21_p(char *tmp_str, va_list *arg, struct s_struct *formats);
void s21_xX(char *tmp_str, va_list *arg, struct s_struct *formats);
void s21_eE(char *tmp_str, va_list *arg, struct s_struct *formats);
void s21_gG(char *tmp_str, va_list *arg, struct s_struct *formats);
void s21_int_to_str(struct s_struct *formats, char *tmp_str,
                    long double number);
void s21_float_to_str(struct s_struct *formats, char *tmp_str,
                      long double number);
void s21_o_to_str(struct s_struct *formats, char *tmp_str, long long number);
void s21_u_to_str(struct s_struct *formats, char *tmp_str,
                  unsigned long long number);
void s21_xX_to_str(struct s_struct *struct_formatst, char *tmp_str,
                   unsigned long long number);
void s21_eE_to_str(struct s_struct *formats, char *tmp_str, long double number);
void s21_gG_to_str(struct s_struct *formats, char *tmp_str, long double number);
void s21_delete_zero(char *tmp_str, struct s_struct *formats);
void s21_sharp_flag(struct s_struct *formats, char *tmp_str);
void s21_percent(char *tmp_str, struct s_struct *formats);
void s21_check(const char *format, char *str, struct s_struct *formats,
               va_list *arg, int *zero_str_flag);
int s21_sprintf(char *str, const char *format, ...);
void s21_default_precision(struct s_struct *formats);
void s21_mantis(char *tmp_str, struct s_struct *formats, int notation,
                char *str_notat, int flag);
void add_for_fdeEfgG(struct s_struct *formats,
                     char *tmp_str);  // повторяющийся модуль

#endif
