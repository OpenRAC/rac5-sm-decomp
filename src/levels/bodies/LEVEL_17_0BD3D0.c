/* LEVEL_17:0x0BD3D0 -- placement copy of LEVEL_01_0CE790.c: builds a list of 25 table entries on the gui object. */
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
extern G D_0026BB58;
extern int D_001A42AC;
extern E D_001A4180[];
extern void func_0A80A8(G *g, int a, int b, int c);
extern void func_09C2F0(int a, R4 *r, float f);
extern void func_0A8420(G *g, int a, int b, int c, int d);
extern void func_0A8408(G *g, int a, unsigned b);
extern int func_0A7F28(char *object, int first, int second);
extern int func_0248D0(int a, int b);
extern int func_024AE0(int a);
extern int func_0A8008(G *g, int a, int b);
extern int func_10E8A8(int a);
extern int func_0A87D0(G *g, int a, int b, int c, int d, int e, int f, int h, unsigned s);
extern int func_0A81A0(G *g);
extern void func_0BD5A8(void);

void func_0BD3D0(void)
{

    R4 r;
    E *e;
    unsigned i;
    int t;

    func_0A80A8(&D_0026BB58, D_001A42AC, 0x20800, 0);
    func_09C2F0(0x26D, &r, 0.0f);
    func_0A8420(&D_0026BB58, r.a, r.b, r.c, r.d);
    func_0A8408(&D_0026BB58, 0x26B, 0xFFFFFFFFu);
    func_0A7F28(&D_0026BB58, 0x40602020u, 0xFFB07050u);
    for (i = 0; i < 25; i++) {
        e = &D_001A4180[i];
        if (func_0248D0((e->w >> 3) + 0x77, e->w & 7)) {
            func_0A8008(&D_0026BB58, 1, 1);
            func_0A87D0(&D_0026BB58, func_10E8A8(e->h4), 0, e->h6, e->h8, i + 1, 1, 0, 0xFFFFFFFFu);
        } else {
            t = func_024AE0(e->b0A) ? e->h8 : 0x2C6;
            func_0A8008(&D_0026BB58, 1, 1);
            func_0A87D0(&D_0026BB58, func_10E8A8(e->h4), 0, 0x2C6, t, 0x1A, 1, 0, 0xFFFFFFFFu);
        }
    }
    D_0026BB58.flags |= 0x14;
    func_0A81A0(&D_0026BB58);
    func_0BD5A8();
}
