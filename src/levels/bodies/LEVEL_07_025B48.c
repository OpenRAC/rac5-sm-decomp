/* LEVEL_07:0x025B48 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_0020828C;
extern int D_0020826C;

int func_025B48(void)
{
    if (D_0020828C || D_0020826C)
        return 1;
    return 0;
}
