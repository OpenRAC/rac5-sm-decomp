/* LEVEL_03:0x0C7398 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_133A78(struct Obj *p);
extern int D_002192AC;

void func_0C7398(struct Obj *o)
{
    ((void (*)(struct Obj *))func_133A78)(o);
    D_002192AC = 0;
}
