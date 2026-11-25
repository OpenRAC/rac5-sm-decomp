/* LEVEL_22:0x0B5A60 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_10CB80(struct Obj *p);
extern int D_0015FFAC;

void func_0B5A60(struct Obj *o)
{
    ((void (*)(struct Obj *))func_10CB80)(o);
    D_0015FFAC = 0;
}
