/* LEVEL_08:0x1D00D0 -- placement copy of LEVEL_01_19DA18.c: applies six slot settings, then refreshes the object's handle. */
typedef struct Obj {
    char pad0[0x5D0];
    int handle;
} Obj;

typedef struct Cfg {
    char pad0[0x854];
    unsigned char slot[6];
} Cfg;

extern Cfg *D_0023CB2C;
extern int D_002550F8[];

extern void func_03F5C8(Obj *o, int i);
extern void func_03F640(Obj *o, int i, int v);
extern int func_000A80(void);
extern void func_0008F8(int h, int a);
extern void func_1D0098(Obj *o);
extern int func_027A30(int a, int b);
extern void func_041120(int a);

void func_1D00D0(Obj *o, int flag, int arg)
{
    unsigned int i;
    int h;

    for (i = 0; i < 6; i++) {
        unsigned char s = D_0023CB2C->slot[i];
        if (s == 0) {
            func_03F5C8(o, i);
        } else {
            func_03F640(o, i, D_002550F8[s]);
        }
    }
    h = func_000A80();
    o->handle = h;
    if (flag != 0) {
        if (h != 0) {
            func_0008F8(h, arg);
        }
    }
    func_1D0098(o);
    if (func_027A30(0x9B, 0xFF) != 0) {
        func_041120(0);
    }
}
