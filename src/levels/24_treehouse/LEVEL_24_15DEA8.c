/* LEVEL_24:0x15DEA8 -- placement copy of LEVEL_03_177DE8.c: when the key matches the global one, runs the reset handler and returns 3; otherwise returns 1. */
extern int D_002015DC;
extern void func_15DDC0(void *o, int mode);

int func_15DEA8(void *o, int a1, int a2, int a3, int a4, int key)
{
    if (key != D_002015DC)
        return 1;
    func_15DDC0(o, 0);
    return 3;
}
