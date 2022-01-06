#ifndef __MY_H__
#define __MY_H__

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
/* int my_square_root(int nb); // Ex 07 */
/* int my_is_prime(int nb); // Ex 08 */
/* int my_find_prime_sup(int nb); // Ex 09 */

#endif // __MY_H__
