#include "my.h"

// printable
int is_printable(char c) {
    return (c >= 32 && c != 127) ? 1 : 0;
}

// alpha
int is_lower(char c) {
    return (c >= 'a' && c <= 'z') ? 1 : 0;
}

int is_upper(char c) {
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

int is_alpha(char c) {
    return is_upper(c) || is_lower(c) ? 1 : 0;
}

// num
int is_num(const char c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

// hexa
int is_lower_xalpha(const char c) {
    return (c >= 'a' && c <= 'f') ? 1 : 0;
}

int is_upper_xalpha(const char c) {
    return (c >= 'A' && c <= 'F') ? 1 : 0;
}

int is_hexa(const char c) {
    return (is_num(c) || is_lower_xalpha(c) || is_upper_xalpha(c)) ? 1 : 0;
}
