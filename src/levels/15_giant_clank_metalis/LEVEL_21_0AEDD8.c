/* LEVEL_21:0x0AEDD8 -- placement copy of LEVEL_01_0CE790.c: builds a list of 25 table entries on the gui object. */
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
extern G D_00244018;
extern int D_00157A7C;
extern E D_00157950[];
extern void func_09A160(G *g, int a, int b, int c);
extern void func_08EFD0(int a, R4 *r, float f);
extern void func_09A4D8(G *g, int a, int b, int c, int d);
extern void func_09A4C0(G *g, int a, unsigned b);
extern int func_099FE0(char *object, int first, int second);
extern int func_0214A0(int a, int b);
extern int func_021670(int a);
extern int func_09A0C0(G *g, int a, int b);
extern int func_0F1378(int a);
extern int func_09A888(G *g, int a, int b, int c, int d, int e, int f, int h, unsigned s);
extern int func_09A258(G *g);
extern void func_0AEFB0(void);

void func_0AEDD8(void)
{

    R4 r;
    E *e;
    unsigned i;
    int t;

    func_09A160(&D_00244018, D_00157A7C, 0x20800, 0);
    func_08EFD0(0x26D, &r, 0.0f);
    func_09A4D8(&D_00244018, r.a, r.b, r.c, r.d);
    func_09A4C0(&D_00244018, 0x26B, 0xFFFFFFFFu);
    func_099FE0(&D_00244018, 0x40602020u, 0xFFB07050u);
    for (i = 0; i < 25; i++) {
        e = &D_00157950[i];
        if (func_0214A0((e->w >> 3) + 0x77, e->w & 7)) {
            func_09A0C0(&D_00244018, 1, 1);
            func_09A888(&D_00244018, func_0F1378(e->h4), 0, e->h6, e->h8, i + 1, 1, 0, 0xFFFFFFFFu);
        } else {
            t = func_021670(e->b0A) ? e->h8 : 0x2C6;
            func_09A0C0(&D_00244018, 1, 1);
            func_09A888(&D_00244018, func_0F1378(e->h4), 0, 0x2C6, t, 0x1A, 1, 0, 0xFFFFFFFFu);
        }
    }
    D_00244018.flags |= 0x14;
    func_09A258(&D_00244018);
    func_0AEFB0();
}
