/* LEVEL_08:0x1DE680 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_13B5A0 for a fixed key (0xDA845AEE) in a global, then calls func_17D9D8. */
extern int D_00252464;
extern int func_13B5A0(unsigned int value);
extern void func_17D9D8(void);

void func_1DE680(void)
{
    D_00252464 = func_13B5A0(0xDA845AEEu);
    func_17D9D8();
}
