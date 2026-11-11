/* LEVEL_22:0x132128 -- placement copy of LEVEL_01_19DA18.c: applies six slot settings, then refreshes the object's handle. */
typedef struct Obj {
    char pad0[0x5D0];
    int handle;
} Obj;

typedef struct Cfg {
    char pad0[0x854];
    unsigned char slot[6];
} Cfg;

extern Cfg *D_0015332C;
extern int D_001688F8[];

extern void func_030168(Obj *o, int i);
extern void func_0301E0(Obj *o, int i, int v);
extern int func_000888(void);
extern void func_000700(int h, int a);
extern void func_1320F0(Obj *o);
extern int func_021D98(int a, int b);
extern void func_031BD8(int a);

void func_132128(Obj *o, int flag, int arg)
{
    unsigned int i;
    int h;

    for (i = 0; i < 6; i++) {
        unsigned char s = D_0015332C->slot[i];
        if (s == 0) {
            func_030168(o, i);
        } else {
            func_0301E0(o, i, D_001688F8[s]);
        }
    }
    h = func_000888();
    o->handle = h;
    if (flag != 0) {
        if (h != 0) {
            func_000700(h, arg);
        }
    }
    func_1320F0(o);
    if (func_021D98(0x9B, 0xFF) != 0) {
        func_031BD8(0);
    }
}
