/* LEVEL_03:0x131D90 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_0021F6E8;

int func_131D90(int id)
{
    if (D_0021F6E8 == id) {
        D_0021F6E8 = 0;
        return 1;
    }
    return 0;
}
