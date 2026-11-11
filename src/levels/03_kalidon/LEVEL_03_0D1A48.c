/* LEVEL_03:0x0D1A48 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_0021CC5C;
extern Dd D_00347998;
extern void func_0D15C8(void);
extern void func_0D19D8(void);
extern void func_0D15E8(void);
extern Pn *func_0D9008(Dd *d);
extern int func_024D70(int a, int b);
extern Q *func_0244F8(int a, int b);
extern int func_0DA440(Dd *d);
extern int func_132438(unsigned int idx, unsigned int val);
extern void func_0D2650(void);

void func_0D1A48(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_0021CC5C) {
    case 0:
        break;
    case 1:
        func_0D15C8();
        break;
    case 2:
        func_0D19D8();
        break;
    case 3:
        func_0D15E8();
        break;
    }
    p = func_0D9008(&D_00347998);
    if (p != 0) {
        t = D_00347998.f14;
        s = func_024D70(p->f24, -1);
        q = func_0244F8(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0DA440(&D_00347998) == 0)
                    func_132438(0, w);
            }
        }
    }
    func_0D2650();
}
