/* LEVEL_24:0x1294C8 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_001D7CE8;

int func_1294C8(int id)
{
    if (D_001D7CE8 == id) {
        D_001D7CE8 = 0;
        return 1;
    }
    return 0;
}
