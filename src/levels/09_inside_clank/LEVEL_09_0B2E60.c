/* LEVEL_09:0x0B2E60 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_001E64D0[];
extern float D_001E64E0[];
extern int D_001E64E8[];
extern unsigned int func_0B2E38(int idx);

void func_0B2E60(int idx, int value, unsigned char flag, float f)
{
    func_0B2E38(idx);
    D_001E64D0[idx] = flag;
    D_001E64E8[idx] = value;
    D_001E64E0[idx] = f;
}
