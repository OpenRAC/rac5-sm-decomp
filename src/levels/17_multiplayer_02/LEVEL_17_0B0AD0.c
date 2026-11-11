/* LEVEL_17:0x0B0AD0 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_001A04D0;
extern int D_001A04D4;
extern int D_001A04E0;
extern int *D_001A0540[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_001A0560;
extern W D_001A0564;
extern int D_00268248;
extern int func_022210(int x, int y);
extern Pr *func_021A90(int x, int y);
extern int func_0AF8B0(int a, int b);

void func_0B0AD0(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_001A0540[D_001A04D4][D_001A04D0];
    if (x == 0 || func_022210(x, -1) == 0) {
        D_001A0560.v = 0;
        D_001A0564.v = 0;
    } else if (x != D_001A04E0) {
        p = func_021A90(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_001A0560.v = p->a;
                D_001A0564.v = p->b;
            }
            if (func_0AF8B0(D_001A0560.v, D_001A0564.v) == 0)
                D_00268248 = 0;
        }
    }
}
