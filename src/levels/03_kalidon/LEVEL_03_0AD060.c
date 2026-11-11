/* LEVEL_03:0x0AD060 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_00214050[];
extern int func_0A3A70(int p);
extern int func_0A3AA0(int p);
extern void func_0AD010(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_0AD060(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_00214050[idx];
    int v1 = func_0A3A70(p);
    int v2 = func_0A3AA0(D_00214050[idx]);
    func_0AD010(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
