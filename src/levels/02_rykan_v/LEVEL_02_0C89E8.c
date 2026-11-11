/* LEVEL_02:0x0C89E8 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_00213E18;
extern int D_00213E1C;
extern int D_00213E28;
extern int *D_00213E88[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_00213EA8;
extern W D_00213EAC;
extern int D_00340508;
extern int func_025828(int x, int y);
extern Pr *func_024FD0(int x, int y);
extern int func_0C77C8(int a, int b);

void func_0C89E8(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_00213E88[D_00213E1C][D_00213E18];
    if (x == 0 || func_025828(x, -1) == 0) {
        D_00213EA8.v = 0;
        D_00213EAC.v = 0;
    } else if (x != D_00213E28) {
        p = func_024FD0(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_00213EA8.v = p->a;
                D_00213EAC.v = p->b;
            }
            if (func_0C77C8(D_00213EA8.v, D_00213EAC.v) == 0)
                D_00340508 = 0;
        }
    }
}
