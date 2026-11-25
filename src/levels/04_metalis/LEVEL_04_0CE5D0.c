/* LEVEL_04:0x0CE5D0 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_0021A05C;
extern Cfg *D_0020D12C;
extern void func_141AF8(struct Obj *p);
extern void func_13F490(int value);
extern int func_13FC90(int v);
extern int func_13F938(void *arg);

void func_0CE5D0(struct Obj *p)
{
    func_141AF8(p);
    func_13F490(0);
    func_13FC90(D_0021A05C);
    func_13F938(D_0020D12C->w3C);
}
