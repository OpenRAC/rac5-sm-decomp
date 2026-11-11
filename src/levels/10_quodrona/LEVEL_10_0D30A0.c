/* LEVEL_10:0x0D30A0 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_0020D5DC;
extern Dd D_00335F18;
extern void func_0D2C20(void);
extern void func_0D3030(void);
extern void func_0D2C40(void);
extern Pn *func_0DA660(Dd *d);
extern int func_024808(int a, int b);
extern Q *func_023F90(int a, int b);
extern int func_0DBA98(Dd *d);
extern int func_131EF0(unsigned int idx, unsigned int val);
extern void func_0D3CA8(void);

void func_0D30A0(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_0020D5DC) {
    case 0:
        break;
    case 1:
        func_0D2C20();
        break;
    case 2:
        func_0D3030();
        break;
    case 3:
        func_0D2C40();
        break;
    }
    p = func_0DA660(&D_00335F18);
    if (p != 0) {
        t = D_00335F18.f14;
        s = func_024808(p->f24, -1);
        q = func_023F90(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0DBA98(&D_00335F18) == 0)
                    func_131EF0(0, w);
            }
        }
    }
    func_0D3CA8();
}
