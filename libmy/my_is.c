#include "my.h"

// printable
int is_printable(const char c) {
    return (c >= 32 && c != 127) ? 1 : 0;
}

// alpha
int is_lower(const char c) {
    return (c >= 'a' && c <= 'z') ? 1 : 0;
}

int is_upper(const char c) {
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

int is_alpha(const char c) {
    return is_upper(c) || is_lower(c) ? 1 : 0;
}

// num
int is_digit(const char c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

// alphanum
int is_alnum(const char c) {
    return (is_alpha(c) || is_digit(c)) ? 1 : 0;
}

// hexa
int is_lower_xalpha(const char c) {
    return (c >= 'a' && c <= 'f') ? 1 : 0;
}

int is_upper_xalpha(const char c) {
    return (c >= 'A' && c <= 'F') ? 1 : 0;
}

int is_xalpha(const char c) {
    return (is_lower_xalpha(c) || is_upper_xalpha(c)) ? 1 : 0;
}

int is_xdigit(const char c) {
    return (is_digit(c) || is_xalpha(c)) ? 1 : 0;
}
