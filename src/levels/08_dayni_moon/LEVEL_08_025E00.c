/* LEVEL_08:0x025E00 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_0023CB0C;
extern int D_0023CAEC;

int func_025E00(void)
{
    if (D_0023CB0C || D_0023CAEC)
        return 1;
    return 0;
}
