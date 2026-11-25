/* LEVEL_07:0x0C9610 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_1386B0(struct Obj *p);
extern int D_00214F2C;

void func_0C9610(struct Obj *o)
{
    ((void (*)(struct Obj *))func_1386B0)(o);
    D_00214F2C = 0;
}
