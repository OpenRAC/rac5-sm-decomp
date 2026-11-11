/* LEVEL_05:0x1A5E30 -- placement copy of LEVEL_01_1AB830.c: stores the result of func_1259E0 for a fixed key (0xDA845AEE) in a global, then calls func_15BAC8. */
extern int D_001F7D94;
extern int func_1259E0(unsigned int value);
extern void func_15BAC8(void);

void func_1A5E30(void)
{
    D_001F7D94 = func_1259E0(0xDA845AEEu);
    func_15BAC8();
}
