/* LEVEL_23:0x0235C8 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_001C738C;
extern int D_001C736C;

int func_0235C8(void)
{
    if (D_001C738C || D_001C736C)
        return 1;
    return 0;
}
