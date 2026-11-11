/* LEVEL_23:0x0AC978 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_001CFAD0[];
extern float D_001CFAE0[];
extern int D_001CFAE8[];
extern unsigned int func_0AC950(int idx);

void func_0AC978(int idx, int value, unsigned char flag, float f)
{
    func_0AC950(idx);
    D_001CFAD0[idx] = flag;
    D_001CFAE8[idx] = value;
    D_001CFAE0[idx] = f;
}
