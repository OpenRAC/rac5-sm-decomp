/* LEVEL_05:0x0C0680 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_001EE1D8;
extern int D_001EE1DC;
extern int D_001EE1E8;
extern int *D_001EE248[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_001EE268;
extern W D_001EE26C;
extern int D_00314EC8;
extern int func_023E60(int x, int y);
extern Pr *func_023608(int x, int y);
extern int func_0BF460(int a, int b);

void func_0C0680(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_001EE248[D_001EE1DC][D_001EE1D8];
    if (x == 0 || func_023E60(x, -1) == 0) {
        D_001EE268.v = 0;
        D_001EE26C.v = 0;
    } else if (x != D_001EE1E8) {
        p = func_023608(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_001EE268.v = p->a;
                D_001EE26C.v = p->b;
            }
            if (func_0BF460(D_001EE268.v, D_001EE26C.v) == 0)
                D_00314EC8 = 0;
        }
    }
}
