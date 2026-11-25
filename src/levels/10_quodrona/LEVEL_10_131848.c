/* LEVEL_10:0x131848 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_0020FCC8;

int func_131848(int id)
{
    if (D_0020FCC8 == id) {
        D_0020FCC8 = 0;
        return 1;
    }
    return 0;
}
