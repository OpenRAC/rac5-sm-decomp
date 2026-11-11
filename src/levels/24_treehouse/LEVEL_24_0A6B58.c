/* LEVEL_24:0x0A6B58 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_001CC650[];
extern int func_09D568(int p);
extern int func_09D598(int p);
extern void func_0A6B08(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_0A6B58(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_001CC650[idx];
    int v1 = func_09D568(p);
    int v2 = func_09D598(D_001CC650[idx]);
    func_0A6B08(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
