/* LEVEL_05:0x0AB8A0 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_001EAD50[];
extern int func_0A22B0(int p);
extern int func_0A22E0(int p);
extern void func_0AB850(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_0AB8A0(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_001EAD50[idx];
    int v1 = func_0A22B0(p);
    int v2 = func_0A22E0(D_001EAD50[idx]);
    func_0AB850(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
