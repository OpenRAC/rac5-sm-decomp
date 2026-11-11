/* LEVEL_07:0x0D3CC0 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_002188DC;
extern Dd D_00342418;
extern void func_0D3840(void);
extern void func_0D3C50(void);
extern void func_0D3860(void);
extern Pn *func_0DB280(Dd *d);
extern int func_025468(int a, int b);
extern Q *func_024BF0(int a, int b);
extern int func_0DC6B8(Dd *d);
extern int func_137070(unsigned int idx, unsigned int val);
extern void func_0D48C8(void);

void func_0D3CC0(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_002188DC) {
    case 0:
        break;
    case 1:
        func_0D3840();
        break;
    case 2:
        func_0D3C50();
        break;
    case 3:
        func_0D3860();
        break;
    }
    p = func_0DB280(&D_00342418);
    if (p != 0) {
        t = D_00342418.f14;
        s = func_025468(p->f24, -1);
        q = func_024BF0(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0DC6B8(&D_00342418) == 0)
                    func_137070(0, w);
            }
        }
    }
    func_0D48C8();
}
