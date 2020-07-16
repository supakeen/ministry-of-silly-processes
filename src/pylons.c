#include <unistd.h>
#include <signal.h>


void handler(int signo) {
};


int main(int argc, char *argv[]) {
    signal(SIGABRT, handler);
    signal(SIGFPE, handler);
    signal(SIGILL, handler);
    signal(SIGINT, handler);
    signal(SIGSEGV, handler);
    signal(SIGTERM, handler);
    signal(SIGUSR1, handler);
    signal(SIGUSR2, handler);

    for(;;) {
        sleep(1);
    };

    return 1;
};
