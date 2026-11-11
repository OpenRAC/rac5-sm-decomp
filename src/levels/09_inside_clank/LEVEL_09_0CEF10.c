/* LEVEL_09:0x0CEF10 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_001EE3DC;
extern Dd D_00314298;
extern void func_0CEA90(void);
extern void func_0CEEA0(void);
extern void func_0CEAB0(void);
extern Pn *func_0D64D0(Dd *d);
extern int func_024198(int a, int b);
extern Q *func_023920(int a, int b);
extern int func_0D7908(Dd *d);
extern int func_12D008(unsigned int idx, unsigned int val);
extern void func_0CFB18(void);

void func_0CEF10(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_001EE3DC) {
    case 0:
        break;
    case 1:
        func_0CEA90();
        break;
    case 2:
        func_0CEEA0();
        break;
    case 3:
        func_0CEAB0();
        break;
    }
    p = func_0D64D0(&D_00314298);
    if (p != 0) {
        t = D_00314298.f14;
        s = func_024198(p->f24, -1);
        q = func_023920(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0D7908(&D_00314298) == 0)
                    func_12D008(0, w);
            }
        }
    }
    func_0CFB18();
}
