/* LEVEL_01:0x1339C8 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_00207068;

int func_1339C8(int id)
{
    if (D_00207068 == id) {
        D_00207068 = 0;
        return 1;
    }
    return 0;
}
