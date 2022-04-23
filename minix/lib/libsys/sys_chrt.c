#include "syslib.h"
#include <sys/cdefs.h>

int sys_chrt(proc_ep, deadline)
endpoint_t proc_ep;
long deadline;
{
    message m;
    int r;
    memset(&m, 0, sizeof(m));
    m.m2_l2 = proc_ep;
    m.m2_l1 = deadline;

    r = _kernel_call(SYS_CHRT, &m);
    return r;
}