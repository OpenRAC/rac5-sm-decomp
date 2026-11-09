/* LEVEL_22:0x0202D8 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_0015330C;
extern int D_001532EC;

int func_0202D8(void)
{
    if (D_0015330C || D_001532EC)
        return 1;
    return 0;
}
