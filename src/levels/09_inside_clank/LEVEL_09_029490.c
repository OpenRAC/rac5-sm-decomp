/* LEVEL_09:0x029490 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_001DE294;

void func_029490(void *p)
{
    if (p != 0) {
        D_001DE294 = 150;
    }
}
