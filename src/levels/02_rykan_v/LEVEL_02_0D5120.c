/* LEVEL_02:0x0D5120 -- placement copy of LEVEL_01_0CE790.c: builds a list of 25 table entries on the gui object. */
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
extern G D_00343CD8;
extern int D_00217DBC;
extern E D_00217C90[];
extern void func_0C0428(G *g, int a, int b, int c);
extern void func_0B5018(int a, R4 *r, float f);
extern void func_0C07A0(G *g, int a, int b, int c, int d);
extern void func_0C0788(G *g, int a, unsigned b);
extern int func_0C02A8(char *object, int first, int second);
extern int func_027C98(int a, int b);
extern int func_027E68(int a);
extern int func_0C0388(G *g, int a, int b);
extern int func_138860(int a);
extern int func_0C0B50(G *g, int a, int b, int c, int d, int e, int f, int h, unsigned s);
extern int func_0C0520(G *g);
extern void func_0D52F8(void);

void func_0D5120(void)
{

    R4 r;
    E *e;
    unsigned i;
    int t;

    func_0C0428(&D_00343CD8, D_00217DBC, 0x20800, 0);
    func_0B5018(0x26D, &r, 0.0f);
    func_0C07A0(&D_00343CD8, r.a, r.b, r.c, r.d);
    func_0C0788(&D_00343CD8, 0x26B, 0xFFFFFFFFu);
    func_0C02A8(&D_00343CD8, 0x40602020u, 0xFFB07050u);
    for (i = 0; i < 25; i++) {
        e = &D_00217C90[i];
        if (func_027C98((e->w >> 3) + 0x77, e->w & 7)) {
            func_0C0388(&D_00343CD8, 1, 1);
            func_0C0B50(&D_00343CD8, func_138860(e->h4), 0, e->h6, e->h8, i + 1, 1, 0, 0xFFFFFFFFu);
        } else {
            t = func_027E68(e->b0A) ? e->h8 : 0x2C6;
            func_0C0388(&D_00343CD8, 1, 1);
            func_0C0B50(&D_00343CD8, func_138860(e->h4), 0, 0x2C6, t, 0x1A, 1, 0, 0xFFFFFFFFu);
        }
    }
    D_00343CD8.flags |= 0x14;
    func_0C0520(&D_00343CD8);
    func_0D52F8();
}
