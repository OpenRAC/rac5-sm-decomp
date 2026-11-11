/* LEVEL_04:0x1A95C8 -- placement copy of LEVEL_01_19DA18.c: applies six slot settings, then refreshes the object's handle. */
typedef struct Obj {
    char pad0[0x5D0];
    int handle;
} Obj;

typedef struct Cfg {
    char pad0[0x854];
    unsigned char slot[6];
} Cfg;

extern Cfg *D_0020D12C;
extern int D_00224DF8[];

extern void func_03BAB8(Obj *o, int i);
extern void func_03BB30(Obj *o, int i, int v);
extern int func_000888(void);
extern void func_000700(int h, int a);
extern void func_1A9590(Obj *o);
extern int func_027098(int a, int b);
extern void func_03DA38(int a);

void func_1A95C8(Obj *o, int flag, int arg)
{
    unsigned int i;
    int h;

    for (i = 0; i < 6; i++) {
        unsigned char s = D_0020D12C->slot[i];
        if (s == 0) {
            func_03BAB8(o, i);
        } else {
            func_03BB30(o, i, D_00224DF8[s]);
        }
    }
    h = func_000888();
    o->handle = h;
    if (flag != 0) {
        if (h != 0) {
            func_000700(h, arg);
        }
    }
    func_1A9590(o);
    if (func_027098(0x9B, 0xFF) != 0) {
        func_03DA38(0);
    }
}
