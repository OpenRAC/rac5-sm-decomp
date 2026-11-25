/* LEVEL_15:0x0A7BF8 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_0F4578(struct Obj *p);
extern int D_001558AC;

void func_0A7BF8(struct Obj *o)
{
    ((void (*)(struct Obj *))func_0F4578)(o);
    D_001558AC = 0;
}
