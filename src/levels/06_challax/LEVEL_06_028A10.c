/* LEVEL_06:0x028A10 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_001E3394;

void func_028A10(void *p)
{
    if (p != 0) {
        D_001E3394 = 150;
    }
}
