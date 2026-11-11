/* LEVEL_24:0x0CB5A0 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_001D525C;
extern Dd D_002F89D8;
extern void func_0CB120(void);
extern void func_0CB530(void);
extern void func_0CB140(void);
extern Pn *func_0D2B88(Dd *d);
extern int func_022C78(int a, int b);
extern Q *func_022400(int a, int b);
extern int func_0D3FC0(Dd *d);
extern int func_129B70(unsigned int idx, unsigned int val);
extern void func_0CC1A8(void);

void func_0CB5A0(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_001D525C) {
    case 0:
        break;
    case 1:
        func_0CB120();
        break;
    case 2:
        func_0CB530();
        break;
    case 3:
        func_0CB140();
        break;
    }
    p = func_0D2B88(&D_002F89D8);
    if (p != 0) {
        t = D_002F89D8.f14;
        s = func_022C78(p->f24, -1);
        q = func_022400(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0D3FC0(&D_002F89D8) == 0)
                    func_129B70(0, w);
            }
        }
    }
    func_0CC1A8();
}
