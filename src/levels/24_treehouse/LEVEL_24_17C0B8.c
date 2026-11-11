/* LEVEL_24:0x17C0B8 -- placement copy of LEVEL_01_19DA18.c: applies six slot settings, then refreshes the object's handle. */
typedef struct Obj {
    char pad0[0x5D0];
    int handle;
} Obj;

typedef struct Cfg {
    char pad0[0x854];
    unsigned char slot[6];
} Cfg;

extern Cfg *D_001C4C2C;
extern int D_001DC1F8[];

extern void func_033568(Obj *o, int i);
extern void func_0335E0(Obj *o, int i, int v);
extern int func_000888(void);
extern void func_000700(int h, int a);
extern void func_17C080(Obj *o);
extern int func_024D38(int a, int b);
extern void func_0350C0(int a);

void func_17C0B8(Obj *o, int flag, int arg)
{
    unsigned int i;
    int h;

    for (i = 0; i < 6; i++) {
        unsigned char s = D_001C4C2C->slot[i];
        if (s == 0) {
            func_033568(o, i);
        } else {
            func_0335E0(o, i, D_001DC1F8[s]);
        }
    }
    h = func_000888();
    o->handle = h;
    if (flag != 0) {
        if (h != 0) {
            func_000700(h, arg);
        }
    }
    func_17C080(o);
    if (func_024D38(0x9B, 0xFF) != 0) {
        func_0350C0(0);
    }
}
