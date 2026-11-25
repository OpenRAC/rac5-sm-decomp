/* FRONTEND:0x021368 -- placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_00032830;

int func_021368(int id)
{
    if (D_00032830 == id) {
        D_00032830 = 0;
        return 1;
    }
    return 0;
}
