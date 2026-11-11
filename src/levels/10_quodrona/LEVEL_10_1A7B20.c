/* LEVEL_10:0x1A7B20 -- placement copy of LEVEL_01_19DA18.c: applies six slot settings, then refreshes the object's handle. */
typedef struct Obj {
    char pad0[0x5D0];
    int handle;
} Obj;

typedef struct Cfg {
    char pad0[0x854];
    unsigned char slot[6];
} Cfg;

extern Cfg *D_001FCFAC;
extern int D_002143F8[];

extern void func_038C28(Obj *o, int i);
extern void func_038CA0(Obj *o, int i, int v);
extern int func_000810(void);
extern void func_000688(int h, int a);
extern void func_1A7AE8(Obj *o);
extern int func_026CE8(int a, int b);
extern void func_03A720(int a);

void func_1A7B20(Obj *o, int flag, int arg)
{
    unsigned int i;
    int h;

    for (i = 0; i < 6; i++) {
        unsigned char s = D_001FCFAC->slot[i];
        if (s == 0) {
            func_038C28(o, i);
        } else {
            func_038CA0(o, i, D_002143F8[s]);
        }
    }
    h = func_000810();
    o->handle = h;
    if (flag != 0) {
        if (h != 0) {
            func_000688(h, arg);
        }
    }
    func_1A7AE8(o);
    if (func_026CE8(0x9B, 0xFF) != 0) {
        func_03A720(0);
    }
}
