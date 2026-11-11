/* LEVEL_24:0x0C80D8 -- placement copy of LEVEL_01_0CE790.c: builds a list of 25 table entries on the gui object. */
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
extern G D_002F8698;
extern int D_001D3A7C;
extern E D_001D3950[];
extern void func_0B33A8(G *g, int a, int b, int c);
extern void func_0A7F80(int a, R4 *r, float f);
extern void func_0B3720(G *g, int a, int b, int c, int d);
extern void func_0B3708(G *g, int a, unsigned b);
extern int func_0B3228(char *object, int first, int second);
extern int func_024DE0(int a, int b);
extern int func_024FB0(int a);
extern int func_0B3308(G *g, int a, int b);
extern int func_127FB0(int a);
extern int func_0B3AD0(G *g, int a, int b, int c, int d, int e, int f, int h, unsigned s);
extern int func_0B34A0(G *g);
extern void func_0C82B0(void);

void func_0C80D8(void)
{

    R4 r;
    E *e;
    unsigned i;
    int t;

    func_0B33A8(&D_002F8698, D_001D3A7C, 0x20800, 0);
    func_0A7F80(0x26D, &r, 0.0f);
    func_0B3720(&D_002F8698, r.a, r.b, r.c, r.d);
    func_0B3708(&D_002F8698, 0x26B, 0xFFFFFFFFu);
    func_0B3228(&D_002F8698, 0x40602020u, 0xFFB07050u);
    for (i = 0; i < 25; i++) {
        e = &D_001D3950[i];
        if (func_024DE0((e->w >> 3) + 0x77, e->w & 7)) {
            func_0B3308(&D_002F8698, 1, 1);
            func_0B3AD0(&D_002F8698, func_127FB0(e->h4), 0, e->h6, e->h8, i + 1, 1, 0, 0xFFFFFFFFu);
        } else {
            t = func_024FB0(e->b0A) ? e->h8 : 0x2C6;
            func_0B3308(&D_002F8698, 1, 1);
            func_0B3AD0(&D_002F8698, func_127FB0(e->h4), 0, 0x2C6, t, 0x1A, 1, 0, 0xFFFFFFFFu);
        }
    }
    D_002F8698.flags |= 0x14;
    func_0B34A0(&D_002F8698);
    func_0C82B0();
}
