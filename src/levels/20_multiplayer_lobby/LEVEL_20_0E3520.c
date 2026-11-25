/* LEVEL_20:0x0E3520 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_00117238;

int func_0E3520(int id)
{
    if (D_00117238 == id) {
        D_00117238 = 0;
        return 1;
    }
    return 0;
}
