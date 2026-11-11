/* LEVEL_10:0x17A3A0 -- placement copy of LEVEL_03_177DE8.c: when the key matches the global one, runs the reset handler and returns 3; otherwise returns 1. */
extern int D_0023EADC;
extern void func_17A2B8(void *o, int mode);

int func_17A3A0(void *o, int a1, int a2, int a3, int a4, int key)
{
    if (key != D_0023EADC)
        return 1;
    func_17A2B8(o, 0);
    return 3;
}
