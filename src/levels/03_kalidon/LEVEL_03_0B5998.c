/* LEVEL_03:0x0B5998 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_00214D50[];
extern float D_00214D60[];
extern int D_00214D68[];
extern unsigned int func_0B5970(int idx);

void func_0B5998(int idx, int value, unsigned char flag, float f)
{
    func_0B5970(idx);
    D_00214D50[idx] = flag;
    D_00214D68[idx] = value;
    D_00214D60[idx] = f;
}
