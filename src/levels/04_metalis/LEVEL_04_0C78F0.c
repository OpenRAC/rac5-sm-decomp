/* LEVEL_04:0x0C78F0 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_00218318;
extern int D_0021831C;
extern int D_00218328;
extern int *D_00218388[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_002183A8;
extern W D_002183AC;
extern int D_00343808;
extern int func_024B48(int x, int y);
extern Pr *func_0242F0(int x, int y);
extern int func_0C66D0(int a, int b);

void func_0C78F0(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_00218388[D_0021831C][D_00218318];
    if (x == 0 || func_024B48(x, -1) == 0) {
        D_002183A8.v = 0;
        D_002183AC.v = 0;
    } else if (x != D_00218328) {
        p = func_0242F0(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_002183A8.v = p->a;
                D_002183AC.v = p->b;
            }
            if (func_0C66D0(D_002183A8.v, D_002183AC.v) == 0)
                D_00343808 = 0;
        }
    }
}
