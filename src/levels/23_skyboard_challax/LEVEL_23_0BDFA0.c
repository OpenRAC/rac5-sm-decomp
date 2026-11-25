/* LEVEL_23:0x0BDFA0 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_126DF0(struct Obj *);
extern int D_001D400C;

void func_0BDFA0(struct Obj *o)
{
    func_126DF0(o);
    D_001D400C = 0;
}
