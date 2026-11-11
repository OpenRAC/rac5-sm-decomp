/* LEVEL_06:0x167D70 -- placement copy of LEVEL_03_177DE8.c: when the key matches the global one, runs the reset handler and returns 3; otherwise returns 1. */
extern int D_0022245C;
extern void func_167C88(void *o, int mode);

int func_167D70(void *o, int a1, int a2, int a3, int a4, int key)
{
    if (key != D_0022245C)
        return 1;
    func_167C88(o, 0);
    return 3;
}
