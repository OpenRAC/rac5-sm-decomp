/* LEVEL_07:0x0C4138 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_00213158;
extern int D_0021315C;
extern int D_00213168;
extern int *D_002131C8[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_002131E8;
extern W D_002131EC;
extern int D_0033E908;
extern int func_025490(int x, int y);
extern Pr *func_024C38(int x, int y);
extern int func_0C2F18(int a, int b);

void func_0C4138(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_002131C8[D_0021315C][D_00213158];
    if (x == 0 || func_025490(x, -1) == 0) {
        D_002131E8.v = 0;
        D_002131EC.v = 0;
    } else if (x != D_00213168) {
        p = func_024C38(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_002131E8.v = p->a;
                D_002131EC.v = p->b;
            }
            if (func_0C2F18(D_002131E8.v, D_002131EC.v) == 0)
                D_0033E908 = 0;
        }
    }
}
