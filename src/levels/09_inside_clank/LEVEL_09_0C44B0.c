/* LEVEL_09:0x0C44B0 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_12E610(struct Obj *);
extern int D_001EAA0C;

void func_0C44B0(struct Obj *o)
{
    func_12E610(o);
    D_001EAA0C = 0;
}
