/* LEVEL_18:0x0C0330 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_001B390C;
extern Dd D_0027AF18;
extern void func_0BFEB0(void);
extern void func_0C02C0(void);
extern void func_0BFED0(void);
extern Pn *func_0C78F0(Dd *d);
extern int func_021EB0(int a, int b);
extern Q *func_021710(int a, int b);
extern int func_0C8D28(Dd *d);
extern int func_10FA90(unsigned int idx, unsigned int val);
extern void func_0C0F38(void);

void func_0C0330(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_001B390C) {
    case 0:
        break;
    case 1:
        func_0BFEB0();
        break;
    case 2:
        func_0C02C0();
        break;
    case 3:
        func_0BFED0();
        break;
    }
    p = func_0C78F0(&D_0027AF18);
    if (p != 0) {
        t = D_0027AF18.f14;
        s = func_021EB0(p->f24, -1);
        q = func_021710(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0C8D28(&D_0027AF18) == 0)
                    func_10FA90(0, w);
            }
        }
    }
    func_0C0F38();
}
