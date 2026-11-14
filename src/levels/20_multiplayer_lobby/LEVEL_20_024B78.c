/* LEVEL_20:0x024B78 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_001046A4;

void func_024B78(void *p)
{
    if (p != 0) {
        D_001046A4 = 150;
    }
}
