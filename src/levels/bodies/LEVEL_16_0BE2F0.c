/* LEVEL_16:0x0BE2F0 -- placement copy of LEVEL_01_0CEBF0.c: queries a series of screen positions and registers each with a text lookup, then refreshes the active entry. */

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

extern char D_0027A968[];
extern struct Ent0CEBF0 D_001B0CC8[];
extern void func_09D198(int a, unsigned int b, float f);
extern void func_09CDF8(int id, struct Loc0CEBF0 *out, float f);
extern int func_096D10(struct Loc0CEBF0 *l);
extern int func_10F330(int id);
extern void func_098E80(short a, short b, int c);
extern void func_099590(short a, short b, int c);
extern void func_097FB0(short a, short b, int c);
extern void func_097370(int a);
extern void func_0A94B0(char *p);
extern int func_0A9458(char *p);
extern void func_110EC8(int a, struct Loc0CEBF0 *l, unsigned int c);

void func_0BE2F0(void)
{
    struct Loc0CEBF0 l;
    int r;
    short a;
    short b;

    func_09D198(0x2E, 0xFFFFFFFF, 0.0f);
    func_09CDF8(0x1C3, &l, 0.0f);
    a = func_096D10(&l);
    b = l.hC;
    func_098E80(a, b, func_10F330(0x2CF));
    func_09CDF8(0x1C4, &l, 0.0f);
    a = l.h8;
    b = l.hC;
    func_099590(a, b, func_10F330(0x1CA));
    func_09CDF8(0x1BF, &l, 0.0f);
    b = l.hC;
    a = l.h0;
    func_097FB0(a, b, func_10F330(0x2FE));
    func_097370(0);
    func_0A94B0(D_0027A968);
    func_097370(1);
    r = func_0A9458(D_0027A968);
    if (r != 0) {
        if (((struct Ent0CEBF0 *)((((struct Rec0CEBF0 *)r)->idx << 4) + (int)D_001B0CC8))->wC != 0) {
            func_09CDF8(0x1C2, &l, 0.0f);
            func_110EC8(0, &l, 0xFFFFFFFF);
        }
    }
}
