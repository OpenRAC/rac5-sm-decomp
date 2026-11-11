/* LEVEL_05:0x024490 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_001E330C;
extern int D_001E32EC;

int func_024490(void)
{
    if (D_001E330C || D_001E32EC)
        return 1;
    return 0;
}
