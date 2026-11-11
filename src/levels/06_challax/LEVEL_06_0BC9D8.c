/* LEVEL_06:0x0BC9D8 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_001EDD58;
extern int D_001EDD5C;
extern int D_001EDD68;
extern int *D_001EDDC8[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_001EDDE8;
extern W D_001EDDEC;
extern int D_00315D88;
extern int func_0235D0(int x, int y);
extern Pr *func_022D78(int x, int y);
extern int func_0BB7B8(int a, int b);

void func_0BC9D8(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_001EDDC8[D_001EDD5C][D_001EDD58];
    if (x == 0 || func_0235D0(x, -1) == 0) {
        D_001EDDE8.v = 0;
        D_001EDDEC.v = 0;
    } else if (x != D_001EDD68) {
        p = func_022D78(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_001EDDE8.v = p->a;
                D_001EDDEC.v = p->b;
            }
            if (func_0BB7B8(D_001EDDE8.v, D_001EDDEC.v) == 0)
                D_00315D88 = 0;
        }
    }
}
