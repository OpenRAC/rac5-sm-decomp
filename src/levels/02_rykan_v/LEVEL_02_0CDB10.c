/* LEVEL_02:0x0CDB10 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_13BA28(struct Obj *);
extern int D_00215BCC;

void func_0CDB10(struct Obj *o)
{
    func_13BA28(o);
    D_00215BCC = 0;
}
