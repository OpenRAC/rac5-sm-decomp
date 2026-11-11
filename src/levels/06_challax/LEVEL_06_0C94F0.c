/* LEVEL_06:0x0C94F0 -- placement copy of LEVEL_01_0CEBF0.c: queries a series of screen positions and registers each with a text lookup, then refreshes the active entry. */

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

extern char D_00319668[];
extern struct Ent0CEBF0 D_001F1D18[];
extern void func_0A9278(int a, unsigned int b, float f);
extern void func_0A8ED8(int id, struct Loc0CEBF0 *out, float f);
extern int func_0A2E50(struct Loc0CEBF0 *l);
extern int func_128B80(int id);
extern void func_0A4F60(short a, short b, int c);
extern void func_0A5670(short a, short b, int c);
extern void func_0A4090(short a, short b, int c);
extern void func_0A3480(int a);
extern void func_0B4D60(char *p);
extern int func_0B4D08(char *p);
extern void func_12A828(int a, struct Loc0CEBF0 *l, unsigned int c);

void func_0C94F0(void)
{
    struct Loc0CEBF0 l;
    int r;
    short a;
    short b;

    func_0A9278(0x2E, 0xFFFFFFFF, 0.0f);
    func_0A8ED8(0x1C3, &l, 0.0f);
    a = func_0A2E50(&l);
    b = l.hC;
    func_0A4F60(a, b, func_128B80(0x2CF));
    func_0A8ED8(0x1C4, &l, 0.0f);
    a = l.h8;
    b = l.hC;
    func_0A5670(a, b, func_128B80(0x1CA));
    func_0A8ED8(0x1BF, &l, 0.0f);
    b = l.hC;
    a = l.h0;
    func_0A4090(a, b, func_128B80(0x2FE));
    func_0A3480(0);
    func_0B4D60(D_00319668);
    func_0A3480(1);
    r = func_0B4D08(D_00319668);
    if (r != 0) {
        if (((struct Ent0CEBF0 *)((((struct Rec0CEBF0 *)r)->idx << 4) + (int)D_001F1D18))->wC != 0) {
            func_0A8ED8(0x1C2, &l, 0.0f);
            func_12A828(0, &l, 0xFFFFFFFF);
        }
    }
}
