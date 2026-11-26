/* LEVEL_01:0x0C75B0 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_1356B0(struct Obj *p);
extern int D_00200C2C;

void func_0C75B0(struct Obj *o)
{
    ((void (*)(struct Obj *))func_1356B0)(o);
    D_00200C2C = 0;
}
