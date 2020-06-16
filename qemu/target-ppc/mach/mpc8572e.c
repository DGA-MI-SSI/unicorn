#include "mpc8572e.h"
#include "cpu.h"
#include "cpu-qom.h"

#define CPU_POWERPC_MPC8572 0x80210030

#define POWERPC_SVR_E500 0x40000000
#define POWERPC_SVR_8572E (0x80E80010 | POWERPC_SVR_E500)

void ppc_mpc8572e_class_init(struct uc_struct *uc, CPUClass *oc, void *data){
    PowerPCCPUClass *pcc = POWERPC_CPU_CLASS(uc, oc);

    pcc->pvr = CPU_POWERPC_MPC8572;
    pcc->svr = POWERPC_SVR_8572E;
}

void ppc_mpc8572e_register_types(void* opaque){
    /*const TypeInfo ppc_mpc8572e_type_info = {
        "MPC8572E-" TYPE_POWERPC_CPU,
        "e500v2-family-" TYPE_POWERPC_CPU,
        0,
        0,
        opaque,
        NULL,
        NULL,
        NULL,                                
        NULL,
        ppc_mpc8572e_class_init,
    };

    type_register_static(opaque, &ppc_mpc8572e_type_info);*/
}
