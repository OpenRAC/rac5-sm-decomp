/* LEVEL_02:0x02ADF0 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_00209114;

void func_02ADF0(void *p)
{
    if (p != 0) {
        D_00209114 = 150;
    }
}
