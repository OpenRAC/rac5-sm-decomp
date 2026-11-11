/* LEVEL_05:0x0D0208 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_001F395C;
extern Dd D_003189D8;
extern void func_0CFD88(void);
extern void func_0D0198(void);
extern void func_0CFDA8(void);
extern Pn *func_0D77C8(Dd *d);
extern int func_023E38(int a, int b);
extern Q *func_0235C0(int a, int b);
extern int func_0D8C00(Dd *d);
extern int func_12F9E8(unsigned int idx, unsigned int val);
extern void func_0D0E10(void);

void func_0D0208(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_001F395C) {
    case 0:
        break;
    case 1:
        func_0CFD88();
        break;
    case 2:
        func_0D0198();
        break;
    case 3:
        func_0CFDA8();
        break;
    }
    p = func_0D77C8(&D_003189D8);
    if (p != 0) {
        t = D_003189D8.f14;
        s = func_023E38(p->f24, -1);
        q = func_0235C0(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0D8C00(&D_003189D8) == 0)
                    func_12F9E8(0, w);
            }
        }
    }
    func_0D0E10();
}
