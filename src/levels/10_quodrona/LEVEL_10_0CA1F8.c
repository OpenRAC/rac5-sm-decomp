/* LEVEL_10:0x0CA1F8 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_00209B9C;
extern Cfg *D_001FCFAC;
extern void func_1334F8(struct Obj *p);
extern void func_130E70(int value);
extern int func_131690(int v);
extern int func_131338(void *arg);

void func_0CA1F8(struct Obj *p)
{
    func_1334F8(p);
    func_130E70(0);
    func_131690(D_00209B9C);
    func_131338(D_001FCFAC->w3C);
}
