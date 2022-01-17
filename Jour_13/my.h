#ifndef __MY_H__
#define __MY_H__

#define ABS(x) (((x) < 0) ? -(x) : (x))

void my_putchar(char c);

// Jour03
int my_isneg(int n); // Ex 04
void my_put_nbr(int nb); // Ex 07

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

// Jour07
char *my_strcat(char *dest, char *src); // Ex 01
char *my_strncat(char *dest, char *src, int nb); // Ex 01
int my_strlcat(char *dest, char *src, int size); // Ex 01
// my_aff_params // Ex 02
// my_rev_params // Ex 03
// my_sort_params // Ex 04

// Jour08
char *my_strdup(char *src); // Ex 01
char *convert_base(char *nbr, char *base_from, char *base_to); // Ex 02
char *sum_params(int argc, char **argv); // Ex 03
char **my_str_to_wordtab(char *str); // Ex 04
int my_show_wordtab(char **tab); // Ex 05

// Jour09
typedef struct s_stock_par {
    int size_param;
    char *str;
    char *copy;
    char **tab;
} t_stock_par;

// my_macroABS.h // Ex 01
// my.h // Ex 02
struct s_stock_par *my_param_to_tab(int ac, char **av); // Ex 03
int my_show_tab(struct s_stock_par *par); // Ex 04
int is_big_endian(void); // Ex 05

// Jour11
// Makefile // Ex 01
// do-op // Ex 02
int my_sort_wordtab(char **tab); // Ex 03
int my_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *)); // Ex 04

// Jour12
typedef struct s_list {
    void *data;
    struct s_list *next;
} t_list;

t_list *my_params_in_list(int ac, char **av); // Ex 01
int my_list_size(t_list *begin); // Ex 02
int my_rev_list(t_list **begin); // Ex 03
int my_apply_on_list(t_list *begin, int (*f)()); // Ex 04
int my_apply_on_eq_in_list(t_list *begin, int (*f)(), void *data_ref, int (*cmp)()); // Ex 05
void *my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)()); // Ex 06
t_list *my_find_node_eq_in_list(t_list *begin, void *data_ref, int (*cmp)()); // Ex 07
int my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)()); // Ex 08
int my_add_list_to_list(t_list **begin1, t_list *begin2); // Ex 09
int my_sort_list(t_list **begin, int (*cmp)()); // Ex 10
int my_put_elem_in_sort_list(t_list **begin, void *data, int (*cmp)()); // Ex 11
int my_add_sort_list_to_sort_list(t_list **begin1, t_list *begin2, int (*cmp)()); // Ex 12

// util
int is_printable(const char c);
int is_lower(const char c);
int is_upper(const char c);
int is_alpha(const char c);
int is_digit(const char c);
int is_alnum(const char c);
int is_lower_xalpha(const char c);
int is_upper_xalpha(const char c);
int is_xalpha(const char c);
int is_xdigit(const char c);

// util
void my_swapc(char *a, char *b);
int my_strnlen(char *str, int n);
void *my_memcpy(void *dest, void *src, int len);
void *my_memset(void *dest, int value, int len);
char *my_strndup(char *src, int n);

#endif // __MY_H__
