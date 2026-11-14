/* LEVEL_16:0x028070 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_001A1FC4;

void func_028070(void *p)
{
    if (p != 0) {
        D_001A1FC4 = 150;
    }
}
