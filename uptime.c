#include "types.h"
#include "stat.h"
#include "user.h"

// Comando uptime, utiliza 2 syscall para extender la 
// informacion mostrada (tiempo y cantidad de procesos)
int main(){

    printf(1, "uptime: %d ticks\n", uptime());
    printf(1, "procesos activo: %d procesos\n", cantproc());

    return 0;
}