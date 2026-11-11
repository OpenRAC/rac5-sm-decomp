/* LEVEL_16:0x174910 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_106E98 for a fixed key (0xDA845AEE) in a global, then calls func_145228. */
extern int D_001BE2EC;
extern int func_106E98(unsigned int value);
extern void func_145228(void);

void func_174910(void)
{
    D_001BE2EC = func_106E98(0xDA845AEEu);
    func_145228();
}
