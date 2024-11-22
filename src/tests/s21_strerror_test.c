#include "s21_string_test.h"

#if defined(__APPLE__)
#define MAX_ERROR 107
#define IS_APPLE 1
#else
#define MAX_ERROR 134
#define IS_APPLE 0
#endif

START_TEST(s21_strerror_test_normal) {
  for (int i = 0; i < MAX_ERROR; i++)
    ck_assert_str_eq(s21_strerror(i), strerror(i));
}

END_TEST

START_TEST(s21_strerror_test_empty_string) {
  ck_assert_str_eq(s21_strerror(0), strerror(0));
}

END_TEST

START_TEST(s21_strerror_test_tricky) {
  ck_assert_str_eq(s21_strerror(-1), strerror(-1));
  ck_assert_str_eq(s21_strerror(234), strerror(234));
}

END_TEST

Suite *s21_strerror_suite(void) {
  Suite *suite;
  TCase *tcase;
  suite = suite_create("\033[103mS21_STRERROR\033[0m");
  tcase = tcase_create("core");
  tcase_add_test(tcase, s21_strerror_test_normal);
  tcase_add_test(tcase, s21_strerror_test_empty_string);
  tcase_add_test(tcase, s21_strerror_test_tricky);
  suite_add_tcase(suite, tcase);
  return suite;
}
