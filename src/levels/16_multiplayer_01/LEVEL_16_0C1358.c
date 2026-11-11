/* LEVEL_16:0x0C1358 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_001B248C;
extern Dd D_0027AB98;
extern void func_0C0ED8(void);
extern void func_0C12E8(void);
extern void func_0C0EF8(void);
extern Pn *func_0C8918(Dd *d);
extern int func_022868(int a, int b);
extern Q *func_0220C8(int a, int b);
extern int func_0C9D50(Dd *d);
extern int func_110DE0(unsigned int idx, unsigned int val);
extern void func_0C1F60(void);

void func_0C1358(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_001B248C) {
    case 0:
        break;
    case 1:
        func_0C0ED8();
        break;
    case 2:
        func_0C12E8();
        break;
    case 3:
        func_0C0EF8();
        break;
    }
    p = func_0C8918(&D_0027AB98);
    if (p != 0) {
        t = D_0027AB98.f14;
        s = func_022868(p->f24, -1);
        q = func_0220C8(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0C9D50(&D_0027AB98) == 0)
                    func_110DE0(0, w);
            }
        }
    }
    func_0C1F60();
}
