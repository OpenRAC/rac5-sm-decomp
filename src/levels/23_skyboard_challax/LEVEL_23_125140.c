/* LEVEL_23:0x125140 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_001DA468;

int func_125140(int id)
{
    if (D_001DA468 == id) {
        D_001DA468 = 0;
        return 1;
    }
    return 0;
}
