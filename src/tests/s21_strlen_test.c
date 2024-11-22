#include "s21_string_test.h"

START_TEST(s21_strlen1) {
  char test_str[] = "Hello world";
  ck_assert_int_eq(s21_strlen(test_str), strlen(test_str));
}
END_TEST

START_TEST(s21_strlen2) {
  char test_str[] = "Hello world\n\0";
  ck_assert_int_eq(s21_strlen(test_str), strlen(test_str));
}
END_TEST

START_TEST(s21_strlen3) {
  char test_str[] = "a\n\0";
  ck_assert_int_eq(s21_strlen(test_str), strlen(test_str));
}
END_TEST

START_TEST(s21_strlen4) {
  char test_str[] = " \n\0";
  ck_assert_int_eq(s21_strlen(test_str), strlen(test_str));
}
END_TEST

START_TEST(s21_strlen5) {
  char test_str[] = " \0";
  ck_assert_int_eq(s21_strlen(test_str), strlen(test_str));
}
END_TEST

START_TEST(s21_strlen6) {
  char test_str[] = "\n\0";
  ck_assert_int_eq(s21_strlen(test_str), strlen(test_str));
}
END_TEST

START_TEST(s21_strlen7) {
  char test_str[] = "\0";
  ck_assert_int_eq(s21_strlen(test_str), strlen(test_str));
}
END_TEST

Suite *s21_strlen_suite() {
  Suite *s;
  TCase *tc_core;

  s = suite_create("\033[103mS21_STRLEN\033[0m");
  tc_core = tcase_create("strlen_tc");
  tcase_add_test(tc_core, s21_strlen1);
  tcase_add_test(tc_core, s21_strlen2);
  tcase_add_test(tc_core, s21_strlen3);
  tcase_add_test(tc_core, s21_strlen4);
  tcase_add_test(tc_core, s21_strlen5);
  tcase_add_test(tc_core, s21_strlen6);
  tcase_add_test(tc_core, s21_strlen7);
  suite_add_tcase(s, tc_core);
  return s;
}