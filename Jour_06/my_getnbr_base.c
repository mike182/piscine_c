#include "my.h"

#define ABS(x) (((x) < 0) ? -(x) : (x))

int is_num(const char c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

int is_lower_xalpha(const char c) {
    return (c >= 'a' && c <= 'f') ? 1 : 0;
}

int is_upper_xalpha(const char c) {
    return (c >= 'A' && c <= 'F') ? 1 : 0;
}

int is_hexa(const char c) {
    return (is_num(c) || is_lower_xalpha(c) || is_upper_xalpha(c)) ? 1 : 0;
}

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
    int nb = 0;
    int sign = 1;
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
