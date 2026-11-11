/* LEVEL_09:0x0AA590 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_001E57D0[];
extern int func_0A0FA0(int p);
extern int func_0A0FD0(int p);
extern void func_0AA540(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_0AA590(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_001E57D0[idx];
    int v1 = func_0A0FA0(p);
    int v2 = func_0A0FD0(D_001E57D0[idx]);
    func_0AA540(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
