/* LEVEL_18:0x0BD2C8 -- placement copy of LEVEL_01_0CEBF0.c: queries a series of screen positions and registers each with a text lookup, then refreshes the active entry. */

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

extern char D_0027ACE8[];
extern struct Ent0CEBF0 D_001B2148[];
extern void func_09C1A8(int a, unsigned int b, float f);
extern void func_09BE08(int id, struct Loc0CEBF0 *out, float f);
extern int func_095D20(struct Loc0CEBF0 *l);
extern int func_10DFE0(int id);
extern void func_097E90(short a, short b, int c);
extern void func_0985A0(short a, short b, int c);
extern void func_096FC0(short a, short b, int c);
extern void func_096380(int a);
extern void func_0A8488(char *p);
extern int func_0A8430(char *p);
extern void func_10FB78(int a, struct Loc0CEBF0 *l, unsigned int c);

void func_0BD2C8(void)
{
    struct Loc0CEBF0 l;
    int r;
    short a;
    short b;

    func_09C1A8(0x2E, 0xFFFFFFFF, 0.0f);
    func_09BE08(0x1C3, &l, 0.0f);
    a = func_095D20(&l);
    b = l.hC;
    func_097E90(a, b, func_10DFE0(0x2CF));
    func_09BE08(0x1C4, &l, 0.0f);
    a = l.h8;
    b = l.hC;
    func_0985A0(a, b, func_10DFE0(0x1CA));
    func_09BE08(0x1BF, &l, 0.0f);
    b = l.hC;
    a = l.h0;
    func_096FC0(a, b, func_10DFE0(0x2FE));
    func_096380(0);
    func_0A8488(D_0027ACE8);
    func_096380(1);
    r = func_0A8430(D_0027ACE8);
    if (r != 0) {
        if (((struct Ent0CEBF0 *)((((struct Rec0CEBF0 *)r)->idx << 4) + (int)D_001B2148))->wC != 0) {
            func_09BE08(0x1C2, &l, 0.0f);
            func_10FB78(0, &l, 0xFFFFFFFF);
        }
    }
}
