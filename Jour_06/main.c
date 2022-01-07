#include <stdio.h>
#include <string.h>
#include "my.h"

int main(void) {

#ifdef MY_STRCPY // Ex 01
    char src[64];
    char dest[64];

    memset(dest, 0, 64);
    my_strcpy(src, "Who am I? Where am I going?");
    printf("%s", my_strcpy(dest, src));
#endif

#ifdef MY_STRNCPY // Ex 02
    char src[64];
    char dest[64];

    memset(dest, 0, 64);
    my_strncpy(src, "Who am I? Where am I going?", 27);
    printf("%s", my_strncpy(dest, src, 9));
#endif

#ifdef MY_REVSTR // Ex 03
    char even_str[] = "Who am I? Where am I going?";
    char odd_str[] = "Who am I?";

    printf("%s", my_revstr(even_str));
    printf("\n");
    printf("%s", my_revstr(odd_str));
#endif

#ifdef MY_STRSTR // Ex 04
   char haystack[] = "Who am I? Where am I going?";
   char needle[] = "Where am I";

   printf("%s", my_strstr(haystack, needle));
#endif

#ifdef MY_STRCMP // Ex 05
   char s1[] = "who am i? Where am i going?";
   char s2[] = "WHO AM I? WHERE AM I GOING?";

   printf("%i", my_strcmp(s1, s2));
   printf("\n");
   printf("%i", my_strcmp(s2, s1));
   printf("\n");
   printf("%i", my_strcmp(s1, s1));
#endif

#ifdef MY_STRNCMP // Ex 06
   char s1[] = "who am i? Where am i going?";
   char s2[] = "WHO AM I? WHERE AM I GOING?";

   printf("%i", my_strncmp(s1, s2, 13));
   printf("\n");
   printf("%i", my_strncmp(s2, s1, 13));
   printf("\n");
   printf("%i", my_strncmp(s1, s1, 13));
#endif

#ifdef MY_STRUPCASE // Ex 07
   char lower_case_str[] = "who am I? Where am I going?";
   char upper_case_str[] = "WHO AM I? WHERE AM I GOING?";
   char str[] = "Who am I? Where am I going?";

   printf("%s", my_strupcase(lower_case_str));
   printf("\n");
   printf("%s", my_strupcase(upper_case_str));
   printf("\n");
   printf("%s", my_strupcase(str));
#endif

#ifdef MY_STRLOWCASE // Ex 08
   char lower_case_str[] = "who am I? Where am I going?";
   char upper_case_str[] = "WHO AM I? WHERE AM I GOING?";
   char capitalized_str[] = "Who am I? Where am I going?";

   printf("%s", my_strlowcase(lower_case_str));
   printf("\n");
   printf("%s", my_strlowcase(upper_case_str));
   printf("\n");
   printf("%s", my_strlowcase(capitalized_str));
#endif

#ifdef MY_STRCAPITALIZE // Ex 09
/* char *my_strcapitalize(char *str); */
   char str[] = "salut, comment ca va ? 42mots quarante-deux ; cinquante+et+un";
   char capitalized_str[] = "Who am I? Where am I going?";
   char lower_case_str[] = "who am I? Where am I going?";
   char upper_case_str[] = "WHO AM I? WHERE AM I GOING?";

   printf("%s", my_strcapitalize(str));
   printf("\n");
   printf("%s", my_strcapitalize(capitalized_str));
   printf("\n");
   printf("%s", my_strcapitalize(lower_case_str));
   printf("\n");
   printf("%s", my_strcapitalize(upper_case_str));
#endif

#ifdef MY_STR_ISALPHA // Ex 10
   char str[] = "Who am I? Where am I going?";
   char alpha_str[] = "WhoamIWhereamIgoing";

   printf("%d", my_str_isalpha(str));
   printf("\n");
   printf("%d", my_str_isalpha(alpha_str));
#endif

#ifdef MY_STR_ISNUM // Ex 11
   char str[] = "001 10 1? 01001 11 1 10100?";
   char num_str[] = "01234566789";

   printf("%d", my_str_isnum(str));
   printf("\n");
   printf("%d", my_str_isnum(num_str));
#endif

#ifdef MY_STR_ISLOWER // Ex 12
   char str[] = "Who am I? Where am I going?";
   char lower_str[] = "whoamiwhereamigoing";

   printf("%d", my_str_islower(str));
   printf("\n");
   printf("%d", my_str_islower(lower_str));
#endif

#ifdef MY_STR_ISUPPER // Ex 13
   char str[] = "Who am I? Where am I going?";
   char upper_str[] = "WHOAMIWHEREAMIGOING";

   printf("%d", my_str_isupper(str));
   printf("\n");
   printf("%d", my_str_isupper(upper_str));
#endif

#ifdef MY_STR_ISPRINTABLE // Ex 14
   char str[] = "\x57\x68\x6F\x20\x61\x6D\x20\x49\x3F\x20\x57\x68\x65\x72\x65\x20\x61\x6D\x20\x49\x20\x67\x6F\x69\x6E\x67\x3F\x7F";
   char printable_str[] = "\x57\x68\x6F\x20\x61\x6D\x20\x49\x3F\x20\x57\x68\x65\x72\x65\x20\x61\x6D\x20\x49\x20\x67\x6F\x69\x6E\x67\x3F";

   printf("%d", my_str_isprintable(str));
   printf("\n");
   printf("%d", my_str_isprintable(printable_str));
#endif

#ifdef MY_PUTNBR_BASE // Ex 15
   printf(" ret=%d base=01", my_putnbr_base(1337, "01"));
   printf("\n");
   printf(" ret=%d base=01234567", my_putnbr_base(1337, "01234567"));
   printf("\n");
   printf(" ret=%d base=0123456789", my_putnbr_base(1337, "0123456789"));
   printf("\n");
   printf(" ret=%d base=0123456789", my_putnbr_base(-1337, "0123456789"));
   printf("\n");
   printf(" ret=%d base=0123456789ABCDEF", my_putnbr_base(1337, "0123456789ABCDEF"));
   printf("\n");
   printf(" ret=%d base=0123456789abcdef", my_putnbr_base(1337, "0123456789abcdef"));
#endif

#ifdef MY_GETNBR_BASE // Ex 16
   char base2[] = "01";
   char base8[] = "01234567";
   char base10[] = "0123456789";
   char base16[] = "0123456789abcdef";
   char base16U[] = "0123456789ABCDEF";

   printf("%i", my_getnbr_base("+---+--++---+---+---+-42", base10)); // -42
   printf("\n");
   printf("%i", my_getnbr_base("42a43", base10)); // 42
   printf("\n");
   printf("%i", my_getnbr_base("11000000000000000000000042", base10)); // 0
   printf("\n");
   printf("%i", my_getnbr_base("-1000000000000000000000042", base10)); // 0
   printf("\n");

   printf("%d base=%s", my_getnbr_base("1337", base2), base2);
   printf("\n");
   printf("%d base=%s", my_getnbr_base("1337", base8), base8);
   printf("\n");
   printf("%d base=%s", my_getnbr_base("1337", base10), base10);
   printf("\n");
   printf("%d base=%s", my_getnbr_base("-1337", base10), base10);
   printf("\n");
   printf("%d base=%s", my_getnbr_base("1337", base16), base16);
   printf("\n");
   printf("%d base=%s", my_getnbr_base("1337", base16U), base16U);
#endif

#ifdef MY_SHOWSTR // Ex 17
   char str[128];

   for (int i = 0; i < 127; i++)
       str[i] = i + 1;
   my_showstr(str);
#endif

#ifdef MY_SHOWMEM // Ex 18
/* #define STR_SIZE 257 */
#define STR_SIZE 4097
/* #define STR_SIZE 65537 */
   FILE *fp;
   char str[STR_SIZE];

   fp= fopen("/dev/urandom", "rb");
   fread(str,sizeof(char),STR_SIZE,fp);
   fclose(fp);
   my_showmem(str, STR_SIZE);
#endif

    return 0;
}
