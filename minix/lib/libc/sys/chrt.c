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
    time(&timer);
    if (deadline != 0) deadline = timer + deadline;
    
    m.m2_l1 = deadline;
    // if (deadline > 0){
    //     m.m4_l1 = timer;
    // }else{
    //     m.m4_l1 = 0;
    // }
    
    return(_syscall(PM_PROC_NR, PM_CHRT, &m));
}