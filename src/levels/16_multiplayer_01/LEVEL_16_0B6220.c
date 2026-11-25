/* LEVEL_16:0x0B6220 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_111D80(struct Obj *p);
extern int D_001AECA4;

void func_0B6220(struct Obj *o)
{
    ((void (*)(struct Obj *))func_111D80)(o);
    D_001AECA4 = 0;
}
