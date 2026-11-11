/* LEVEL_17:0x0A40B8 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_0019DD50[];
extern float D_0019DD60[];
extern int D_0019DD68[];
extern unsigned int func_0A4078(int idx);

void func_0A40B8(int idx, int value, unsigned char flag, float f)
{
    func_0A4078(idx);
    D_0019DD50[idx] = flag;
    D_0019DD68[idx] = value;
    D_0019DD60[idx] = f;
}
