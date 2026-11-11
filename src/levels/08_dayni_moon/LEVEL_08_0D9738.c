/* LEVEL_08:0x0D9738 -- placement copy of LEVEL_01_0CE790.c: builds a list of 25 table entries on the gui object. */
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
extern G D_0037BA58;
extern int D_0024BCBC;
extern E D_0024BB90[];
extern void func_0C4A08(G *g, int a, int b, int c);
extern void func_0B9040(int a, R4 *r, float f);
extern void func_0C4D80(G *g, int a, int b, int c, int d);
extern void func_0C4D68(G *g, int a, unsigned b);
extern int func_0C4888(char *object, int first, int second);
extern int func_027AD8(int a, int b);
extern int func_027CA8(int a);
extern int func_0C4968(G *g, int a, int b);
extern int func_1439E8(int a);
extern int func_0C5130(G *g, int a, int b, int c, int d, int e, int f, int h, unsigned s);
extern int func_0C4B00(G *g);
extern void func_0D9910(void);

void func_0D9738(void)
{

    R4 r;
    E *e;
    unsigned i;
    int t;

    func_0C4A08(&D_0037BA58, D_0024BCBC, 0x20800, 0);
    func_0B9040(0x26D, &r, 0.0f);
    func_0C4D80(&D_0037BA58, r.a, r.b, r.c, r.d);
    func_0C4D68(&D_0037BA58, 0x26B, 0xFFFFFFFFu);
    func_0C4888(&D_0037BA58, 0x40602020u, 0xFFB07050u);
    for (i = 0; i < 25; i++) {
        e = &D_0024BB90[i];
        if (func_027AD8((e->w >> 3) + 0x77, e->w & 7)) {
            func_0C4968(&D_0037BA58, 1, 1);
            func_0C5130(&D_0037BA58, func_1439E8(e->h4), 0, e->h6, e->h8, i + 1, 1, 0, 0xFFFFFFFFu);
        } else {
            t = func_027CA8(e->b0A) ? e->h8 : 0x2C6;
            func_0C4968(&D_0037BA58, 1, 1);
            func_0C5130(&D_0037BA58, func_1439E8(e->h4), 0, 0x2C6, t, 0x1A, 1, 0, 0xFFFFFFFFu);
        }
    }
    D_0037BA58.flags |= 0x14;
    func_0C4B00(&D_0037BA58);
    func_0D9910();
}
