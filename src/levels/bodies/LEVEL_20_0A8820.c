/* LEVEL_20:0x0A8820 -- placement copy of LEVEL_01_0CEBF0.c: queries a series of screen positions and registers each with a text lookup, then refreshes the active entry. */

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

extern char D_0019E1A8[];
extern struct Ent0CEBF0 D_001133A8[];
extern void func_087890(int a, unsigned int b, float f);
extern void func_0874F0(int id, struct Loc0CEBF0 *out, float f);
extern int func_081408(struct Loc0CEBF0 *l);
extern int func_0E2118(int id);
extern void func_083578(short a, short b, int c);
extern void func_083C88(short a, short b, int c);
extern void func_0826A8(short a, short b, int c);
extern void func_081A68(int a);
extern void func_0939E0(char *p);
extern int func_093988(char *p);
extern void func_0E3CB0(int a, struct Loc0CEBF0 *l, unsigned int c);

void func_0A8820(void)
{
    struct Loc0CEBF0 l;
    int r;
    short a;
    short b;

    func_087890(0x2E, 0xFFFFFFFF, 0.0f);
    func_0874F0(0x1C3, &l, 0.0f);
    a = func_081408(&l);
    b = l.hC;
    func_083578(a, b, func_0E2118(0x2CF));
    func_0874F0(0x1C4, &l, 0.0f);
    a = l.h8;
    b = l.hC;
    func_083C88(a, b, func_0E2118(0x1CA));
    func_0874F0(0x1BF, &l, 0.0f);
    b = l.hC;
    a = l.h0;
    func_0826A8(a, b, func_0E2118(0x2FE));
    func_081A68(0);
    func_0939E0(D_0019E1A8);
    func_081A68(1);
    r = func_093988(D_0019E1A8);
    if (r != 0) {
        if (((struct Ent0CEBF0 *)((((struct Rec0CEBF0 *)r)->idx << 4) + (int)D_001133A8))->wC != 0) {
            func_0874F0(0x1C2, &l, 0.0f);
            func_0E3CB0(0, &l, 0xFFFFFFFF);
        }
    }
}
