/* LEVEL_19:0x0B0E68 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_001AE050;
extern int D_001AE054;
extern int D_001AE060;
extern int *D_001AE0C0[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_001AE0E0;
extern W D_001AE0E4;
extern int D_002770C8;
extern int func_0224D0(int x, int y);
extern Pr *func_021D50(int x, int y);
extern int func_0AFC48(int a, int b);

void func_0B0E68(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_001AE0C0[D_001AE054][D_001AE050];
    if (x == 0 || func_0224D0(x, -1) == 0) {
        D_001AE0E0.v = 0;
        D_001AE0E4.v = 0;
    } else if (x != D_001AE060) {
        p = func_021D50(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_001AE0E0.v = p->a;
                D_001AE0E4.v = p->b;
            }
            if (func_0AFC48(D_001AE0E0.v, D_001AE0E4.v) == 0)
                D_002770C8 = 0;
        }
    }
}
