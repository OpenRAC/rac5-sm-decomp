/* LEVEL_24:0x0C0E78 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_12B1B0(struct Obj *p);
extern int D_001D18AC;

void func_0C0E78(struct Obj *o)
{
    ((void (*)(struct Obj *))func_12B1B0)(o);
    D_001D18AC = 0;
}
