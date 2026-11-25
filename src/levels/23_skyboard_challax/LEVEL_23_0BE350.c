/* LEVEL_23:0x0BE350 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_126E28(struct Obj *p);
extern int D_001D402C;

void func_0BE350(struct Obj *o)
{
    ((void (*)(struct Obj *))func_126E28)(o);
    D_001D402C = 0;
}
