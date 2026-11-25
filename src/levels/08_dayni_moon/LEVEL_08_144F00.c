/* LEVEL_08:0x144F00 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_0024FF28;

int func_144F00(int id)
{
    if (D_0024FF28 == id) {
        D_0024FF28 = 0;
        return 1;
    }
    return 0;
}
