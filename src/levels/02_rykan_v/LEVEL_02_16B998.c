/* LEVEL_02:0x16B998 -- selects entry 0x17, stores the lookup result for a fixed key and hands the object on to the shared handler. */
extern int D_0021C51C;
extern void func_0F58F8(int index);
extern int func_130418(unsigned int value);
extern void func_038838(void *p);

void func_16B998(void *p)
{
    func_0F58F8(0x17);
    D_0021C51C = func_130418(0xB3CE430Fu);
    func_038838(p);
}
