/* LEVEL_09:0x0C4860 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_12E648(struct Obj *p);
extern int D_001EAA2C;

void func_0C4860(struct Obj *o)
{
    ((void (*)(struct Obj *))func_12E648)(o);
    D_001EAA2C = 0;
}
