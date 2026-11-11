/* LEVEL_02:0x0BC4C0 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_00211690[];
extern float D_002116A0[];
extern int D_002116A8[];
extern unsigned int func_0BC498(int idx);

void func_0BC4C0(int idx, int value, unsigned char flag, float f)
{
    func_0BC498(idx);
    D_00211690[idx] = flag;
    D_002116A8[idx] = value;
    D_002116A0[idx] = f;
}
