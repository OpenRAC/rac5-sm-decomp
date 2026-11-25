/* LEVEL_02:0x0CDEC0 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_13BA60(struct Obj *p);
extern int D_00215BEC;

void func_0CDEC0(struct Obj *o)
{
    ((void (*)(struct Obj *))func_13BA60)(o);
    D_00215BEC = 0;
}
