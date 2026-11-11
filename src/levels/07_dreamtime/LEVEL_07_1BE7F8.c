/* LEVEL_07:0x1BE7F8 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_12D068 for a fixed key (0xDA845AEE) in a global, then calls func_16D848. */
extern int D_0021D994;
extern int func_12D068(unsigned int value);
extern void func_16D848(void);

void func_1BE7F8(void)
{
    D_0021D994 = func_12D068(0xDA845AEEu);
    func_16D848();
}
