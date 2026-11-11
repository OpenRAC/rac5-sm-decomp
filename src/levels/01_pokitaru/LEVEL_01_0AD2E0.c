/* LEVEL_01:0x0AD2E0 -- looks up an entry by index and forwards its two derived values to the worker. */
extern int D_001FB9D0[];
extern int func_0A3CF0(int p);
extern int func_0A3D20(int p);
extern void func_0AD290(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_0AD2E0(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_001FB9D0[idx];
    int v1 = func_0A3CF0(p);
    int v2 = func_0A3D20(D_001FB9D0[idx]);
    func_0AD290(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
