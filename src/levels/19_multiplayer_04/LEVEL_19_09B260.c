/* LEVEL_19:0x09B260 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_001AAB10[];
extern int func_0926F0(int p);
extern int func_092720(int p);
extern void func_09B210(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_09B260(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_001AAB10[idx];
    int v1 = func_0926F0(p);
    int v2 = func_092720(D_001AAB10[idx]);
    func_09B210(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
