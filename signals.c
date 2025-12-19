#include <signal.h>
#include <unistd.h>
#include "signals.h"

void sigint_handler(int sig) {
    write(1, "\n", 1);
}

void init_signals() {
    signal(SIGINT, sigint_handler);
}
