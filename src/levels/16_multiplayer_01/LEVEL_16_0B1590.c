/* LEVEL_16:0x0B1590 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_001ACED0;
extern int D_001ACED4;
extern int D_001ACEE0;
extern int *D_001ACF40[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_001ACF60;
extern W D_001ACF64;
extern int D_00276F48;
extern int func_022890(int x, int y);
extern Pr *func_022110(int x, int y);
extern int func_0B0370(int a, int b);

void func_0B1590(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_001ACF40[D_001ACED4][D_001ACED0];
    if (x == 0 || func_022890(x, -1) == 0) {
        D_001ACF60.v = 0;
        D_001ACF64.v = 0;
    } else if (x != D_001ACEE0) {
        p = func_022110(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_001ACF60.v = p->a;
                D_001ACF64.v = p->b;
            }
            if (func_0B0370(D_001ACF60.v, D_001ACF64.v) == 0)
                D_00276F48 = 0;
        }
    }
}
