/* LEVEL_04:0x025200 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_0020D10C;
extern int D_0020D0EC;

int func_025200(void)
{
    if (D_0020D10C || D_0020D0EC)
        return 1;
    return 0;
}
