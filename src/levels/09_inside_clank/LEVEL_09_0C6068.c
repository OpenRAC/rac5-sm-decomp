/* LEVEL_09:0x0C6068 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_001EA99C;
extern Cfg *D_001DDDAC;
extern void func_12E610(struct Obj *p);
extern void func_12BFA8(int value);
extern int func_12C7A8(int v);
extern int func_12C450(void *arg);

void func_0C6068(struct Obj *p)
{
    func_12E610(p);
    func_12BFA8(0);
    func_12C7A8(D_001EA99C);
    func_12C450(D_001DDDAC->w3C);
}
