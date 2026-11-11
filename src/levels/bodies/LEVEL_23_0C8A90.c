/* LEVEL_23:0x0C8A90 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
typedef struct Dd {
    char pad0[0x14];
    int f14;
} Dd;
typedef struct Pn {
    char pad0[0x24];
    int f24;
} Pn;
typedef struct Q {
    char pad0[0x30];
    int *tbl[1];
} Q;
extern int D_001D79DC;
extern Dd D_002FDF58;
extern void func_0C8610(void);
extern void func_0C8A20(void);
extern void func_0C8630(void);
extern Pn *func_0D0050(Dd *d);
extern int func_022F40(int a, int b);
extern Q *func_0226C8(int a, int b);
extern int func_0D1488(Dd *d);
extern int func_1257E8(unsigned int idx, unsigned int val);
extern void func_0C9698(void);

void func_0C8A90(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_001D79DC) {
    case 0:
        break;
    case 1:
        func_0C8610();
        break;
    case 2:
        func_0C8A20();
        break;
    case 3:
        func_0C8630();
        break;
    }
    p = func_0D0050(&D_002FDF58);
    if (p != 0) {
        t = D_002FDF58.f14;
        s = func_022F40(p->f24, -1);
        q = func_0226C8(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0D1488(&D_002FDF58) == 0)
                    func_1257E8(0, w);
            }
        }
    }
    func_0C9698();
}
