/* LEVEL_21:0x0F2890 -- placement copy of FRONTEND_021368.c: placement copy of LEVEL_01_1339C8.c: releases the global slot when it holds the given id. */
extern int D_0015B9C8;

int func_0F2890(int id)
{
    if (D_0015B9C8 == id) {
        D_0015B9C8 = 0;
        return 1;
    }
    return 0;
}
