/* LEVEL_18:0x0A3BD0 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_001ABBD0[];
extern float D_001ABBE0[];
extern int D_001ABBE8[];
extern unsigned int func_0A3B90(int idx);

void func_0A3BD0(int idx, int value, unsigned char flag, float f)
{
    func_0A3B90(idx);
    D_001ABBD0[idx] = flag;
    D_001ABBE8[idx] = value;
    D_001ABBE0[idx] = f;
}
