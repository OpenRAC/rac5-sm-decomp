/* LEVEL_07:0x184DD8 -- placement copy of LEVEL_03_177DE8.c: when the key matches the global one, runs the reset handler and returns 3; otherwise returns 1. */
extern int D_0024AFDC;
extern void func_184CF0(void *o, int mode);

int func_184DD8(void *o, int a1, int a2, int a3, int a4, int key)
{
    if (key != D_0024AFDC)
        return 1;
    func_184CF0(o, 0);
    return 3;
}
