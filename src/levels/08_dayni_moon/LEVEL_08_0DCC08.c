/* LEVEL_08:0x0DCC08 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_0024D49C;
extern Dd D_0037BD98;
extern void func_0DC788(void);
extern void func_0DCB98(void);
extern void func_0DC7A8(void);
extern Pn *func_0E41F0(Dd *d);
extern int func_025720(int a, int b);
extern Q *func_024EA8(int a, int b);
extern int func_0E5628(Dd *d);
extern int func_1455A8(unsigned int idx, unsigned int val);
extern void func_0DD810(void);

void func_0DCC08(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_0024D49C) {
    case 0:
        break;
    case 1:
        func_0DC788();
        break;
    case 2:
        func_0DCB98();
        break;
    case 3:
        func_0DC7A8();
        break;
    }
    p = func_0E41F0(&D_0037BD98);
    if (p != 0) {
        t = D_0037BD98.f14;
        s = func_025720(p->f24, -1);
        q = func_024EA8(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0E5628(&D_0037BD98) == 0)
                    func_1455A8(0, w);
            }
        }
    }
    func_0DD810();
}
