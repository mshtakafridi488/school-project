#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("%d", ++i);
    } while (--i >= 0);

    return 0;
}
