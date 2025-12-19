#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "builtins.h"
#include "jobs.h"
#include<stdio.h>

int handle_builtin(char **args) {

    if (strcmp(args[0], "exit") == 0)
        exit(0);

    if (strcmp(args[0], "cd") == 0) {
        if (chdir(args[1]) != 0) {
            perror("cd");
        }

        return 1;
    }

    if (strcmp(args[0], "jobs") == 0) {
        list_jobs();
        return 1;
    }

    return 0;
}
