/* LEVEL_02:0x0D85F0 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_0021959C;
extern Dd D_00344018;
extern void func_0D8170(void);
extern void func_0D8580(void);
extern void func_0D8190(void);
extern Pn *func_0DFBB0(Dd *d);
extern int func_025800(int a, int b);
extern Q *func_024F88(int a, int b);
extern int func_0E0FE8(Dd *d);
extern int func_13A420(unsigned int idx, unsigned int val);
extern void func_0D91F8(void);

void func_0D85F0(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_0021959C) {
    case 0:
        break;
    case 1:
        func_0D8170();
        break;
    case 2:
        func_0D8580();
        break;
    case 3:
        func_0D8190();
        break;
    }
    p = func_0DFBB0(&D_00344018);
    if (p != 0) {
        t = D_00344018.f14;
        s = func_025800(p->f24, -1);
        q = func_024F88(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0E0FE8(&D_00344018) == 0)
                    func_13A420(0, w);
            }
        }
    }
    func_0D91F8();
}
