/* LEVEL_03:0x0CE578 -- placement copy of LEVEL_01_0CE790.c: builds a list of 25 table entries on the gui object. */
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
extern G D_00347658;
extern int D_0021B47C;
extern E D_0021B350[];
extern void func_0B9900(G *g, int a, int b, int c);
extern void func_0AE488(int a, R4 *r, float f);
extern void func_0B9C78(G *g, int a, int b, int c, int d);
extern void func_0B9C60(G *g, int a, unsigned b);
extern int func_0B9780(char *object, int first, int second);
extern int func_027390(int a, int b);
extern int func_027560(int a);
extern int func_0B9860(G *g, int a, int b);
extern int func_130878(int a);
extern int func_0BA028(G *g, int a, int b, int c, int d, int e, int f, int h, unsigned s);
extern int func_0B99F8(G *g);
extern void func_0CE750(void);

void func_0CE578(void)
{

    R4 r;
    E *e;
    unsigned i;
    int t;

    func_0B9900(&D_00347658, D_0021B47C, 0x20800, 0);
    func_0AE488(0x26D, &r, 0.0f);
    func_0B9C78(&D_00347658, r.a, r.b, r.c, r.d);
    func_0B9C60(&D_00347658, 0x26B, 0xFFFFFFFFu);
    func_0B9780(&D_00347658, 0x40602020u, 0xFFB07050u);
    for (i = 0; i < 25; i++) {
        e = &D_0021B350[i];
        if (func_027390((e->w >> 3) + 0x77, e->w & 7)) {
            func_0B9860(&D_00347658, 1, 1);
            func_0BA028(&D_00347658, func_130878(e->h4), 0, e->h6, e->h8, i + 1, 1, 0, 0xFFFFFFFFu);
        } else {
            t = func_027560(e->b0A) ? e->h8 : 0x2C6;
            func_0B9860(&D_00347658, 1, 1);
            func_0BA028(&D_00347658, func_130878(e->h4), 0, 0x2C6, t, 0x1A, 1, 0, 0xFFFFFFFFu);
        }
    }
    D_00347658.flags |= 0x14;
    func_0B99F8(&D_00347658);
    func_0CE750();
}
