/* LEVEL_20:0x0860C8 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_0010C070[];
extern int func_07D558(int p);
extern int func_07D588(int p);
extern void func_086078(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_0860C8(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_0010C070[idx];
    int v1 = func_07D558(p);
    int v2 = func_07D588(D_0010C070[idx]);
    func_086078(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
