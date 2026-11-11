/* LEVEL_20:0x0A83C0 -- placement copy of LEVEL_01_0CE790.c: builds a list of 25 table entries on the gui object. */
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
extern G D_0019E098;
extern int D_0011338C;
extern E D_00113260[];
extern void func_093098(G *g, int a, int b, int c);
extern void func_0874F0(int a, R4 *r, float f);
extern void func_093410(G *g, int a, int b, int c, int d);
extern void func_0933F8(G *g, int a, unsigned b);
extern int func_092F18(char *object, int first, int second);
extern int func_021AC8(int a, int b);
extern int func_021CD8(int a);
extern int func_092FF8(G *g, int a, int b);
extern int func_0E2118(int a);
extern int func_0937C0(G *g, int a, int b, int c, int d, int e, int f, int h, unsigned s);
extern int func_093190(G *g);
extern void func_0A8598(void);

void func_0A83C0(void)
{

    R4 r;
    E *e;
    unsigned i;
    int t;

    func_093098(&D_0019E098, D_0011338C, 0x20800, 0);
    func_0874F0(0x26D, &r, 0.0f);
    func_093410(&D_0019E098, r.a, r.b, r.c, r.d);
    func_0933F8(&D_0019E098, 0x26B, 0xFFFFFFFFu);
    func_092F18(&D_0019E098, 0x40602020u, 0xFFB07050u);
    for (i = 0; i < 25; i++) {
        e = &D_00113260[i];
        if (func_021AC8((e->w >> 3) + 0x77, e->w & 7)) {
            func_092FF8(&D_0019E098, 1, 1);
            func_0937C0(&D_0019E098, func_0E2118(e->h4), 0, e->h6, e->h8, i + 1, 1, 0, 0xFFFFFFFFu);
        } else {
            t = func_021CD8(e->b0A) ? e->h8 : 0x2C6;
            func_092FF8(&D_0019E098, 1, 1);
            func_0937C0(&D_0019E098, func_0E2118(e->h4), 0, 0x2C6, t, 0x1A, 1, 0, 0xFFFFFFFFu);
        }
    }
    D_0019E098.flags |= 0x14;
    func_093190(&D_0019E098);
    func_0A8598();
}
