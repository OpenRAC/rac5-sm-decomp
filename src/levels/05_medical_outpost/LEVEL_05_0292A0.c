/* LEVEL_05:0x0292A0 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_001E3814;

void func_0292A0(void *p)
{
    if (p != 0) {
        D_001E3814 = 150;
    }
}
