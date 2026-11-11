/* LEVEL_05:0x0CCD38 -- placement copy of LEVEL_01_0CE790.c: builds a list of 25 table entries on the gui object. */
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
extern G D_00318698;
extern int D_001F217C;
extern E D_001F2050[];
extern void func_0B80C0(G *g, int a, int b, int c);
extern void func_0ACCC8(int a, R4 *r, float f);
extern void func_0B8438(G *g, int a, int b, int c, int d);
extern void func_0B8420(G *g, int a, unsigned b);
extern int func_0B7F40(char *object, int first, int second);
extern int func_0261F0(int a, int b);
extern int func_0263C0(int a);
extern int func_0B8020(G *g, int a, int b);
extern int func_12DE28(int a);
extern int func_0B87E8(G *g, int a, int b, int c, int d, int e, int f, int h, unsigned s);
extern int func_0B81B8(G *g);
extern void func_0CCF10(void);

void func_0CCD38(void)
{

    R4 r;
    E *e;
    unsigned i;
    int t;

    func_0B80C0(&D_00318698, D_001F217C, 0x20800, 0);
    func_0ACCC8(0x26D, &r, 0.0f);
    func_0B8438(&D_00318698, r.a, r.b, r.c, r.d);
    func_0B8420(&D_00318698, 0x26B, 0xFFFFFFFFu);
    func_0B7F40(&D_00318698, 0x40602020u, 0xFFB07050u);
    for (i = 0; i < 25; i++) {
        e = &D_001F2050[i];
        if (func_0261F0((e->w >> 3) + 0x77, e->w & 7)) {
            func_0B8020(&D_00318698, 1, 1);
            func_0B87E8(&D_00318698, func_12DE28(e->h4), 0, e->h6, e->h8, i + 1, 1, 0, 0xFFFFFFFFu);
        } else {
            t = func_0263C0(e->b0A) ? e->h8 : 0x2C6;
            func_0B8020(&D_00318698, 1, 1);
            func_0B87E8(&D_00318698, func_12DE28(e->h4), 0, 0x2C6, t, 0x1A, 1, 0, 0xFFFFFFFFu);
        }
    }
    D_00318698.flags |= 0x14;
    func_0B81B8(&D_00318698);
    func_0CCF10();
}
