/* LEVEL_18:0x176678 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_105B48 for a fixed key (0xDA845AEE) in a global, then calls func_140CF8. */
extern int D_001BF854;
extern int func_105B48(unsigned int value);
extern void func_140CF8(void);

void func_176678(void)
{
    D_001BF854 = func_105B48(0xDA845AEEu);
    func_140CF8();
}
