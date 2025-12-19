#ifndef SIMPLE_SHELL_JOBS_H
#define SIMPLE_SHELL_JOBS_H

#include <sys/types.h>   // for pid_t

void init_jobs();
void add_job(pid_t pid, char *cmd);
void list_jobs();

#endif

