/* LEVEL_19:0x0A4450 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_001AB8D0[];
extern float D_001AB8E0[];
extern int D_001AB8E8[];
extern unsigned int func_0A4410(int idx);

void func_0A4450(int idx, int value, unsigned char flag, float f)
{
    func_0A4410(idx);
    D_001AB8D0[idx] = flag;
    D_001AB8E8[idx] = value;
    D_001AB8E0[idx] = f;
}
