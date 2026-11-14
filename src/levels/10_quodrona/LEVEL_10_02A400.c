/* LEVEL_10:0x02A400 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_001FD494;

void func_02A400(void *p)
{
    if (p != 0) {
        D_001FD494 = 150;
    }
}
