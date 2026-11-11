/* LEVEL_03:0x177DE8 -- when the key matches the global one, runs the reset handler and returns 3; otherwise returns 1. */
extern int D_0025055C;
extern void func_177D00(void *o, int mode);

int func_177DE8(void *o, int a1, int a2, int a3, int a4, int key)
{
    if (key != D_0025055C)
        return 1;
    func_177D00(o, 0);
    return 3;
}
