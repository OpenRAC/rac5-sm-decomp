/* LEVEL_19:0x170800 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_107538 for a fixed key (0xDA845AEE) in a global, then calls func_1420A0. */
extern int D_001BF4DC;
extern int func_107538(unsigned int value);
extern void func_1420A0(void);

void func_170800(void)
{
    D_001BF4DC = func_107538(0xDA845AEEu);
    func_1420A0();
}
