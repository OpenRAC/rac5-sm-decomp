/* LEVEL_19:0x0C0C30 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_001B360C;
extern Dd D_0027AD18;
extern void func_0C07B0(void);
extern void func_0C0BC0(void);
extern void func_0C07D0(void);
extern Pn *func_0C81F0(Dd *d);
extern int func_0224A8(int a, int b);
extern Q *func_021D08(int a, int b);
extern int func_0C9628(Dd *d);
extern int func_111480(unsigned int idx, unsigned int val);
extern void func_0C1838(void);

void func_0C0C30(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_001B360C) {
    case 0:
        break;
    case 1:
        func_0C07B0();
        break;
    case 2:
        func_0C0BC0();
        break;
    case 3:
        func_0C07D0();
        break;
    }
    p = func_0C81F0(&D_0027AD18);
    if (p != 0) {
        t = D_0027AD18.f14;
        s = func_0224A8(p->f24, -1);
        q = func_021D08(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0C9628(&D_0027AD18) == 0)
                    func_111480(0, w);
            }
        }
    }
    func_0C1838();
}
