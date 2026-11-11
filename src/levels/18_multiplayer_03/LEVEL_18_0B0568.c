/* LEVEL_18:0x0B0568 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_001AE350;
extern int D_001AE354;
extern int D_001AE360;
extern int *D_001AE3C0[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_001AE3E0;
extern W D_001AE3E4;
extern int D_002772C8;
extern int func_021ED8(int x, int y);
extern Pr *func_021758(int x, int y);
extern int func_0AF348(int a, int b);

void func_0B0568(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_001AE3C0[D_001AE354][D_001AE350];
    if (x == 0 || func_021ED8(x, -1) == 0) {
        D_001AE3E0.v = 0;
        D_001AE3E4.v = 0;
    } else if (x != D_001AE360) {
        p = func_021758(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_001AE3E0.v = p->a;
                D_001AE3E4.v = p->b;
            }
            if (func_0AF348(D_001AE3E0.v, D_001AE3E4.v) == 0)
                D_002772C8 = 0;
        }
    }
}
