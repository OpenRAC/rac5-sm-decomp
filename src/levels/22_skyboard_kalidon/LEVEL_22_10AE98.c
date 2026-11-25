/* LEVEL_22:0x10AE98 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_00166048;

int func_10AE98(int id)
{
    if (D_00166048 == id) {
        D_00166048 = 0;
        return 1;
    }
    return 0;
}
