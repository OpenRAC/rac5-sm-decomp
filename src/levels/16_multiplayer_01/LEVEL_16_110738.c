/* LEVEL_16:0x110738 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_001B4B78;

int func_110738(int id)
{
    if (D_001B4B78 == id) {
        D_001B4B78 = 0;
        return 1;
    }
    return 0;
}
