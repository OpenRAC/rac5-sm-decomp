/* LEVEL_17:0x0C0898 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_001A5A8C;
extern Dd D_0026BE98;
extern void func_0C0418(void);
extern void func_0C0828(void);
extern void func_0C0438(void);
extern Pn *func_0C7E58(Dd *d);
extern int func_0221E8(int a, int b);
extern Q *func_021A48(int a, int b);
extern int func_0C9290(Dd *d);
extern int func_110358(unsigned int idx, unsigned int val);
extern void func_0C14A0(void);

void func_0C0898(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_001A5A8C) {
    case 0:
        break;
    case 1:
        func_0C0418();
        break;
    case 2:
        func_0C0828();
        break;
    case 3:
        func_0C0438();
        break;
    }
    p = func_0C7E58(&D_0026BE98);
    if (p != 0) {
        t = D_0026BE98.f14;
        s = func_0221E8(p->f24, -1);
        q = func_021A48(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0C9290(&D_0026BE98) == 0)
                    func_110358(0, w);
            }
        }
    }
    func_0C14A0();
}
