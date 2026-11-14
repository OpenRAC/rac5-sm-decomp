/* LEVEL_07:0x02A968 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_00208794;

void func_02A968(void *p)
{
    if (p != 0) {
        D_00208794 = 150;
    }
}
