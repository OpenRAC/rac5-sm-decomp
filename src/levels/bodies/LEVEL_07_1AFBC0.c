/* LEVEL_07:0x1AFBC0 -- placement copy of LEVEL_01_19DA18.c: applies six slot settings, then refreshes the object's handle. */
typedef struct Obj {
    char pad0[0x5D0];
    int handle;
} Obj;

typedef struct Cfg {
    char pad0[0x854];
    unsigned char slot[6];
} Cfg;

extern Cfg *D_002082AC;
extern int D_00220178[];

extern void func_03A9A0(Obj *o, int i);
extern void func_03AA18(Obj *o, int i, int v);
extern int func_000A80(void);
extern void func_0008F8(int h, int a);
extern void func_1AFB88(Obj *o);
extern int func_027768(int a, int b);
extern void func_03C5E8(int a);

void func_1AFBC0(Obj *o, int flag, int arg)
{
    unsigned int i;
    int h;

    for (i = 0; i < 6; i++) {
        unsigned char s = D_002082AC->slot[i];
        if (s == 0) {
            func_03A9A0(o, i);
        } else {
            func_03AA18(o, i, D_00220178[s]);
        }
    }
    h = func_000A80();
    o->handle = h;
    if (flag != 0) {
        if (h != 0) {
            func_0008F8(h, arg);
        }
    }
    func_1AFB88(o);
    if (func_027768(0x9B, 0xFF) != 0) {
        func_03C5E8(0);
    }
}
