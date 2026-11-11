/* LEVEL_08:0x0D9B98 -- placement copy of LEVEL_01_0CEBF0.c: queries a series of screen positions and registers each with a text lookup, then refreshes the active entry. */

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

extern char D_0037BB68[];
extern struct Ent0CEBF0 D_0024BCD8[];
extern void func_0B93E0(int a, unsigned int b, float f);
extern void func_0B9040(int id, struct Loc0CEBF0 *out, float f);
extern int func_0B2F78(struct Loc0CEBF0 *l);
extern int func_1439E8(int id);
extern void func_0B50C8(short a, short b, int c);
extern void func_0B57D8(short a, short b, int c);
extern void func_0B41F8(short a, short b, int c);
extern void func_0B35E8(int a);
extern void func_0C5350(char *p);
extern int func_0C52F8(char *p);
extern void func_145690(int a, struct Loc0CEBF0 *l, unsigned int c);

void func_0D9B98(void)
{
    struct Loc0CEBF0 l;
    int r;
    short a;
    short b;

    func_0B93E0(0x2E, 0xFFFFFFFF, 0.0f);
    func_0B9040(0x1C3, &l, 0.0f);
    a = func_0B2F78(&l);
    b = l.hC;
    func_0B50C8(a, b, func_1439E8(0x2CF));
    func_0B9040(0x1C4, &l, 0.0f);
    a = l.h8;
    b = l.hC;
    func_0B57D8(a, b, func_1439E8(0x1CA));
    func_0B9040(0x1BF, &l, 0.0f);
    b = l.hC;
    a = l.h0;
    func_0B41F8(a, b, func_1439E8(0x2FE));
    func_0B35E8(0);
    func_0C5350(D_0037BB68);
    func_0B35E8(1);
    r = func_0C52F8(D_0037BB68);
    if (r != 0) {
        if (((struct Ent0CEBF0 *)((((struct Rec0CEBF0 *)r)->idx << 4) + (int)D_0024BCD8))->wC != 0) {
            func_0B9040(0x1C2, &l, 0.0f);
            func_145690(0, &l, 0xFFFFFFFF);
        }
    }
}
