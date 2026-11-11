/* LEVEL_06:0x0A7AB0 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_001EA8D0[];
extern int func_09E4C0(int p);
extern int func_09E4F0(int p);
extern void func_0A7A60(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_0A7AB0(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_001EA8D0[idx];
    int v1 = func_09E4C0(p);
    int v2 = func_09E4F0(D_001EA8D0[idx]);
    func_0A7A60(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
