/* LEVEL_17:0x0B6F68 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_001A2214;
extern Cfg *D_001950B4;
extern void func_1112C0(struct Obj *p);
extern void func_10F310(int value);
extern int func_10FAF8(int v);
extern int func_10F798(void *arg);

void func_0B6F68(struct Obj *p)
{
    func_1112C0(p);
    func_10F310(0);
    func_10FAF8(D_001A2214);
    func_10F798(D_001950B4->w3C);
}
