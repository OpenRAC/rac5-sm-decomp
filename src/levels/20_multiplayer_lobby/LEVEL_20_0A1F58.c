/* LEVEL_20:0x0A1F58 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_001112F4;
extern Cfg *D_00104194;
extern void func_0E4B30(struct Obj *p);
extern void func_0E2B80(int value);
extern int func_0E3368(int v);
extern int func_0E3008(void *arg);

void func_0A1F58(struct Obj *p)
{
    func_0E4B30(p);
    func_0E2B80(0);
    func_0E3368(D_001112F4);
    func_0E3008(D_00104194->w3C);
}
