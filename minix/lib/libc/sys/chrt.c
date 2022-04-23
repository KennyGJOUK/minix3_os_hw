#include <sys/cdefs.h>
#include "namespace.h"

#include <lib.h>
#include <string.h>
#include <unistd.h>

#include <time.h>

int chrt(long deadline){


    message m;
    memset(&m, 0, sizeof(m));
    alarm(deadline);

    time_t timer;
    timer = time(NULL);
    timer += deadline;
    m.m4_l1 = timer;

    return _syscall(PM_PROC_NR, PM_CHRT, &m);
}