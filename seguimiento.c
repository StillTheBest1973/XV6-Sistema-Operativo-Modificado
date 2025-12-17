#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    if(argc != 2){
        printf(2, " activar: seguimiento (1 o 0)\n");
        exit();
    }

    seguimiento(atoi(argv[1]));
    exit();
}