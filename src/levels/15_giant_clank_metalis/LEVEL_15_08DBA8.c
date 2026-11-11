/* LEVEL_15:0x08DBA8 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_00150650[];
extern int func_0845E8(int p);
extern int func_084618(int p);
extern void func_08DB58(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_08DBA8(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_00150650[idx];
    int v1 = func_0845E8(p);
    int v2 = func_084618(D_00150650[idx]);
    func_08DB58(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
