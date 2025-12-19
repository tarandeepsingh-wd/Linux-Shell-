#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include "exec.h"
#include "jobs.h"

void execute_command(char **args) {
    pid_t pid = fork();

    if (pid == 0) {
        setpgid(0, 0);
        execvp(args[0], args);
        perror("exec failed");
        _exit(1);
    } else {
        add_job(pid, args[0]);
        waitpid(pid, NULL, WUNTRACED);
    }
}
