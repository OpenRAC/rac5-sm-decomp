/* LEVEL_01:0x19DA18 -- applies six slot settings, then refreshes the object's handle. */
typedef struct Obj {
    char pad0[0x5D0];
    int handle;
} Obj;

typedef struct Cfg {
    char pad0[0x854];
    unsigned char slot[6];
} Cfg;

extern Cfg *D_001F3FAC;
extern int D_0020B478[];

extern void func_03A470(Obj *o, int i);
extern void func_03A4E8(Obj *o, int i, int v);
extern int func_000A80(void);
extern void func_0008F8(int h, int a);
extern void func_19D9E0(Obj *o);
extern int func_027408(int a, int b);
extern void func_03C038(int a);

void func_19DA18(Obj *o, int flag, int arg)
{
    unsigned int i;
    int h;

    for (i = 0; i < 6; i++) {
        unsigned char s = D_001F3FAC->slot[i];
        if (s == 0) {
            func_03A470(o, i);
        } else {
            func_03A4E8(o, i, D_0020B478[s]);
        }
    }
    h = func_000A80();
    o->handle = h;
    if (flag != 0) {
        if (h != 0) {
            func_0008F8(h, arg);
        }
    }
    func_19D9E0(o);
    if (func_027408(0x9B, 0xFF) != 0) {
        func_03C038(0);
    }
}
