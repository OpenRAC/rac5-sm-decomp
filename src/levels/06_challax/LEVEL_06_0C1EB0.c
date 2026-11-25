/* LEVEL_06:0x0C1EB0 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_12BD80(struct Obj *p);
extern int D_001EFB2C;

void func_0C1EB0(struct Obj *o)
{
    ((void (*)(struct Obj *))func_12BD80)(o);
    D_001EFB2C = 0;
}
