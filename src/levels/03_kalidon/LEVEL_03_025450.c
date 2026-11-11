/* LEVEL_03:0x025450 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_0020C60C;
extern int D_0020C5EC;

int func_025450(void)
{
    if (D_0020C60C || D_0020C5EC)
        return 1;
    return 0;
}
