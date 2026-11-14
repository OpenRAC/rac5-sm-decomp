/* LEVEL_08:0x16F848 -- placement copy of LEVEL_01_158F18.c: returns 1 when the global flag byte is set, otherwise -1. */
extern unsigned char D_0023F02C;

int func_16F848(void)
{
    return D_0023F02C != 0 ? 1 : -1;
}
