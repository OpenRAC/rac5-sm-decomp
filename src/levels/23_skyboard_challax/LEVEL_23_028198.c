/* LEVEL_23:0x028198 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_001C7894;

void func_028198(void *p)
{
    if (p != 0) {
        D_001C7894 = 150;
    }
}
