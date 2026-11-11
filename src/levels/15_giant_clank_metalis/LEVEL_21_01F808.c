/* LEVEL_21:0x01F808 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_00148C0C;
extern int D_00148BEC;

int func_01F808(void)
{
    if (D_00148C0C || D_00148BEC)
        return 1;
    return 0;
}
