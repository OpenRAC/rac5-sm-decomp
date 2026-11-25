/* LEVEL_05:0x0C57A8 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_130FF0(struct Obj *);
extern int D_001EFF8C;

void func_0C57A8(struct Obj *o)
{
    func_130FF0(o);
    D_001EFF8C = 0;
}
