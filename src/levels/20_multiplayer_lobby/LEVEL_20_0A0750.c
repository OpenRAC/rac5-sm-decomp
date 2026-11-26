/* LEVEL_20:0x0A0750 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_0E4B68(struct Obj *p);
extern int D_00111384;

void func_0A0750(struct Obj *o)
{
    ((void (*)(struct Obj *))func_0E4B68)(o);
    D_00111384 = 0;
}
