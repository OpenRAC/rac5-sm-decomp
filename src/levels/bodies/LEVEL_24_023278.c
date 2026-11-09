/* LEVEL_24:0x023278 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_001C4C0C;
extern int D_001C4BEC;

int func_023278(void)
{
    if (D_001C4C0C || D_001C4BEC)
        return 1;
    return 0;
}
