/* LEVEL_17:0x10FCB0 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_001A8178;

int func_10FCB0(int id)
{
    if (D_001A8178 == id) {
        D_001A8178 = 0;
        return 1;
    }
    return 0;
}
