/* LEVEL_06:0x1935F0 -- placement copy of LEVEL_01_19DA18.c: applies six slot settings, then refreshes the object's handle. */
typedef struct Obj {
    char pad0[0x5D0];
    int handle;
} Obj;

typedef struct Cfg {
    char pad0[0x854];
    unsigned char slot[6];
} Cfg;

extern Cfg *D_001E2EAC;
extern int D_001FA2F8[];

extern void func_036C68(Obj *o, int i);
extern void func_036CE0(Obj *o, int i, int v);
extern int func_000A80(void);
extern void func_0008F8(int h, int a);
extern void func_1935B8(Obj *o);
extern int func_0258B8(int a, int b);
extern void func_038740(int a);

void func_1935F0(Obj *o, int flag, int arg)
{
    unsigned int i;
    int h;

    for (i = 0; i < 6; i++) {
        unsigned char s = D_001E2EAC->slot[i];
        if (s == 0) {
            func_036C68(o, i);
        } else {
            func_036CE0(o, i, D_001FA2F8[s]);
        }
    }
    h = func_000A80();
    o->handle = h;
    if (flag != 0) {
        if (h != 0) {
            func_0008F8(h, arg);
        }
    }
    func_1935B8(o);
    if (func_0258B8(0x9B, 0xFF) != 0) {
        func_038740(0);
    }
}
