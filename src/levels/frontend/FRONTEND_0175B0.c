/* FRONTEND:0x0175B0 -- placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_022970(struct Obj *p);
extern int D_000304AC;

void func_0175B0(struct Obj *o)
{
    ((void (*)(struct Obj *))func_022970)(o);
    D_000304AC = 0;
}
