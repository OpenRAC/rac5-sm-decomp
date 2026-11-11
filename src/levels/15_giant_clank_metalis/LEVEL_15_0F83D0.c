/* LEVEL_15:0x0F83D0 -- runs the shared step on every object of the chain and then points a global at a static table. */
typedef struct Obj {
    char pad00[0x44];
    struct Obj *first;
    char pad48[0xD0];
    struct Obj *next;
} Obj;

extern char D_001838B0[];
extern char *D_0014AEF4;
extern void func_13B2E8(Obj *obj);

void func_0F83D0(Obj *o)
{
    Obj *p;

    for (p = o->first; p != 0; p = p->next) {
        func_13B2E8(p);
    }
    D_0014AEF4 = D_001838B0;
}
