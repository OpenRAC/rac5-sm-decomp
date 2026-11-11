/* LEVEL_23:0x0C55C8 -- placement copy of LEVEL_01_0CE790.c: builds a list of 25 table entries on the gui object. */
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
extern G D_002FDC18;
extern int D_001D61FC;
extern E D_001D60D0[];
extern void func_0B08B0(G *g, int a, int b, int c);
extern void func_0A5478(int a, R4 *r, float f);
extern void func_0B0C28(G *g, int a, int b, int c, int d);
extern void func_0B0C10(G *g, int a, unsigned b);
extern int func_0B0730(char *object, int first, int second);
extern int func_025208(int a, int b);
extern int func_0253D8(int a);
extern int func_0B0810(G *g, int a, int b);
extern int func_123C28(int a);
extern int func_0B0FD8(G *g, int a, int b, int c, int d, int e, int f, int h, unsigned s);
extern int func_0B09A8(G *g);
extern void func_0C57A0(void);

void func_0C55C8(void)
{

    R4 r;
    E *e;
    unsigned i;
    int t;

    func_0B08B0(&D_002FDC18, D_001D61FC, 0x20800, 0);
    func_0A5478(0x26D, &r, 0.0f);
    func_0B0C28(&D_002FDC18, r.a, r.b, r.c, r.d);
    func_0B0C10(&D_002FDC18, 0x26B, 0xFFFFFFFFu);
    func_0B0730(&D_002FDC18, 0x40602020u, 0xFFB07050u);
    for (i = 0; i < 25; i++) {
        e = &D_001D60D0[i];
        if (func_025208((e->w >> 3) + 0x77, e->w & 7)) {
            func_0B0810(&D_002FDC18, 1, 1);
            func_0B0FD8(&D_002FDC18, func_123C28(e->h4), 0, e->h6, e->h8, i + 1, 1, 0, 0xFFFFFFFFu);
        } else {
            t = func_0253D8(e->b0A) ? e->h8 : 0x2C6;
            func_0B0810(&D_002FDC18, 1, 1);
            func_0B0FD8(&D_002FDC18, func_123C28(e->h4), 0, 0x2C6, t, 0x1A, 1, 0, 0xFFFFFFFFu);
        }
    }
    D_002FDC18.flags |= 0x14;
    func_0B09A8(&D_002FDC18);
    func_0C57A0();
}
