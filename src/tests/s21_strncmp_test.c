#include "s21_string_test.h"

START_TEST(strncmp_1) {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, world!";
  s21_size_t n = 14;
  ck_assert_int_eq(strncmp(s1, s2, n), s21_strncmp(s1, s2, n));
}
END_TEST

START_TEST(strncmp_2) {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, worldj";
  s21_size_t n = 14;
  ck_assert_int_eq(strncmp(s1, s2, n), s21_strncmp(s1, s2, n));
}
END_TEST

START_TEST(strncmp_3) {
  char s1[] = "";
  char s2[] = "";
  s21_size_t n = 1;
  ck_assert_int_eq(strncmp(s1, s2, n), s21_strncmp(s1, s2, n));
}
END_TEST

START_TEST(strncmp_4) {
  char s1[] = "f";
  char s2[] = "";
  s21_size_t n = 1;
  ck_assert_int_eq(strncmp(s1, s2, n), s21_strncmp(s1, s2, n));
}
END_TEST

START_TEST(strncmp_5) {
  char s1[] = "";
  char s2[] = "j";
  s21_size_t n = 1;
  ck_assert_int_eq(strncmp(s1, s2, n), s21_strncmp(s1, s2, n));
}
END_TEST

START_TEST(strncmp_6) {
  char s1[] = "1242434246364377659";
  char s2[] = "1242434246364377659";
  s21_size_t n = 19;
  ck_assert_int_eq(strncmp(s1, s2, n), s21_strncmp(s1, s2, n));
}
END_TEST

START_TEST(strncmp_7) {
  char s1[] = "1242434246364377659";
  char s2[] = "1242434246364377659";
  s21_size_t n = 2;
  ck_assert_int_eq(strncmp(s1, s2, n), s21_strncmp(s1, s2, n));
}
END_TEST

START_TEST(strncmp_8) {
  char s1[] = "g124243425";
  char s2[] = "124243424";
  s21_size_t n = 0;
  ck_assert_int_eq(strncmp(s1, s2, n), s21_strncmp(s1, s2, n));
}
END_TEST

START_TEST(strncmp_9) {
  char s1[] = "";
  char s2[] = "";
  s21_size_t n = 1;
  ck_assert_int_eq(strncmp(s1, s2, n), s21_strncmp(s1, s2, n));
}
END_TEST

Suite *s21_strncmp_suite(void) {
  Suite *s = suite_create("\033[103mS21_STRNCMP\033[0m");
  TCase *tc = tcase_create("strncmp_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strncmp_1);
  tcase_add_test(tc, strncmp_2);
  tcase_add_test(tc, strncmp_3);
  tcase_add_test(tc, strncmp_4);
  tcase_add_test(tc, strncmp_5);
  tcase_add_test(tc, strncmp_6);
  tcase_add_test(tc, strncmp_7);
  tcase_add_test(tc, strncmp_8);
  tcase_add_test(tc, strncmp_9);

  suite_add_tcase(s, tc);
  return s;
}