/* LEVEL_09:0x193248 -- placement copy of LEVEL_01_19DA18.c: applies six slot settings, then refreshes the object's handle. */
typedef struct Obj {
    char pad0[0x5D0];
    int handle;
} Obj;

typedef struct Cfg {
    char pad0[0x854];
    unsigned char slot[6];
} Cfg;

extern Cfg *D_001DDDAC;
extern int D_001F5078[];

extern void func_036A20(Obj *o, int i);
extern void func_036A98(Obj *o, int i, int v);
extern int func_000A80(void);
extern void func_0008F8(int h, int a);
extern void func_193210(Obj *o);
extern int func_026410(int a, int b);
extern void func_0384F8(int a);

void func_193248(Obj *o, int flag, int arg)
{
    unsigned int i;
    int h;

    for (i = 0; i < 6; i++) {
        unsigned char s = D_001DDDAC->slot[i];
        if (s == 0) {
            func_036A20(o, i);
        } else {
            func_036A98(o, i, D_001F5078[s]);
        }
    }
    h = func_000A80();
    o->handle = h;
    if (flag != 0) {
        if (h != 0) {
            func_0008F8(h, arg);
        }
    }
    func_193210(o);
    if (func_026410(0x9B, 0xFF) != 0) {
        func_0384F8(0);
    }
}
