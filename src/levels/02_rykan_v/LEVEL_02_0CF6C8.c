/* LEVEL_02:0x0CF6C8 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_00215B5C;
extern Cfg *D_00208C2C;
extern void func_13BA28(struct Obj *p);
extern void func_1393C0(int value);
extern int func_139BC0(int v);
extern int func_139868(void *arg);

void func_0CF6C8(struct Obj *p)
{
    func_13BA28(p);
    func_1393C0(0);
    func_139BC0(D_00215B5C);
    func_139868(D_00208C2C->w3C);
}
