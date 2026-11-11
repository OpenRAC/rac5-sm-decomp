/* LEVEL_02:0x0B3BF0 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_00210990[];
extern int func_0AA600(int p);
extern int func_0AA630(int p);
extern void func_0B3BA0(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_0B3BF0(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_00210990[idx];
    int v1 = func_0AA600(p);
    int v2 = func_0AA630(D_00210990[idx]);
    func_0B3BA0(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
