/* LEVEL_19:0x0B5AF8 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_112420(struct Obj *p);
extern int D_001AFE24;

void func_0B5AF8(struct Obj *o)
{
    ((void (*)(struct Obj *))func_112420)(o);
    D_001AFE24 = 0;
}
