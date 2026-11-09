/* LEVEL_06:0x023C00 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_001E2E8C;
extern int D_001E2E6C;

int func_023C00(void)
{
    if (D_001E2E8C || D_001E2E6C)
        return 1;
    return 0;
}
