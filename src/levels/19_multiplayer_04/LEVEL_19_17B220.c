/* LEVEL_19:0x17B220 -- placement copy of LEVEL_06_1B1E98.c: resets the first slot and caches two hashed handles in globals. */
extern int D_001BF5D4;
extern int D_001BF5D8;
extern void func_0D9168(int index);
extern int func_107538(unsigned int value);

void func_17B220(void)
{
    func_0D9168(0);
    D_001BF5D4 = func_107538(0x4E5D6E69U);
    D_001BF5D8 = func_107538(0xB3CE430FU);
}
