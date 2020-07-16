#include <unistd.h>
#include <stdlib.h>

void shuffle(char *garbage, size_t l) {
    for(size_t i = l - 1; i > 0; i--) {
        size_t j = rand() % l;
        char t = garbage[j];

        garbage[j] = garbage[i];
        garbage[i] = t;
    };
};

int main(int argc, char *argv[]) {
    char garbage[256] = { 0 };

    for(char i = 0; i < sizeof(garbage); i++) {
        garbage[(int) i] = i;
    };

    for(;;) {
        shuffle(garbage, sizeof(garbage));

        write(1, garbage, sizeof(garbage));
        write(2, garbage, sizeof(garbage));
    };

    return 0;
};
