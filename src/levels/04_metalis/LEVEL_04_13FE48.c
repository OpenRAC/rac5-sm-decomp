/* LEVEL_04:0x13FE48 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_00220488;

int func_13FE48(int id)
{
    if (D_00220488 == id) {
        D_00220488 = 0;
        return 1;
    }
    return 0;
}
