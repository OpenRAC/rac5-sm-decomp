/* LEVEL_19:0x0BD768 -- placement copy of LEVEL_01_0CE790.c: builds a list of 25 table entries on the gui object. */
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
extern G D_0027A9D8;
extern int D_001B1E2C;
extern E D_001B1D00[];
extern void func_0A8440(G *g, int a, int b, int c);
extern void func_09C688(int a, R4 *r, float f);
extern void func_0A87B8(G *g, int a, int b, int c, int d);
extern void func_0A87A0(G *g, int a, unsigned b);
extern int func_0A82C0(char *object, int first, int second);
extern int func_024AF8(int a, int b);
extern int func_024D08(int a);
extern int func_0A83A0(G *g, int a, int b);
extern int func_10F9D0(int a);
extern int func_0A8B68(G *g, int a, int b, int c, int d, int e, int f, int h, unsigned s);
extern int func_0A8538(G *g);
extern void func_0BD940(void);

void func_0BD768(void)
{

    R4 r;
    E *e;
    unsigned i;
    int t;

    func_0A8440(&D_0027A9D8, D_001B1E2C, 0x20800, 0);
    func_09C688(0x26D, &r, 0.0f);
    func_0A87B8(&D_0027A9D8, r.a, r.b, r.c, r.d);
    func_0A87A0(&D_0027A9D8, 0x26B, 0xFFFFFFFFu);
    func_0A82C0(&D_0027A9D8, 0x40602020u, 0xFFB07050u);
    for (i = 0; i < 25; i++) {
        e = &D_001B1D00[i];
        if (func_024AF8((e->w >> 3) + 0x77, e->w & 7)) {
            func_0A83A0(&D_0027A9D8, 1, 1);
            func_0A8B68(&D_0027A9D8, func_10F9D0(e->h4), 0, e->h6, e->h8, i + 1, 1, 0, 0xFFFFFFFFu);
        } else {
            t = func_024D08(e->b0A) ? e->h8 : 0x2C6;
            func_0A83A0(&D_0027A9D8, 1, 1);
            func_0A8B68(&D_0027A9D8, func_10F9D0(e->h4), 0, 0x2C6, t, 0x1A, 1, 0, 0xFFFFFFFFu);
        }
    }
    D_0027A9D8.flags |= 0x14;
    func_0A8538(&D_0027A9D8);
    func_0BD940();
}
