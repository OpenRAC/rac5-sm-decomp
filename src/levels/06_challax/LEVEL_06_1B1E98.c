/* LEVEL_06:0x1B1E98 -- resets the first slot and caches two hashed handles in globals. */
extern int D_001F7E3C;
extern int D_001F7E40;
extern void func_0E8808(int index);
extern int func_1206C0(unsigned int value);

void func_1B1E98(void)
{
    func_0E8808(0);
    D_001F7E3C = func_1206C0(0x4E5D6E69U);
    D_001F7E40 = func_1206C0(0xB3CE430FU);
}
