/* LEVEL_19:0x110DD8 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_001B5CF8;

int func_110DD8(int id)
{
    if (D_001B5CF8 == id) {
        D_001B5CF8 = 0;
        return 1;
    }
    return 0;
}
