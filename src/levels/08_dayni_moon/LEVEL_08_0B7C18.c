/* LEVEL_08:0x0B7C18 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_00244890[];
extern int func_0AE5E8(int p);
extern int func_0AE618(int p);
extern void func_0B7BC8(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_0B7C18(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_00244890[idx];
    int v1 = func_0AE5E8(p);
    int v2 = func_0AE618(D_00244890[idx]);
    func_0B7BC8(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
