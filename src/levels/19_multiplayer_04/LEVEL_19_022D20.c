/* LEVEL_19:0x022D20 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_001A2C14;
extern int D_001A2BF4;

int func_022D20(void)
{
    if (D_001A2C14 || D_001A2BF4)
        return 1;
    return 0;
}
