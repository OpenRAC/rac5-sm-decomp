/* LEVEL_18:0x0BCE68 -- placement copy of LEVEL_01_0CE790.c: builds a list of 25 table entries on the gui object. */
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
extern G D_0027ABD8;
extern int D_001B212C;
extern E D_001B2000[];
extern void func_0A7B40(G *g, int a, int b, int c);
extern void func_09BE08(int a, R4 *r, float f);
extern void func_0A7EB8(G *g, int a, int b, int c, int d);
extern void func_0A7EA0(G *g, int a, unsigned b);
extern int func_0A79C0(char *object, int first, int second);
extern int func_024500(int a, int b);
extern int func_024710(int a);
extern int func_0A7AA0(G *g, int a, int b);
extern int func_10DFE0(int a);
extern int func_0A8268(G *g, int a, int b, int c, int d, int e, int f, int h, unsigned s);
extern int func_0A7C38(G *g);
extern void func_0BD040(void);

void func_0BCE68(void)
{

    R4 r;
    E *e;
    unsigned i;
    int t;

    func_0A7B40(&D_0027ABD8, D_001B212C, 0x20800, 0);
    func_09BE08(0x26D, &r, 0.0f);
    func_0A7EB8(&D_0027ABD8, r.a, r.b, r.c, r.d);
    func_0A7EA0(&D_0027ABD8, 0x26B, 0xFFFFFFFFu);
    func_0A79C0(&D_0027ABD8, 0x40602020u, 0xFFB07050u);
    for (i = 0; i < 25; i++) {
        e = &D_001B2000[i];
        if (func_024500((e->w >> 3) + 0x77, e->w & 7)) {
            func_0A7AA0(&D_0027ABD8, 1, 1);
            func_0A8268(&D_0027ABD8, func_10DFE0(e->h4), 0, e->h6, e->h8, i + 1, 1, 0, 0xFFFFFFFFu);
        } else {
            t = func_024710(e->b0A) ? e->h8 : 0x2C6;
            func_0A7AA0(&D_0027ABD8, 1, 1);
            func_0A8268(&D_0027ABD8, func_10DFE0(e->h4), 0, 0x2C6, t, 0x1A, 1, 0, 0xFFFFFFFFu);
        }
    }
    D_0027ABD8.flags |= 0x14;
    func_0A7C38(&D_0027ABD8);
    func_0BD040();
}
