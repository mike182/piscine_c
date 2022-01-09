#include "my.h"

int base_check(char *base, int ibase) {
    if (ibase >= 1 && ibase <= 16)
        if (my_strncmp(base, "0123456789abcdef", ibase) == 0
            || my_strncmp(base, "0123456789ABCDEF", ibase) == 0)
            return 0;
    return 1;
}

int is_frombase(const char c, char *base) {
    while (*base) {
        if (c == *base)
            return 1;
        base++;
    }
    return 0;
}

int my_getnbr_base(char *str, char *base) {
    int ibase = my_strlen(base);
    int sign = 1;
    int nb = 0;
    int tmp;

    if (base_check(base, ibase))
        return 0;
    while (*str == '+' || *str == '-')
        if (*str++ == '-')
            sign = -sign;
    while (is_hexa(*str) && is_frombase(*str, base)) {
        tmp = nb;
        if (is_num(*str))
            nb = ABS(nb) * ibase + (*str - '0');
        if (is_lower_xalpha(*str))
            nb = ABS(nb) * ibase + (*str - 'a' + 10);
        if (is_upper_xalpha(*str))
            nb = ABS(nb) * ibase + (*str - 'A' + 10);
        if (nb / ibase != tmp)
            return 0;
        str++;
    }
    return nb * sign;
}
