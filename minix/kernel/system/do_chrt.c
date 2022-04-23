
#include "kernel/system.h"
#include "kernel/vm.h"
#include <signal.h>
#include <string.h>
#include <assert.h>

#include <minix/endpoint.h>
#include <minix/u64.h>


#if USE_CHRT

int do_chrt(struct proc * caller, message *m_ptr){

    struct proc *rp;
    long exp_time = m_ptr->m2_l1;

    rp = proc_addr(m_ptr->m2_l2);//进程在内核中的位置
    rp->p_deadline = exp_time;

    return (OK)
}


#endif