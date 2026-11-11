/* LEVEL_01:0x025580 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_001F3F8C;
extern int D_001F3F6C;

int func_025580(void)
{
    if (D_001F3F8C || D_001F3F6C)
        return 1;
    return 0;
}
