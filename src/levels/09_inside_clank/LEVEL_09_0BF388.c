/* LEVEL_09:0x0BF388 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_001E8C58;
extern int D_001E8C5C;
extern int D_001E8C68;
extern int *D_001E8CC8[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_001E8CE8;
extern W D_001E8CEC;
extern int D_00310788;
extern int func_0241C0(int x, int y);
extern Pr *func_023968(int x, int y);
extern int func_0BE168(int a, int b);

void func_0BF388(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_001E8CC8[D_001E8C5C][D_001E8C58];
    if (x == 0 || func_0241C0(x, -1) == 0) {
        D_001E8CE8.v = 0;
        D_001E8CEC.v = 0;
    } else if (x != D_001E8C68) {
        p = func_023968(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_001E8CE8.v = p->a;
                D_001E8CEC.v = p->b;
            }
            if (func_0BE168(D_001E8CE8.v, D_001E8CEC.v) == 0)
                D_00310788 = 0;
        }
    }
}
