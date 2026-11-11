/* LEVEL_16:0x0A4BD8 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_001AA750[];
extern float D_001AA760[];
extern int D_001AA768[];
extern unsigned int func_0A4B98(int idx);

void func_0A4BD8(int idx, int value, unsigned char flag, float f)
{
    func_0A4B98(idx);
    D_001AA750[idx] = flag;
    D_001AA768[idx] = value;
    D_001AA760[idx] = f;
}
