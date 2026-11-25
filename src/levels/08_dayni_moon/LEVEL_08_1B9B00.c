/* LEVEL_08:0x1B9B00 -- placement copy of LEVEL_04_198DD0.c: stores the handle looked up for a fixed key in a global, runs the shared setup on the object and selects entry 30. */
extern int D_00251E00;
extern int func_13B5A0(unsigned int value);
extern void func_0386B0(void);
extern void func_0FB190(int index);

void func_1B9B00(void *p)
{
    D_00251E00 = func_13B5A0(0xA0B10063u);
    ((void (*)(void *))func_0386B0)(p);
    func_0FB190(0x1E);
}
