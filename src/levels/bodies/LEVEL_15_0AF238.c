/* LEVEL_15:0x0AF238 -- placement copy of LEVEL_01_0CEBF0.c: queries a series of screen positions and registers each with a text lookup, then refreshes the active entry. */

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

extern char D_00244128[];
extern struct Ent0CEBF0 D_00157A98[];
extern void func_08F370(int a, unsigned int b, float f);
extern void func_08EFD0(int id, struct Loc0CEBF0 *out, float f);
extern int func_088F48(struct Loc0CEBF0 *l);
extern int func_0F1378(int id);
extern void func_08B058(short a, short b, int c);
extern void func_08B768(short a, short b, int c);
extern void func_08A188(short a, short b, int c);
extern void func_089578(int a);
extern void func_09AAA8(char *p);
extern int func_09AA50(char *p);
extern void func_0F3020(int a, struct Loc0CEBF0 *l, unsigned int c);

void func_0AF238(void)
{
    struct Loc0CEBF0 l;
    int r;
    short a;
    short b;

    func_08F370(0x2E, 0xFFFFFFFF, 0.0f);
    func_08EFD0(0x1C3, &l, 0.0f);
    a = func_088F48(&l);
    b = l.hC;
    func_08B058(a, b, func_0F1378(0x2CF));
    func_08EFD0(0x1C4, &l, 0.0f);
    a = l.h8;
    b = l.hC;
    func_08B768(a, b, func_0F1378(0x1CA));
    func_08EFD0(0x1BF, &l, 0.0f);
    b = l.hC;
    a = l.h0;
    func_08A188(a, b, func_0F1378(0x2FE));
    func_089578(0);
    func_09AAA8(D_00244128);
    func_089578(1);
    r = func_09AA50(D_00244128);
    if (r != 0) {
        if (((struct Ent0CEBF0 *)((((struct Rec0CEBF0 *)r)->idx << 4) + (int)D_00157A98))->wC != 0) {
            func_08EFD0(0x1C2, &l, 0.0f);
            func_0F3020(0, &l, 0xFFFFFFFF);
        }
    }
}
