/* LEVEL_16:0x0B7A28 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_001AEC14;
extern Cfg *D_001A1AB4;
extern void func_111D48(struct Obj *p);
extern void func_10FD98(int value);
extern int func_110580(int v);
extern int func_110220(void *arg);

void func_0B7A28(struct Obj *p)
{
    func_111D48(p);
    func_10FD98(0);
    func_110580(D_001AEC14);
    func_110220(D_001A1AB4->w3C);
}
