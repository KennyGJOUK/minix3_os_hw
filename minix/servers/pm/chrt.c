
#include "pm.h"
#include <minix/com.h>
#include <minix/callnr.h>
#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include "mproc.h"
#include <sys/cdefs.h>


int do_chrt(){
    //注册 chrt 服务，将 deadline 传入到内核层
    sys_chrt(who_p, m_in);

    return(OK);
}