#include "syslib.h"
#include <sys/cdefs.h>

int sys_chrt(proc_ep, m)
endpoint_t proc_ep;
message m;
{
    m.m4_l2 = proc_ep;
    int r = _kernel_call(SYS_CHRT, &m);
    return r;
}