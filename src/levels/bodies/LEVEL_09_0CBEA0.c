/* LEVEL_09:0x0CBEA0 -- placement copy of LEVEL_01_0CEBF0.c: queries a series of screen positions and registers each with a text lookup, then refreshes the active entry. */

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

extern char D_00314068[];
extern struct Ent0CEBF0 D_001ECC18[];
extern void func_0ABD58(int a, unsigned int b, float f);
extern void func_0AB9B8(int id, struct Loc0CEBF0 *out, float f);
extern int func_0A5930(struct Loc0CEBF0 *l);
extern int func_12B448(int id);
extern void func_0A7A40(short a, short b, int c);
extern void func_0A8150(short a, short b, int c);
extern void func_0A6B70(short a, short b, int c);
extern void func_0A5F60(int a);
extern void func_0B7710(char *p);
extern int func_0B76B8(char *p);
extern void func_12D0F0(int a, struct Loc0CEBF0 *l, unsigned int c);

void func_0CBEA0(void)
{
    struct Loc0CEBF0 l;
    int r;
    short a;
    short b;

    func_0ABD58(0x2E, 0xFFFFFFFF, 0.0f);
    func_0AB9B8(0x1C3, &l, 0.0f);
    a = func_0A5930(&l);
    b = l.hC;
    func_0A7A40(a, b, func_12B448(0x2CF));
    func_0AB9B8(0x1C4, &l, 0.0f);
    a = l.h8;
    b = l.hC;
    func_0A8150(a, b, func_12B448(0x1CA));
    func_0AB9B8(0x1BF, &l, 0.0f);
    b = l.hC;
    a = l.h0;
    func_0A6B70(a, b, func_12B448(0x2FE));
    func_0A5F60(0);
    func_0B7710(D_00314068);
    func_0A5F60(1);
    r = func_0B76B8(D_00314068);
    if (r != 0) {
        if (((struct Ent0CEBF0 *)((((struct Rec0CEBF0 *)r)->idx << 4) + (int)D_001ECC18))->wC != 0) {
            func_0AB9B8(0x1C2, &l, 0.0f);
            func_12D0F0(0, &l, 0xFFFFFFFF);
        }
    }
}
