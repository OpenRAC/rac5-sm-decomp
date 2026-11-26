/* LEVEL_10:0x0C89F0 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_133530(struct Obj *p);
extern int D_00209C2C;

void func_0C89F0(struct Obj *o)
{
    ((void (*)(struct Obj *))func_133530)(o);
    D_00209C2C = 0;
}
