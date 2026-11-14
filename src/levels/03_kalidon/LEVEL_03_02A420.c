/* LEVEL_03:0x02A420 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_0020CB14;

void func_02A420(void *p)
{
    if (p != 0) {
        D_0020CB14 = 150;
    }
}
