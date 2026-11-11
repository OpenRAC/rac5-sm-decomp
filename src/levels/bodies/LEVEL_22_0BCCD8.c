/* LEVEL_22:0x0BCCD8 -- placement copy of LEVEL_01_0CE790.c: builds a list of 25 table entries on the gui object. */
typedef struct { char pad0[0x14]; unsigned flags; } G;
typedef struct { short a; char p1[2]; short b; char p2[2]; short c; char p3[2]; short d; char p4[2]; } R4;
typedef struct {
    int w;
    unsigned short h4;
    unsigned short h6;
    unsigned short h8;
    unsigned char b0A;
    char pad0B;
} E;
extern G D_00282398;
extern int D_0016217C;
extern E D_00162050[];
extern void func_0A7FC0(G *g, int a, int b, int c);
extern void func_09CD18(int a, R4 *r, float f);
extern void func_0A8338(G *g, int a, int b, int c, int d);
extern void func_0A8320(G *g, int a, unsigned b);
extern int func_0A7E40(char *object, int first, int second);
extern int func_021E40(int a, int b);
extern int func_022010(int a);
extern int func_0A7F20(G *g, int a, int b);
extern int func_109980(int a);
extern int func_0A86E8(G *g, int a, int b, int c, int d, int e, int f, int h, unsigned s);
extern int func_0A80B8(G *g);
extern void func_0BCEB0(void);

void func_0BCCD8(void)
{

    R4 r;
    E *e;
    unsigned i;
    int t;

    func_0A7FC0(&D_00282398, D_0016217C, 0x20800, 0);
    func_09CD18(0x26D, &r, 0.0f);
    func_0A8338(&D_00282398, r.a, r.b, r.c, r.d);
    func_0A8320(&D_00282398, 0x26B, 0xFFFFFFFFu);
    func_0A7E40(&D_00282398, 0x40602020u, 0xFFB07050u);
    for (i = 0; i < 25; i++) {
        e = &D_00162050[i];
        if (func_021E40((e->w >> 3) + 0x77, e->w & 7)) {
            func_0A7F20(&D_00282398, 1, 1);
            func_0A86E8(&D_00282398, func_109980(e->h4), 0, e->h6, e->h8, i + 1, 1, 0, 0xFFFFFFFFu);
        } else {
            t = func_022010(e->b0A) ? e->h8 : 0x2C6;
            func_0A7F20(&D_00282398, 1, 1);
            func_0A86E8(&D_00282398, func_109980(e->h4), 0, 0x2C6, t, 0x1A, 1, 0, 0xFFFFFFFFu);
        }
    }
    D_00282398.flags |= 0x14;
    func_0A80B8(&D_00282398);
    func_0BCEB0();
}
