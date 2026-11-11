/* LEVEL_10:0x024E60 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_001FCF8C;
extern int D_001FCF6C;

int func_024E60(void)
{
    if (D_001FCF8C || D_001FCF6C)
        return 1;
    return 0;
}
