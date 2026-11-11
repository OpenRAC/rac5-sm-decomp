/* LEVEL_24:0x0C8538 -- placement copy of LEVEL_01_0CEBF0.c: queries a series of screen positions and registers each with a text lookup, then refreshes the active entry. */

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

extern char D_002F87A8[];
extern struct Ent0CEBF0 D_001D3A98[];
extern void func_0A8320(int a, unsigned int b, float f);
extern void func_0A7F80(int id, struct Loc0CEBF0 *out, float f);
extern int func_0A1EF8(struct Loc0CEBF0 *l);
extern int func_127FB0(int id);
extern void func_0A4008(short a, short b, int c);
extern void func_0A4718(short a, short b, int c);
extern void func_0A3138(short a, short b, int c);
extern void func_0A2528(int a);
extern void func_0B3CF0(char *p);
extern int func_0B3C98(char *p);
extern void func_129C58(int a, struct Loc0CEBF0 *l, unsigned int c);

void func_0C8538(void)
{
    struct Loc0CEBF0 l;
    int r;
    short a;
    short b;

    func_0A8320(0x2E, 0xFFFFFFFF, 0.0f);
    func_0A7F80(0x1C3, &l, 0.0f);
    a = func_0A1EF8(&l);
    b = l.hC;
    func_0A4008(a, b, func_127FB0(0x2CF));
    func_0A7F80(0x1C4, &l, 0.0f);
    a = l.h8;
    b = l.hC;
    func_0A4718(a, b, func_127FB0(0x1CA));
    func_0A7F80(0x1BF, &l, 0.0f);
    b = l.hC;
    a = l.h0;
    func_0A3138(a, b, func_127FB0(0x2FE));
    func_0A2528(0);
    func_0B3CF0(D_002F87A8);
    func_0A2528(1);
    r = func_0B3C98(D_002F87A8);
    if (r != 0) {
        if (((struct Ent0CEBF0 *)((((struct Rec0CEBF0 *)r)->idx << 4) + (int)D_001D3A98))->wC != 0) {
            func_0A7F80(0x1C2, &l, 0.0f);
            func_129C58(0, &l, 0xFFFFFFFF);
        }
    }
}
