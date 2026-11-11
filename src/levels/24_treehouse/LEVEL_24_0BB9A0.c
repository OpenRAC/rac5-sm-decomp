/* LEVEL_24:0x0BB9A0 -- placement copy of LEVEL_01_0C20D8.c: resolves the current table entry and updates the stored pair. */
extern int D_001CFAD8;
extern int D_001CFADC;
extern int D_001CFAE8;
extern int *D_001CFB48[][4];
typedef struct Pr { int a; int b; } Pr;
typedef struct W { int v; } W;
extern W D_001CFB68;
extern W D_001CFB6C;
extern int D_002F4EC8;
extern int func_022CA0(int x, int y);
extern Pr *func_022448(int x, int y);
extern int func_0BA780(int a, int b);

void func_0BB9A0(int x)
{
    Pr *p;

    if (x == 0)
        x = (int)D_001CFB48[D_001CFADC][D_001CFAD8];
    if (x == 0 || func_022CA0(x, -1) == 0) {
        D_001CFB68.v = 0;
        D_001CFB6C.v = 0;
    } else if (x != D_001CFAE8) {
        p = func_022448(x, -1);
        if (p != 0) {
            if (x != 0x16) {
                D_001CFB68.v = p->a;
                D_001CFB6C.v = p->b;
            }
            if (func_0BA780(D_001CFB68.v, D_001CFB6C.v) == 0)
                D_002F4EC8 = 0;
        }
    }
}
