/* LEVEL_10:0x0C3428 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_00207E58;
extern int D_00207E5C;
extern int D_00207E68;
extern int *D_00207EC8[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_00207EE8;
extern W D_00207EEC;
extern int D_00332408;
extern int func_024830(int x, int y);
extern Pr *func_023FD8(int x, int y);
extern int func_0C2208(int a, int b);

void func_0C3428(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_00207EC8[D_00207E5C][D_00207E58];
    if (x == 0 || func_024830(x, -1) == 0) {
        D_00207EE8.v = 0;
        D_00207EEC.v = 0;
    } else if (x != D_00207E68) {
        p = func_023FD8(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_00207EE8.v = p->a;
                D_00207EEC.v = p->b;
            }
            if (func_0C2208(D_00207EE8.v, D_00207EEC.v) == 0)
                D_00332408 = 0;
        }
    }
}
