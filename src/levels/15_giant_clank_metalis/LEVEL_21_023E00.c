/* LEVEL_21:0x023E00 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_00149114;

void func_023E00(void *p)
{
    if (p != 0) {
        D_00149114 = 150;
    }
}
