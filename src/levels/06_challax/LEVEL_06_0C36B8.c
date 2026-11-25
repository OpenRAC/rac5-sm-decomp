/* LEVEL_06:0x0C36B8 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_001EFA9C;
extern Cfg *D_001E2EAC;
extern void func_12BD48(struct Obj *p);
extern void func_1296E0(int value);
extern int func_129EE0(int v);
extern int func_129B88(void *arg);

void func_0C36B8(struct Obj *p)
{
    func_12BD48(p);
    func_1296E0(0);
    func_129EE0(D_001EFA9C);
    func_129B88(D_001E2EAC->w3C);
}
