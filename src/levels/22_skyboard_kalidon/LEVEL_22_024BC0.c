/* LEVEL_22:0x024BC0 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_00153814;

void func_024BC0(void *p)
{
    if (p != 0) {
        D_00153814 = 150;
    }
}
