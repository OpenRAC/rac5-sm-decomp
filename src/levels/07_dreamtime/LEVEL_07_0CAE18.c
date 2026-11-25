/* LEVEL_07:0x0CAE18 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_00214E9C;
extern Cfg *D_002082AC;
extern void func_138678(struct Obj *p);
extern void func_136010(int value);
extern int func_136810(int v);
extern int func_1364B8(void *arg);

void func_0CAE18(struct Obj *p)
{
    func_138678(p);
    func_136010(0);
    func_136810(D_00214E9C);
    func_1364B8(D_002082AC->w3C);
}
