/* LEVEL_10:0x0D0030 -- placement copy of LEVEL_01_0CEBF0.c: queries a series of screen positions and registers each with a text lookup, then refreshes the active entry. */

struct Loc0CEBF0 {
    short h0;
    short pad2[3];
    unsigned short h8;
    unsigned short padA;
    unsigned short hC;
    unsigned short padE;
};

struct Rec0CEBF0 {
    char pad0[0xD4];
    int idx;
};

struct Ent0CEBF0 {
    int w0;
    int w4;
    int w8;
    int wC;
};

extern char D_00335CE8[];
extern struct Ent0CEBF0 D_0020BE18[];
extern void func_0AFBC0(int a, unsigned int b, float f);
extern void func_0AF820(int id, struct Loc0CEBF0 *out, float f);
extern int func_0A9798(struct Loc0CEBF0 *l);
extern int func_130310(int id);
extern void func_0AB8A8(short a, short b, int c);
extern void func_0ABFB8(short a, short b, int c);
extern void func_0AA9D8(short a, short b, int c);
extern void func_0A9DC8(int a);
extern void func_0BB7A8(char *p);
extern int func_0BB750(char *p);
extern void func_131FD8(int a, struct Loc0CEBF0 *l, unsigned int c);

void func_0D0030(void)
{
    struct Loc0CEBF0 l;
    int r;
    short a;
    short b;

    func_0AFBC0(0x2E, 0xFFFFFFFF, 0.0f);
    func_0AF820(0x1C3, &l, 0.0f);
    a = func_0A9798(&l);
    b = l.hC;
    func_0AB8A8(a, b, func_130310(0x2CF));
    func_0AF820(0x1C4, &l, 0.0f);
    a = l.h8;
    b = l.hC;
    func_0ABFB8(a, b, func_130310(0x1CA));
    func_0AF820(0x1BF, &l, 0.0f);
    b = l.hC;
    a = l.h0;
    func_0AA9D8(a, b, func_130310(0x2FE));
    func_0A9DC8(0);
    func_0BB7A8(D_00335CE8);
    func_0A9DC8(1);
    r = func_0BB750(D_00335CE8);
    if (r != 0) {
        if (((struct Ent0CEBF0 *)((((struct Rec0CEBF0 *)r)->idx << 4) + (int)D_0020BE18))->wC != 0) {
            func_0AF820(0x1C2, &l, 0.0f);
            func_131FD8(0, &l, 0xFFFFFFFF);
        }
    }
}
