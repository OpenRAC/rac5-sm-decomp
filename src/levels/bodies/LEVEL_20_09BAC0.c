/* LEVEL_20:0x09BAC0 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_0010F5B0;
extern int D_0010F5B4;
extern int D_0010F5C0;
extern int *D_0010F620[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_0010F640;
extern W D_0010F644;
extern int D_0019A788;
extern int func_01F590(int x, int y);
extern Pr *func_01EE10(int x, int y);
extern int func_09A8A0(int a, int b);

void func_09BAC0(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_0010F620[D_0010F5B4][D_0010F5B0];
    if (x == 0 || func_01F590(x, -1) == 0) {
        D_0010F640.v = 0;
        D_0010F644.v = 0;
    } else if (x != D_0010F5C0) {
        p = func_01EE10(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_0010F640.v = p->a;
                D_0010F644.v = p->b;
            }
            if (func_09A8A0(D_0010F640.v, D_0010F644.v) == 0)
                D_0019A788 = 0;
        }
    }
}
