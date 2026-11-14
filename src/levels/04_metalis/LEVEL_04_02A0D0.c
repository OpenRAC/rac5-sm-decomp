/* LEVEL_04:0x02A0D0 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_0020D614;

void func_02A0D0(void *p)
{
    if (p != 0) {
        D_0020D614 = 150;
    }
}
