/* LEVEL_22:0x0B0588 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_0015E1D8;
extern int D_0015E1DC;
extern int D_0015E1E8;
extern int *D_0015E248[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_0015E268;
extern W D_0015E26C;
extern int D_0027EBC8;
extern int func_01FD00(int x, int y);
extern Pr *func_01F4A8(int x, int y);
extern int func_0AF368(int a, int b);

void func_0B0588(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_0015E248[D_0015E1DC][D_0015E1D8];
    if (x == 0 || func_01FD00(x, -1) == 0) {
        D_0015E268.v = 0;
        D_0015E26C.v = 0;
    } else if (x != D_0015E1E8) {
        p = func_01F4A8(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_0015E268.v = p->a;
                D_0015E26C.v = p->b;
            }
            if (func_0AF368(D_0015E268.v, D_0015E26C.v) == 0)
                D_0027EBC8 = 0;
        }
    }
}
