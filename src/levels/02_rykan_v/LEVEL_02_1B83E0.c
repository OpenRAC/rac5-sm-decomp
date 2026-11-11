/* LEVEL_02:0x1B83E0 -- placement copy of LEVEL_01_19DA18.c: applies six slot settings, then refreshes the object's handle. */
typedef struct Obj {
    char pad0[0x5D0];
    int handle;
} Obj;

typedef struct Cfg {
    char pad0[0x854];
    unsigned char slot[6];
} Cfg;

extern Cfg *D_00208C2C;
extern int D_002203F8[];

extern void func_03EF20(Obj *o, int i);
extern void func_03EF98(Obj *o, int i, int v);
extern int func_000A80(void);
extern void func_0008F8(int h, int a);
extern void func_1B83A8(Obj *o);
extern int func_027BF0(int a, int b);
extern void func_040F50(int a);

void func_1B83E0(Obj *o, int flag, int arg)
{
    unsigned int i;
    int h;

    for (i = 0; i < 6; i++) {
        unsigned char s = D_00208C2C->slot[i];
        if (s == 0) {
            func_03EF20(o, i);
        } else {
            func_03EF98(o, i, D_002203F8[s]);
        }
    }
    h = func_000A80();
    o->handle = h;
    if (flag != 0) {
        if (h != 0) {
            func_0008F8(h, arg);
        }
    }
    func_1B83A8(o);
    if (func_027BF0(0x9B, 0xFF) != 0) {
        func_040F50(0);
    }
}
