/* LEVEL_04:0x1B7808 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_1364E8 for a fixed key (0xDA845AEE) in a global, then calls func_172630. */
extern int D_002223EC;
extern int func_1364E8(unsigned int value);
extern void func_172630(void);

void func_1B7808(void)
{
    D_002223EC = func_1364E8(0xDA845AEEu);
    func_172630();
}
