/* LEVEL_04:0x1F0A88 -- sets three global status words when they still hold their initial values. */
extern int D_00222D1C;
extern int D_00222D20;
extern int D_00222D24;
extern int D_002B25C8;
extern int D_002B268C;
extern int func_0E8A88(int a0);
extern int func_109210(int a0);
extern int func_1364E8(int a0);

void func_1F0A88(void)
{
    if (D_00222D1C == -1) {
        D_00222D1C = func_0E8A88((D_002B25C8 << 16) | 0xA00070D9);
    }
    if (D_00222D20 == -1) {
        D_00222D20 = func_109210((D_002B268C << 16) | 0xC0007041);
    }
    if (D_00222D24 == 0) {
        D_00222D24 = func_1364E8(0x7530DCC3);
    }
}
