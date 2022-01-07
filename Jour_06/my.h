#ifndef __MY_H__
#define __MY_H__

#include <stdio.h>

void my_putchar(char c);

// Jour03
int my_aff_alpha(); // Ex 01
int my_aff_revalpha(); // Ex 02
int my_aff_chiffre(); // Ex 03
int my_isneg(int n); // Ex 04
int my_aff_comb(); // Ex 05
int my_aff_comb2(); // Ex 06
void my_put_nbr(int nb); // Ex 07
int my_aff_combn(int n); // Ex 08

// Jour04
int my_swap(int *a, int *b); // Ex 01
int my_putstr(char *str); // Ex 02
int my_strlen(char *str); // Ex 03
char *my_evil_str(char *str); // Ex 03 bis
int my_getnbr(char *str); // Ex 04
void my_sort_int_tab(int *tab, int size); // Ex 05

// Jour05
int my_factorielle_it(int nb); // Ex 01
int my_factorielle_rec(int nb); // Ex 02
int my_power_it(int nb, int power); // Ex 03
int my_power_rec(int nb, int power); // Ex 04
int my_8r1(); // Ex 05
int my_8r2(); // Ex 06
int my_square_root(int nb); // Ex 07
int my_is_prime(int nb); // Ex 08
int my_find_prime_sup(int nb); // Ex 09

// Jour06
char *my_strcpy(char *dest, char *src); // Ex 01
char *my_strncpy(char *dest, char *src, int n); // Ex 02
char *my_revstr(char *str); // Ex 03
char *my_strstr(char *str, char *to_find); // Ex 04
int my_strcmp(char *s1, char *s2); // Ex 05
int my_strncmp(char *s1, char *s2, int n); // Ex 06
char *my_strupcase(char *str); // Ex 07
char *my_strlowcase(char *str); // Ex 08
char *my_strcapitalize(char *str); // Ex 09
int my_str_isalpha(char *str); // Ex 10
int my_str_isnum(char *str); // Ex 11
int my_str_islower(char *str); // Ex 12
int my_str_isupper(char *str); // Ex 13
int my_str_isprintable(char *str); // Ex 14
int my_putnbr_base(int nbr, char *base); // Ex 15
int my_getnbr_base(char *str, char *base); // Ex 16
int my_showstr(char *str); // Ex 17
int my_showmem(char *str, int size); // Ex 18

#endif // __MY_H__
