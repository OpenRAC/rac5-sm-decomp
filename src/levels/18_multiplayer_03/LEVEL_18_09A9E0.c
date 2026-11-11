/* LEVEL_18:0x09A9E0 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_001AAE10[];
extern int func_091E70(int p);
extern int func_091EA0(int p);
extern void func_09A990(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_09A9E0(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_001AAE10[idx];
    int v1 = func_091E70(p);
    int v2 = func_091EA0(D_001AAE10[idx]);
    func_09A990(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
