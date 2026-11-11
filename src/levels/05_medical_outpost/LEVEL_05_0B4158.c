/* LEVEL_05:0x0B4158 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_001EBA50[];
extern float D_001EBA60[];
extern int D_001EBA68[];
extern unsigned int func_0B4130(int idx);

void func_0B4158(int idx, int value, unsigned char flag, float f)
{
    func_0B4130(idx);
    D_001EBA50[idx] = flag;
    D_001EBA68[idx] = value;
    D_001EBA60[idx] = f;
}
