/* LEVEL_18:0x0B6A00 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_001B0094;
extern Cfg *D_001A2F34;
extern void func_1109F8(struct Obj *p);
extern void func_10EA48(int value);
extern int func_10F230(int v);
extern int func_10EED0(void *arg);

void func_0B6A00(struct Obj *p)
{
    func_1109F8(p);
    func_10EA48(0);
    func_10F230(D_001B0094);
    func_10EED0(D_001A2F34->w3C);
}
