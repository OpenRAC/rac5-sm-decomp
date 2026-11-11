/* LEVEL_07:0x0AF2E0 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_0020FCD0[];
extern int func_0A5CF0(int p);
extern int func_0A5D20(int p);
extern void func_0AF290(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_0AF2E0(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_0020FCD0[idx];
    int v1 = func_0A5CF0(p);
    int v2 = func_0A5D20(D_0020FCD0[idx]);
    func_0AF290(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
