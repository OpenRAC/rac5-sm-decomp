/* LEVEL_08:0x0D24D8 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_146BE8(struct Obj *p);
extern int D_00249AEC;

void func_0D24D8(struct Obj *o)
{
    ((void (*)(struct Obj *))func_146BE8)(o);
    D_00249AEC = 0;
}
