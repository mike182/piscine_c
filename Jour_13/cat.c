#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include "my.h"

#define BUF_SIZE 16

void my_strerror(char *path) {
    my_putstr("cat: ");
    my_putstr(path);
    my_putstr(": ");
    if (errno == 2)
        my_putstr("No such file or directory\n");
    else if (errno == 13)
        my_putstr("Persmission denied\n");
    else {
        my_putstr("unknown error code ");
        my_put_nbr(errno);
        my_putstr("\n");
    }
    return;
}

int main(int ac, char *av[]) {
    char buf[BUF_SIZE];
    int fd = STDIN_FILENO;
    int count = 0;
    int i = 1;

    do {
        errno = 0;
        if (ac > 1 && (fd = open(av[i], O_RDONLY)) < 0) {
            my_strerror(av[i]);
            i++;
            continue;
        }
        my_memset(buf, 0, BUF_SIZE);
        errno = 0;
        while ((count = read(fd, buf, BUF_SIZE - 1))) {
            if (count < 0)
                my_strerror(av[i]);
            my_putstr(buf);
            my_memset(buf, 0, BUF_SIZE);
            errno = 0;
        }
        close(fd);
        i++;
    } while (i < ac);
    return EXIT_SUCCESS;
}
