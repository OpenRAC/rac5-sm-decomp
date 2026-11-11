/* LEVEL_16:0x0230E0 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_001A1A94;
extern int D_001A1A74;

int func_0230E0(void)
{
    if (D_001A1A94 || D_001A1A74)
        return 1;
    return 0;
}
