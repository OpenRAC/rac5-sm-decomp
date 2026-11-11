/* LEVEL_03:0x0C1EC0 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_002174D8;
extern int D_002174DC;
extern int D_002174E8;
extern int *D_00217548[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_00217568;
extern W D_0021756C;
extern int D_00343E88;
extern int func_024D98(int x, int y);
extern Pr *func_024540(int x, int y);
extern int func_0C0CA0(int a, int b);

void func_0C1EC0(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_00217548[D_002174DC][D_002174D8];
    if (x == 0 || func_024D98(x, -1) == 0) {
        D_00217568.v = 0;
        D_0021756C.v = 0;
    } else if (x != D_002174E8) {
        p = func_024540(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_00217568.v = p->a;
                D_0021756C.v = p->b;
            }
            if (func_0C0CA0(D_00217568.v, D_0021756C.v) == 0)
                D_00343E88 = 0;
        }
    }
}
