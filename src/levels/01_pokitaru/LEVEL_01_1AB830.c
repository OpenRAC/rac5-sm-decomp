/* LEVEL_01:0x1AB830 -- stores the result of func_12A068 for a fixed key (0xDA845AEE) in a global, then calls func_168A08. */
extern int D_00208CF4;
extern int func_12A068(unsigned int value);
extern void func_168A08(void);

void func_1AB830(void)
{
    D_00208CF4 = func_12A068(0xDA845AEEu);
    func_168A08();
}
