/* LEVEL_09:0x16B9A8 -- placement copy of LEVEL_03_177DE8.c: when the key matches the global one, runs the reset handler and returns 3; otherwise returns 1. */
extern int D_0021CE5C;
extern void func_16B8C0(void *o, int mode);

int func_16B9A8(void *o, int a1, int a2, int a3, int a4, int key)
{
    if (key != D_0021CE5C)
        return 1;
    func_16B8C0(o, 0);
    return 3;
}
