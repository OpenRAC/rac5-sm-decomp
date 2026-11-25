/* LEVEL_04:0x0CCDC8 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_141B30(struct Obj *p);
extern int D_0021A0EC;

void func_0CCDC8(struct Obj *o)
{
    ((void (*)(struct Obj *))func_141B30)(o);
    D_0021A0EC = 0;
}
