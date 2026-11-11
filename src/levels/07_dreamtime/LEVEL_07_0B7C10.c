/* LEVEL_07:0x0B7C10 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_002109D0[];
extern float D_002109E0[];
extern int D_002109E8[];
extern unsigned int func_0B7BE8(int idx);

void func_0B7C10(int idx, int value, unsigned char flag, float f)
{
    func_0B7BE8(idx);
    D_002109D0[idx] = flag;
    D_002109E8[idx] = value;
    D_002109E0[idx] = f;
}
