/* LEVEL_19:0x0B7300 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_001AFD94;
extern Cfg *D_001A2C34;
extern void func_1123E8(struct Obj *p);
extern void func_110438(int value);
extern int func_110C20(int v);
extern int func_1108C0(void *arg);

void func_0B7300(struct Obj *p)
{
    func_1123E8(p);
    func_110438(0);
    func_110C20(D_001AFD94);
    func_1108C0(D_001A2C34->w3C);
}
