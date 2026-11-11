/* LEVEL_09:0x19C008 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_123000 for a fixed key (0xDA845AEE) in a global, then calls func_159CF0. */
extern int D_001F29EC;
extern int func_123000(unsigned int value);
extern void func_159CF0(void);

void func_19C008(void)
{
    D_001F29EC = func_123000(0xDA845AEEu);
    func_159CF0();
}
