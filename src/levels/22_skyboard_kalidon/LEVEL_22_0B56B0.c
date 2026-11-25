/* LEVEL_22:0x0B56B0 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_10CB48(struct Obj *);
extern int D_0015FF8C;

void func_0B56B0(struct Obj *o)
{
    func_10CB48(o);
    D_0015FF8C = 0;
}
