/* LEVEL_08:0x0CD000 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_00247D18;
extern int D_00247D1C;
extern int D_00247D28;
extern int *D_00247D88[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_00247DA8;
extern W D_00247DAC;
extern int D_00378288;
extern int func_025748(int x, int y);
extern Pr *func_024EF0(int x, int y);
extern int func_0CBDE0(int a, int b);

void func_0CD000(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_00247D88[D_00247D1C][D_00247D18];
    if (x == 0 || func_025748(x, -1) == 0) {
        D_00247DA8.v = 0;
        D_00247DAC.v = 0;
    } else if (x != D_00247D28) {
        p = func_024EF0(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_00247DA8.v = p->a;
                D_00247DAC.v = p->b;
            }
            if (func_0CBDE0(D_00247DA8.v, D_00247DAC.v) == 0)
                D_00378288 = 0;
        }
    }
}
