#ifndef S21_STRING_TESTH
#define S21_STRING_TESTH

#include <check.h>
#include <stdio.h>
#include <string.h>

#include "../s21_string.h"

Suite *s21_strlen_suite();
Suite *s21_memcpy_suite();
Suite *s21_memchr_suite();
Suite *s21_memcmp_suite();
Suite *s21_memset_suite();
Suite *s21_strncat_suite();
Suite *s21_strchr_suite();
Suite *s21_strncmp_suite();
Suite *s21_strncpy_suite();
Suite *s21_strcspn_suite();
Suite *s21_strrchr_suite();
Suite *s21_strtok_suite();
Suite *s21_strstr_suite();
Suite *s21_strpbrk_suite();
Suite *s21_strerror_suite();

Suite *s21_to_upper_suite();
Suite *s21_to_lower_suite();
Suite *s21_insert_suite();
Suite *s21_trim_suite();

Suite *s21_sprintf_c_suite();
Suite *s21_sprintf_d_suite();
Suite *s21_sprintf_s_suite();
Suite *s21_sprintf_u_suite();
Suite *s21_sprintf_f_suite();
Suite *s21_sprintf_percent_suite();
Suite *s21_sprintf_e_suite();
Suite *s21_sprintf_g_suite();
Suite *s21_sprintf_small_x_suite();
Suite *s21_sprintf_big_X_suite();
Suite *s21_sprintf_p_suite();
Suite *s21_sprintf_o_suite();

#endif