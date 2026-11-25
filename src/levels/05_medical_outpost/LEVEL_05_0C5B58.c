/* LEVEL_05:0x0C5B58 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_131028(struct Obj *p);
extern int D_001EFFAC;

void func_0C5B58(struct Obj *o)
{
    ((void (*)(struct Obj *))func_131028)(o);
    D_001EFFAC = 0;
}
