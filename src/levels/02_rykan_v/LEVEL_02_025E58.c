/* LEVEL_02:0x025E58 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_00208C0C;
extern int D_00208BEC;

int func_025E58(void)
{
    if (D_00208C0C || D_00208BEC)
        return 1;
    return 0;
}
