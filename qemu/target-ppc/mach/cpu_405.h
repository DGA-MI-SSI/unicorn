#ifndef UC_CPU_405_PPC_H
#define UC_CPU_405_PPC_H

#include "sysemu/cpus.h"
#include "cpu.h"

void ppc_405_cpu_class_init(struct uc_struct *uc, CPUClass *oc, void *data);
void ppc_405_cpu_register_types(void* opaque);

#endif // UC_CPU_405_PPC_H