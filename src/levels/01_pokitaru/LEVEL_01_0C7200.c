/* LEVEL_01:0x0C7200 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_135678(struct Obj *);
extern int D_00200C0C;

void func_0C7200(struct Obj *o)
{
    func_135678(o);
    D_00200C0C = 0;
}
