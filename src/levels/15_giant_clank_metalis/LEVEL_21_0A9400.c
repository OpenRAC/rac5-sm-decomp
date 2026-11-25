/* LEVEL_21:0x0A9400 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_0015581C;
extern Cfg *D_00148C2C;
extern void func_0F4540(struct Obj *p);
extern void func_0F1ED8(int value);
extern int func_0F26D8(int v);
extern int func_0F2380(void *arg);

void func_0A9400(struct Obj *p)
{
    func_0F4540(p);
    func_0F1ED8(0);
    func_0F26D8(D_0015581C);
    func_0F2380(D_00148C2C->w3C);
}
