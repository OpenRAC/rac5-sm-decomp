/* LEVEL_06:0x0CC560 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_001F34DC;
extern Dd D_00319898;
extern void func_0CC0E0(void);
extern void func_0CC4F0(void);
extern void func_0CC100(void);
extern Pn *func_0D3B20(Dd *d);
extern int func_0235A8(int a, int b);
extern Q *func_022D30(int a, int b);
extern int func_0D4F58(Dd *d);
extern int func_12A740(unsigned int idx, unsigned int val);
extern void func_0CD168(void);

void func_0CC560(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_001F34DC) {
    case 0:
        break;
    case 1:
        func_0CC0E0();
        break;
    case 2:
        func_0CC4F0();
        break;
    case 3:
        func_0CC100();
        break;
    }
    p = func_0D3B20(&D_00319898);
    if (p != 0) {
        t = D_00319898.f14;
        s = func_0235A8(p->f24, -1);
        q = func_022D30(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0D4F58(&D_00319898) == 0)
                    func_12A740(0, w);
            }
        }
    }
    func_0CD168();
}
