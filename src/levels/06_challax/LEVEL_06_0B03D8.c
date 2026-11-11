/* LEVEL_06:0x0B03D8 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_001EB5D0[];
extern float D_001EB5E0[];
extern int D_001EB5E8[];
extern unsigned int func_0B03B0(int idx);

void func_0B03D8(int idx, int value, unsigned char flag, float f)
{
    func_0B03B0(idx);
    D_001EB5D0[idx] = flag;
    D_001EB5E8[idx] = value;
    D_001EB5E0[idx] = f;
}
