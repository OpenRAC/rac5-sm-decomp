/* LEVEL_03:0x1BD0E0 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_1282D0 for a fixed key (0xDA845AEE) in a global, then calls func_164000. */
extern int D_00221C94;
extern int func_1282D0(unsigned int value);
extern void func_164000(void);

void func_1BD0E0(void)
{
    D_00221C94 = func_1282D0(0xDA845AEEu);
    func_164000();
}
