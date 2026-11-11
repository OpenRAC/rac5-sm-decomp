/* LEVEL_23:0x17EE08 -- placement copy of LEVEL_01_19DA18.c: applies six slot settings, then refreshes the object's handle. */
typedef struct Obj {
    char pad0[0x5D0];
    int handle;
} Obj;

typedef struct Cfg {
    char pad0[0x854];
    unsigned char slot[6];
} Cfg;

extern Cfg *D_001C73AC;
extern int D_001DE5F8[];

extern void func_0339A0(Obj *o, int i);
extern void func_033A18(Obj *o, int i, int v);
extern int func_000A80(void);
extern void func_0008F8(int h, int a);
extern void func_17EDD0(Obj *o);
extern int func_025160(int a, int b);
extern void func_0354B8(int a);

void func_17EE08(Obj *o, int flag, int arg)
{
    unsigned int i;
    int h;

    for (i = 0; i < 6; i++) {
        unsigned char s = D_001C73AC->slot[i];
        if (s == 0) {
            func_0339A0(o, i);
        } else {
            func_033A18(o, i, D_001DE5F8[s]);
        }
    }
    h = func_000A80();
    o->handle = h;
    if (flag != 0) {
        if (h != 0) {
            func_0008F8(h, arg);
        }
    }
    func_17EDD0(o);
    if (func_025160(0x9B, 0xFF) != 0) {
        func_0354B8(0);
    }
}
