/* LEVEL_10:0x0AE3F8 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_002049D0[];
extern int func_0A4E08(int p);
extern int func_0A4E38(int p);
extern void func_0AE3A8(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_0AE3F8(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_002049D0[idx];
    int v1 = func_0A4E08(p);
    int v2 = func_0A4E38(D_002049D0[idx]);
    func_0AE3A8(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
