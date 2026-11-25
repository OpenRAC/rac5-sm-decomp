/* LEVEL_04:0x198DD0 -- stores the handle looked up for a fixed key in a global, runs the shared setup on the object and selects entry 30. */
extern int D_00221E18;
extern int func_1364E8(unsigned int value);
extern void func_035438(void);
extern void func_0F6C80(int index);

void func_198DD0(void *p)
{
    D_00221E18 = func_1364E8(0xA0B10063u);
    ((void (*)(void *))func_035438)(p);
    func_0F6C80(0x1E);
}
