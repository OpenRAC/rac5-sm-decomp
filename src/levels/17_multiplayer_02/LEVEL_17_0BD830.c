/* LEVEL_17:0x0BD830 -- placement copy of LEVEL_01_0CEBF0.c: queries a series of screen positions and registers each with a text lookup, then refreshes the active entry. */

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

extern char D_0026BC68[];
extern struct Ent0CEBF0 D_001A42C8[];
extern void func_09C690(int a, unsigned int b, float f);
extern void func_09C2F0(int id, struct Loc0CEBF0 *out, float f);
extern int func_096208(struct Loc0CEBF0 *l);
extern int func_10E8A8(int id);
extern void func_098378(short a, short b, int c);
extern void func_098A88(short a, short b, int c);
extern void func_0974A8(short a, short b, int c);
extern void func_096868(int a);
extern void func_0A89F0(char *p);
extern int func_0A8998(char *p);
extern void func_110440(int a, struct Loc0CEBF0 *l, unsigned int c);

void func_0BD830(void)
{
    struct Loc0CEBF0 l;
    int r;
    short a;
    short b;

    func_09C690(0x2E, 0xFFFFFFFF, 0.0f);
    func_09C2F0(0x1C3, &l, 0.0f);
    a = func_096208(&l);
    b = l.hC;
    func_098378(a, b, func_10E8A8(0x2CF));
    func_09C2F0(0x1C4, &l, 0.0f);
    a = l.h8;
    b = l.hC;
    func_098A88(a, b, func_10E8A8(0x1CA));
    func_09C2F0(0x1BF, &l, 0.0f);
    b = l.hC;
    a = l.h0;
    func_0974A8(a, b, func_10E8A8(0x2FE));
    func_096868(0);
    func_0A89F0(D_0026BC68);
    func_096868(1);
    r = func_0A8998(D_0026BC68);
    if (r != 0) {
        if (((struct Ent0CEBF0 *)((((struct Rec0CEBF0 *)r)->idx << 4) + (int)D_001A42C8))->wC != 0) {
            func_09C2F0(0x1C2, &l, 0.0f);
            func_110440(0, &l, 0xFFFFFFFF);
        }
    }
}
