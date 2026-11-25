/* LEVEL_03:0x0C8BA0 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_0021921C;
extern Cfg *D_0020C62C;
extern void func_133A40(struct Obj *p);
extern void func_1313D8(int value);
extern int func_131BD8(int v);
extern int func_131880(void *arg);

void func_0C8BA0(struct Obj *p)
{
    func_133A40(p);
    func_1313D8(0);
    func_131BD8(D_0021921C);
    func_131880(D_0020C62C->w3C);
}
