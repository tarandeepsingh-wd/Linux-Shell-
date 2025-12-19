#include <stdio.h>
#include <string.h>
#include <sys/types.h> 
#include "jobs.h"

typedef struct {
    int id;
    pid_t pid;
    char cmd[100];
} Job;

static Job jobs[100];
static int job_count = 0;

void init_jobs() {
    job_count = 0;
}

void add_job(pid_t pid, char *cmd) {
    jobs[job_count].id = job_count + 1;
    jobs[job_count].pid = pid;
    strcpy(jobs[job_count].cmd, cmd);
    job_count++;
}

void list_jobs() {
    for (int i = 0; i < job_count; i++) {
        printf("[%d] %d %s\n",
            jobs[i].id, jobs[i].pid, jobs[i].cmd);
    }
}
