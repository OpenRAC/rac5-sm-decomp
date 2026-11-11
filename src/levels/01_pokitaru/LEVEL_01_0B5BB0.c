/* LEVEL_01:0x0B5BB0 -- fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_001FC6D0[];
extern float D_001FC6E0[];
extern int D_001FC6E8[];
extern unsigned int func_0B5B88(int idx);

void func_0B5BB0(int idx, int value, unsigned char flag, float f)
{
    func_0B5B88(idx);
    D_001FC6D0[idx] = flag;
    D_001FC6E8[idx] = value;
    D_001FC6E0[idx] = f;
}
