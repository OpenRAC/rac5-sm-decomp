/* LEVEL_21:0x0A2720 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_00153AD8;
extern int D_00153ADC;
extern int D_00153AE8;
extern int *D_00153B48[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_00153B68;
extern W D_00153B6C;
extern int D_00240848;
extern int func_01F230(int x, int y);
extern Pr *func_01E9D8(int x, int y);
extern int func_0A1500(int a, int b);

void func_0A2720(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_00153B48[D_00153ADC][D_00153AD8];
    if (x == 0 || func_01F230(x, -1) == 0) {
        D_00153B68.v = 0;
        D_00153B6C.v = 0;
    } else if (x != D_00153AE8) {
        p = func_01E9D8(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_00153B68.v = p->a;
                D_00153B6C.v = p->b;
            }
            if (func_0A1500(D_00153B68.v, D_00153B6C.v) == 0)
                D_00240848 = 0;
        }
    }
}
