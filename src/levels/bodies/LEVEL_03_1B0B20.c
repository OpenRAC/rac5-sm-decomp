/* LEVEL_03:0x1B0B20 -- placement copy of LEVEL_01_19DA18.c: applies six slot settings, then refreshes the object's handle. */
typedef struct Obj {
    char pad0[0x5D0];
    int handle;
} Obj;

typedef struct Cfg {
    char pad0[0x854];
    unsigned char slot[6];
} Cfg;

extern Cfg *D_0020C62C;
extern int D_00224378[];

extern void func_0386B0(Obj *o, int i);
extern void func_038728(Obj *o, int i, int v);
extern int func_000A80(void);
extern void func_0008F8(int h, int a);
extern void func_1B0AE8(Obj *o);
extern int func_0272E8(int a, int b);
extern void func_03A2D8(int a);

void func_1B0B20(Obj *o, int flag, int arg)
{
    unsigned int i;
    int h;

    for (i = 0; i < 6; i++) {
        unsigned char s = D_0020C62C->slot[i];
        if (s == 0) {
            func_0386B0(o, i);
        } else {
            func_038728(o, i, D_00224378[s]);
        }
    }
    h = func_000A80();
    o->handle = h;
    if (flag != 0) {
        if (h != 0) {
            func_0008F8(h, arg);
        }
    }
    func_1B0AE8(o);
    if (func_0272E8(0x9B, 0xFF) != 0) {
        func_03A2D8(0);
    }
}
