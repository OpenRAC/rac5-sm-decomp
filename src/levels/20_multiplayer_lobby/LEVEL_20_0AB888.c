/* LEVEL_20:0x0AB888 -- placement copy of LEVEL_01_0D1C60.c: runs the current mode's step, then applies the selected entry when valid. */
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
extern int D_00114B6C;
extern Dd D_0019E3D8;
extern void func_0AB408(void);
extern void func_0AB818(void);
extern void func_0AB428(void);
extern Pn *func_0B2E48(Dd *d);
extern int func_01F568(int a, int b);
extern Q *func_01EDC8(int a, int b);
extern int func_0B4280(Dd *d);
extern int func_0E3BC8(unsigned int idx, unsigned int val);
extern void func_0AC490(void);

void func_0AB888(void)
{
    Pn *p;
    int *v;
    int t;
    int s;
    Q *q;

    switch (D_00114B6C) {
    case 0:
        break;
    case 1:
        func_0AB408();
        break;
    case 2:
        func_0AB818();
        break;
    case 3:
        func_0AB428();
        break;
    }
    p = func_0B2E48(&D_0019E3D8);
    if (p != 0) {
        t = D_0019E3D8.f14;
        s = func_01F568(p->f24, -1);
        q = func_01EDC8(p->f24, -1);
        v = q != 0 ? q->tbl[t] : 0;
        if (v != 0) {
            int w = s != 0 ? v[1] : v[0];
            if (w != 0) {
                if (func_0B4280(&D_0019E3D8) == 0)
                    func_0E3BC8(0, w);
            }
        }
    }
    func_0AC490();
}
