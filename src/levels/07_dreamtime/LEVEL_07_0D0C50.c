/* LEVEL_07:0x0D0C50 -- placement copy of LEVEL_01_0CEBF0.c: queries a series of screen positions and registers each with a text lookup, then refreshes the active entry. */

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

extern char D_003421E8[];
extern struct Ent0CEBF0 D_00217118[];
extern void func_0B0AA8(int a, unsigned int b, float f);
extern void func_0B0708(int id, struct Loc0CEBF0 *out, float f);
extern int func_0AA680(struct Loc0CEBF0 *l);
extern int func_1354B0(int id);
extern void func_0AC790(short a, short b, int c);
extern void func_0ACEA0(short a, short b, int c);
extern void func_0AB8C0(short a, short b, int c);
extern void func_0AACB0(int a);
extern void func_0BC4C0(char *p);
extern int func_0BC468(char *p);
extern void func_137158(int a, struct Loc0CEBF0 *l, unsigned int c);

void func_0D0C50(void)
{
    struct Loc0CEBF0 l;
    int r;
    short a;
    short b;

    func_0B0AA8(0x2E, 0xFFFFFFFF, 0.0f);
    func_0B0708(0x1C3, &l, 0.0f);
    a = func_0AA680(&l);
    b = l.hC;
    func_0AC790(a, b, func_1354B0(0x2CF));
    func_0B0708(0x1C4, &l, 0.0f);
    a = l.h8;
    b = l.hC;
    func_0ACEA0(a, b, func_1354B0(0x1CA));
    func_0B0708(0x1BF, &l, 0.0f);
    b = l.hC;
    a = l.h0;
    func_0AB8C0(a, b, func_1354B0(0x2FE));
    func_0AACB0(0);
    func_0BC4C0(D_003421E8);
    func_0AACB0(1);
    r = func_0BC468(D_003421E8);
    if (r != 0) {
        if (((struct Ent0CEBF0 *)((((struct Rec0CEBF0 *)r)->idx << 4) + (int)D_00217118))->wC != 0) {
            func_0B0708(0x1C2, &l, 0.0f);
            func_137158(0, &l, 0xFFFFFFFF);
        }
    }
}
