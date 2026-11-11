/* LEVEL_22:0x0C01A0 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_0016395C;
extern Dd D_002826D8;
extern void func_0BFD20(void);
extern void func_0C0130(void);
extern void func_0BFD40(void);
extern Pn *func_0C7760(Dd *d);
extern int func_01FCD8(int a, int b);
extern Q *func_01F460(int a, int b);
extern int func_0C8B98(Dd *d);
extern int func_10B540(unsigned int idx, unsigned int val);
extern void func_0C0DA8(void);

void func_0C01A0(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_0016395C) {
    case 0:
        break;
    case 1:
        func_0BFD20();
        break;
    case 2:
        func_0C0130();
        break;
    case 3:
        func_0BFD40();
        break;
    }
    p = func_0C7760(&D_002826D8);
    if (p != 0) {
        t = D_002826D8.f14;
        s = func_01FCD8(p->f24, -1);
        q = func_01F460(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0C8B98(&D_002826D8) == 0)
                    func_10B540(0, w);
            }
        }
    }
    func_0C0DA8();
}
