/* LEVEL_02:0x1644E0 -- stores the handle built from the global word and a fixed tag, then runs the follow-up helper. */
extern int D_0021C4C4;
extern unsigned int D_002AF378;
extern int func_0E9B58(unsigned int);
extern void func_07A8A8(void);

void func_1644E0(void)
{
    D_0021C4C4 = func_0E9B58((D_002AF378 << 16) | 0xa00070d9u);
    func_07A8A8();
}
