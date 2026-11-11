/* LEVEL_02:0x0D5580 -- placement copy of LEVEL_01_0CEBF0.c: queries a series of screen positions and registers each with a text lookup, then refreshes the active entry. */

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

extern char D_00343DE8[];
extern struct Ent0CEBF0 D_00217DD8[];
extern void func_0B53B8(int a, unsigned int b, float f);
extern void func_0B5018(int id, struct Loc0CEBF0 *out, float f);
extern int func_0AEF90(struct Loc0CEBF0 *l);
extern int func_138860(int id);
extern void func_0B10A0(short a, short b, int c);
extern void func_0B17B0(short a, short b, int c);
extern void func_0B01D0(short a, short b, int c);
extern void func_0AF5C0(int a);
extern void func_0C0D70(char *p);
extern int func_0C0D18(char *p);
extern void func_13A508(int a, struct Loc0CEBF0 *l, unsigned int c);

void func_0D5580(void)
{
    struct Loc0CEBF0 l;
    int r;
    short a;
    short b;

    func_0B53B8(0x2E, 0xFFFFFFFF, 0.0f);
    func_0B5018(0x1C3, &l, 0.0f);
    a = func_0AEF90(&l);
    b = l.hC;
    func_0B10A0(a, b, func_138860(0x2CF));
    func_0B5018(0x1C4, &l, 0.0f);
    a = l.h8;
    b = l.hC;
    func_0B17B0(a, b, func_138860(0x1CA));
    func_0B5018(0x1BF, &l, 0.0f);
    b = l.hC;
    a = l.h0;
    func_0B01D0(a, b, func_138860(0x2FE));
    func_0AF5C0(0);
    func_0C0D70(D_00343DE8);
    func_0AF5C0(1);
    r = func_0C0D18(D_00343DE8);
    if (r != 0) {
        if (((struct Ent0CEBF0 *)((((struct Rec0CEBF0 *)r)->idx << 4) + (int)D_00217DD8))->wC != 0) {
            func_0B5018(0x1C2, &l, 0.0f);
            func_13A508(0, &l, 0xFFFFFFFF);
        }
    }
}
