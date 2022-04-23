
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

    rp = proc_addr(m_ptr->m4_l2);//进程在内核中的位置
    rp->p_dealine = m_ptr->m4_l4;

    return (OK)
}


#endif