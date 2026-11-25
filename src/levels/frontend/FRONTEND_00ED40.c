/* FRONTEND:0x00ED40 -- placement copy of LEVEL_01_0AD2E0.c: looks up an entry by index and forwards its two derived values to the worker. */
extern int D_0002F9D0[];
extern unsigned int func_008AF8(int p);
extern unsigned int func_008B28(int p);
extern void func_00ECF0(int idx, int a, int b, int c, float x, float y, int d, int e, int f, int g, int h, float z);

void func_00ED40(int idx, short a, short b, int c, int d, int e, int f, float x, float y, float z)
{
    int p = D_0002F9D0[idx];
    unsigned int v1 = func_008AF8(p);
    unsigned int v2 = func_008B28(D_0002F9D0[idx]);
    func_00ECF0(idx, a, b, v1, x, y, v2, c, d, e, f, z);
}
