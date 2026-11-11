/* LEVEL_04:0x0BB3B8 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_00215B90[];
extern float D_00215BA0[];
extern int D_00215BA8[];
extern unsigned int func_0BB390(int idx);

void func_0BB3B8(int idx, int value, unsigned char flag, float f)
{
    func_0BB390(idx);
    D_00215B90[idx] = flag;
    D_00215BA8[idx] = value;
    D_00215BA0[idx] = f;
}
