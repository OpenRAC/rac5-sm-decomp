/* LEVEL_01:0x1A3F20 -- runs two setup helpers, then stores the id looked up for a fixed hash into a global. */
extern int D_00208BF4;
extern void func_0EF748(int index);
extern int func_12A068(unsigned int value);

void func_1A3F20(void)
{
    func_0EF748(0x1F);
    func_0EF748(0x23);
    D_00208BF4 = func_12A068(0x39686F69u);
}
