/* LEVEL_17:0x0B5760 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_1112F8(struct Obj *p);
extern int D_001A22A4;

void func_0B5760(struct Obj *o)
{
    ((void (*)(struct Obj *))func_1112F8)(o);
    D_001A22A4 = 0;
}
