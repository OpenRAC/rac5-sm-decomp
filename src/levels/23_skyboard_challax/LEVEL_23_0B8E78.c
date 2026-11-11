/* LEVEL_23:0x0B8E78 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_001D2258;
extern int D_001D225C;
extern int D_001D2268;
extern int *D_001D22C8[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_001D22E8;
extern W D_001D22EC;
extern int D_002FA448;
extern int func_022F68(int x, int y);
extern Pr *func_022710(int x, int y);
extern int func_0B7C58(int a, int b);

void func_0B8E78(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_001D22C8[D_001D225C][D_001D2258];
    if (x == 0 || func_022F68(x, -1) == 0) {
        D_001D22E8.v = 0;
        D_001D22EC.v = 0;
    } else if (x != D_001D2268) {
        p = func_022710(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_001D22E8.v = p->a;
                D_001D22EC.v = p->b;
            }
            if (func_0B7C58(D_001D22E8.v, D_001D22EC.v) == 0)
                D_002FA448 = 0;
        }
    }
}
