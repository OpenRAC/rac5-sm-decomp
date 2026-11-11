/* LEVEL_04:0x0D4028 -- placement copy of LEVEL_01_0CE790.c: builds a list of 25 table entries on the gui object. */
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
extern G D_00346FD8;
extern int D_0021C2BC;
extern E D_0021C190[];
extern void func_0BF2F8(G *g, int a, int b, int c);
extern void func_0B3958(int a, R4 *r, float f);
extern void func_0BF670(G *g, int a, int b, int c, int d);
extern void func_0BF658(G *g, int a, unsigned b);
extern int func_0BF178(char *object, int first, int second);
extern int func_027140(int a, int b);
extern int func_027310(int a);
extern int func_0BF258(G *g, int a, int b);
extern int func_13E930(int a);
extern int func_0BFA20(G *g, int a, int b, int c, int d, int e, int f, int h, unsigned s);
extern int func_0BF3F0(G *g);
extern void func_0D4200(void);

void func_0D4028(void)
{

    R4 r;
    E *e;
    unsigned i;
    int t;

    func_0BF2F8(&D_00346FD8, D_0021C2BC, 0x20800, 0);
    func_0B3958(0x26D, &r, 0.0f);
    func_0BF670(&D_00346FD8, r.a, r.b, r.c, r.d);
    func_0BF658(&D_00346FD8, 0x26B, 0xFFFFFFFFu);
    func_0BF178(&D_00346FD8, 0x40602020u, 0xFFB07050u);
    for (i = 0; i < 25; i++) {
        e = &D_0021C190[i];
        if (func_027140((e->w >> 3) + 0x77, e->w & 7)) {
            func_0BF258(&D_00346FD8, 1, 1);
            func_0BFA20(&D_00346FD8, func_13E930(e->h4), 0, e->h6, e->h8, i + 1, 1, 0, 0xFFFFFFFFu);
        } else {
            t = func_027310(e->b0A) ? e->h8 : 0x2C6;
            func_0BF258(&D_00346FD8, 1, 1);
            func_0BFA20(&D_00346FD8, func_13E930(e->h4), 0, 0x2C6, t, 0x1A, 1, 0, 0xFFFFFFFFu);
        }
    }
    D_00346FD8.flags |= 0x14;
    func_0BF3F0(&D_00346FD8);
    func_0D4200();
}
