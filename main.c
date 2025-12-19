#include <stdio.h>
#include <stdlib.h>
#include "parser.h"
#include "builtins.h"
#include "exec.h"
#include "signals.h"
#include "jobs.h"


int main() {
    init_signals();
    init_jobs();

    char input[1024];
    char *args[100];

    while (1) {
        printf("myshell> ");
        fflush(stdout);

        if (!fgets(input, sizeof(input), stdin))
            break;

        parse_input(input, args);

        if (args[0] == NULL)
            continue;

        if (handle_builtin(args))
            continue;

        execute_command(args);
    }
    return 0;
}

