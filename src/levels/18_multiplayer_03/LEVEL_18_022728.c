/* LEVEL_18:0x022728 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_001A2F14;
extern int D_001A2EF4;

int func_022728(void)
{
    if (D_001A2F14 || D_001A2EF4)
        return 1;
    return 0;
}
