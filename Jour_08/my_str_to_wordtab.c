#include <stdlib.h>
#include "my.h"

int word_count(const char *str) {
    int n = 0;

    while (*str) {
        if (is_alnum(*str) && !is_alnum(*(str + 1)))
            n++;
        str++;
    }
    return n;
}

int word_len(const char *str) {
    int n = 0;

    while (*str && is_alnum(*str))
        n++, str++;
    return n;
}

char **my_str_to_wordtab(char *str) {
    char **s;
    int nword = 0;
    int i = 0;

    nword = word_count(str);
    s = malloc((nword + 1) * sizeof(*s));
    if (s == NULL)
        return NULL;
    while (*str != '\0') {
        while (*str && !is_alnum(*str))
            str++;
        if (*str == '\0')
            break;
        s[i++] = my_strndup(str, word_len(str) + 1);
        while (is_alnum(*str))
            str++;
    }
    s[i] = NULL;
    return s;
}
