/* LEVEL_21:0x0B22A0 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_0015925C;
extern Dd D_00244358;
extern void func_0B1E20(void);
extern void func_0B2230(void);
extern void func_0B1E40(void);
extern Pn *func_0B9860(Dd *d);
extern int func_01F208(int a, int b);
extern Q *func_01E990(int a, int b);
extern int func_0BAC98(Dd *d);
extern int func_0F2F38(unsigned int idx, unsigned int val);
extern void func_0B2EA8(void);

void func_0B22A0(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_0015925C) {
    case 0:
        break;
    case 1:
        func_0B1E20();
        break;
    case 2:
        func_0B2230();
        break;
    case 3:
        func_0B1E40();
        break;
    }
    p = func_0B9860(&D_00244358);
    if (p != 0) {
        t = D_00244358.f14;
        s = func_01F208(p->f24, -1);
        q = func_01E990(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0BAC98(&D_00244358) == 0)
                    func_0F2F38(0, w);
            }
        }
    }
    func_0B2EA8();
}
