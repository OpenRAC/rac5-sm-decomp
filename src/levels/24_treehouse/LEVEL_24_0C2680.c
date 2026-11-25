/* LEVEL_24:0x0C2680 -- placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_001D181C;
extern Cfg *D_001C4C2C;
extern void func_12B178(struct Obj *p);
extern void func_128B10(int value);
extern int func_129310(int v);
extern int func_128FB8(void *arg);

void func_0C2680(struct Obj *p)
{
    func_12B178(p);
    func_128B10(0);
    func_129310(D_001D181C);
    func_128FB8(D_001C4C2C->w3C);
}
