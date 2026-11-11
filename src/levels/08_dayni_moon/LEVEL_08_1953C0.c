/* LEVEL_08:0x1953C0 -- placement copy of LEVEL_03_177DE8.c: when the key matches the global one, runs the reset handler and returns 3; otherwise returns 1. */
extern int D_0028496C;
extern void func_1952D8(void *o, int mode);

int func_1953C0(void *o, int a1, int a2, int a3, int a4, int key)
{
    if (key != D_0028496C)
        return 1;
    func_1952D8(o, 0);
    return 3;
}
