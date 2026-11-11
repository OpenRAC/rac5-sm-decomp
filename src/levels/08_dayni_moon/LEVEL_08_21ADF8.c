/* LEVEL_08:0x21ADF8 -- placement copy of LEVEL_04_1F0A88.c: sets three global status words when they still hold their initial values. */
extern int D_00252F24;
extern int D_00252F28;
extern int D_00252F2C;
extern int D_002E7048;
extern int D_002E710C;
extern int func_0EE198(int a0);
extern int func_10D720(int a0);
extern int func_13B5A0(int a0);

void func_21ADF8(void)
{
    if (D_00252F24 == -1) {
        D_00252F24 = func_0EE198((D_002E7048 << 16) | 0xA00070D9);
    }
    if (D_00252F28 == -1) {
        D_00252F28 = func_10D720((D_002E710C << 16) | 0xC0007041);
    }
    if (D_00252F2C == 0) {
        D_00252F2C = func_13B5A0(0x7530DCC3);
    }
}
