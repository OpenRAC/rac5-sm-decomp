/* LEVEL_02:0x139D78 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_0021C028;

int func_139D78(int id)
{
    if (D_0021C028 == id) {
        D_0021C028 = 0;
        return 1;
    }
    return 0;
}
