/* LEVEL_02:0x1C9818 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_130418 for a fixed key (0xDA845AEE) in a global, then calls func_17C5B8. */
extern int D_0021DD4C;
extern int func_130418(unsigned int value);
extern void func_17C5B8(void);

void func_1C9818(void)
{
    D_0021DD4C = func_130418(0xDA845AEEu);
    func_17C5B8();
}
