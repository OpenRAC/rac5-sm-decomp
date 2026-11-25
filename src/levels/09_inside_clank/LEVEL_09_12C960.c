/* LEVEL_09:0x12C960 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_001F0B68;

int func_12C960(int id)
{
    if (D_001F0B68 == id) {
        D_001F0B68 = 0;
        return 1;
    }
    return 0;
}
