/* LEVEL_04:0x0D74F8 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_0021DA9C;
extern Dd D_00347318;
extern void func_0D7078(void);
extern void func_0D7488(void);
extern void func_0D7098(void);
extern Pn *func_0DEAE0(Dd *d);
extern int func_024B20(int a, int b);
extern Q *func_0242A8(int a, int b);
extern int func_0DFF18(Dd *d);
extern int func_1404F0(unsigned int idx, unsigned int val);
extern void func_0D8100(void);

void func_0D74F8(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_0021DA9C) {
    case 0:
        break;
    case 1:
        func_0D7078();
        break;
    case 2:
        func_0D7488();
        break;
    case 3:
        func_0D7098();
        break;
    }
    p = func_0DEAE0(&D_00347318);
    if (p != 0) {
        t = D_00347318.f14;
        s = func_024B20(p->f24, -1);
        q = func_0242A8(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0DFF18(&D_00347318) == 0)
                    func_1404F0(0, w);
            }
        }
    }
    func_0D8100();
}
