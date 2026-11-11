/* LEVEL_16:0x09B9D0 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_001A9990[];
extern int func_092E60(int p);
extern int func_092E90(int p);
extern void func_09B980(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_09B9D0(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_001A9990[idx];
    int v1 = func_092E60(p);
    int v2 = func_092E90(D_001A9990[idx]);
    func_09B980(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
