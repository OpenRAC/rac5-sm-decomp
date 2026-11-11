/* LEVEL_24:0x188308 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_11FB68 for a fixed key (0xDA845AEE) in a global, then calls func_1522C0. */
extern int D_001D9BA4;
extern int func_11FB68(unsigned int value);
extern void func_1522C0(void);

void func_188308(void)
{
    D_001D9BA4 = func_11FB68(0xDA845AEEu);
    func_1522C0();
}
