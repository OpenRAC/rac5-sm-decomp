/* LEVEL_05:0x0C7360 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_001EFF1C;
extern Cfg *D_001E332C;
extern void func_130FF0(struct Obj *p);
extern void func_12E988(int value);
extern int func_12F188(int v);
extern int func_12EE30(void *arg);

void func_0C7360(struct Obj *p)
{
    func_130FF0(p);
    func_12E988(0);
    func_12F188(D_001EFF1C);
    func_12EE30(D_001E332C->w3C);
}
