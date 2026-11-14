/* LEVEL_01:0x158F18 -- returns 1 when the global flag byte is set, otherwise -1. */
extern unsigned char D_001F616C;

int func_158F18(void)
{
    return D_001F616C != 0 ? 1 : -1;
}
