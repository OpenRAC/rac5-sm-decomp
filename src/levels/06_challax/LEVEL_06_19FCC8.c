/* LEVEL_06:0x19FCC8 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_1206C0 for a fixed key (0xDA845AEE) in a global, then calls func_157D60. */
extern int D_001F7CB4;
extern int func_1206C0(unsigned int value);
extern void func_157D60(void);

void func_19FCC8(void)
{
    D_001F7CB4 = func_1206C0(0xDA845AEEu);
    func_157D60();
}
