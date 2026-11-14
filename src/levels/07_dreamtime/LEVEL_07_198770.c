/* LEVEL_07:0x198770 -- resets slot 0 and stores the handle returned for a fixed hash into a global. */
extern int D_0021CFA4;
extern void func_0F0548(int index);
extern int func_12D068(unsigned int value);

void func_198770(void)
{
    func_0F0548(0);
    D_0021CFA4 = func_12D068(0xB3CE430Fu);
}
