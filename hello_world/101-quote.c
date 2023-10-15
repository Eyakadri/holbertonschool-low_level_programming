#include <unistd.h>
#include <stdlib.h>

int main(void) {
    char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(message) - 1;
    if (write(2, message, len) != len) {
        write(2, "Write error\n", 12);
        return 1;
    }

    return 0;
}
