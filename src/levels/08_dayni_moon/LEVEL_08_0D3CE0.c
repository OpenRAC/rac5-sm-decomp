/* LEVEL_08:0x0D3CE0 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_00249A5C;
extern Cfg *D_0023CB2C;
extern void func_146BB0(struct Obj *p);
extern void func_144548(int value);
extern int func_144D48(int v);
extern int func_1449F0(void *arg);

void func_0D3CE0(struct Obj *p)
{
    func_146BB0(p);
    func_144548(0);
    func_144D48(D_00249A5C);
    func_1449F0(D_0023CB2C->w3C);
}
