/* LEVEL_08:0x0C0AA0 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_00245590[];
extern float D_002455A0[];
extern int D_002455A8[];
extern unsigned int func_0C0A78(int idx);

void func_0C0AA0(int idx, int value, unsigned char flag, float f)
{
    func_0C0A78(idx);
    D_00245590[idx] = flag;
    D_002455A8[idx] = value;
    D_002455A0[idx] = f;
}
