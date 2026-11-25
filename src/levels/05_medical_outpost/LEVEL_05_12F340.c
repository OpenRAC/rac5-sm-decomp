/* LEVEL_05:0x12F340 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_001F60E8;

int func_12F340(int id)
{
    if (D_001F60E8 == id) {
        D_001F60E8 = 0;
        return 1;
    }
    return 0;
}
