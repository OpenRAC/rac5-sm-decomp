/* LEVEL_10:0x0B6D88 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_002056D0[];
extern float D_002056E0[];
extern int D_002056E8[];
extern unsigned int func_0B6D60(int idx);

void func_0B6D88(int idx, int value, unsigned char flag, float f)
{
    func_0B6D60(idx);
    D_002056D0[idx] = flag;
    D_002056E8[idx] = value;
    D_002056E0[idx] = f;
}
