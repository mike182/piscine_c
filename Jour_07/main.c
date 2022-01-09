#include <stdio.h>
#include <string.h>
#include "my.h"

int main(void) {

#ifdef MY_STRCAT // Ex 01
    char str[80] = "these ";

    my_strcat(str, "strings ");
    my_strcat(str, "are ");
    my_strcat(str, "concatenated.");
    puts(str);
#endif

#ifdef MY_STRNCAT // Ex 01
    char str1[20] = "To be ";
    char str2[20] = "or not to be";

    my_strncat(str1, str2, 6);
    puts(str1);
#endif

#ifdef MY_STRLCAT // Ex 01
    char dest1[100] = "1234";
    char src1[100] = "ABCD";
    char dest2[100] = "1234";
    char src2[100] = "ABCD";

    my_strlcat(dest1, src1, 7);
    printf("%s\n", dest1);
    my_strlcat(dest2, src2, 2);
    printf("%s", dest2);
#endif

#ifdef MY_AFF_PARAMS // Ex 02
    // main in my_aff_params.c
#endif

#ifdef MY_REV_PARAMS // Ex 03
    // main in my_rev_params.c
#endif

#ifdef MY_SORT_PARAMS // Ex 04
    // main in my_sort_params.c
#endif

    return 0;
}
