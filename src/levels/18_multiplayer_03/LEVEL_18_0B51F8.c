/* LEVEL_18:0x0B51F8 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern int func_110A30(struct Obj *p);
extern int D_001B0124;

void func_0B51F8(struct Obj *o)
{
    ((void (*)(struct Obj *))func_110A30)(o);
    D_001B0124 = 0;
}
