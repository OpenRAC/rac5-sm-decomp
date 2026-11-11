/* LEVEL_24:0x0AF440 -- placement copy of LEVEL_01_0B5BB0.c: fills slot idx of three parallel tables (flag, value, float) after the slot's state query. */
extern int D_001CD350[];
extern float D_001CD360[];
extern int D_001CD368[];
extern unsigned int func_0AF418(int idx);

void func_0AF440(int idx, int value, unsigned char flag, float f)
{
    func_0AF418(idx);
    D_001CD350[idx] = flag;
    D_001CD368[idx] = value;
    D_001CD360[idx] = f;
}
