#include <unistd.h>

int main(int argc, char *argv[]) {
    *(int*) 0 = 0;
    return 0;
};
