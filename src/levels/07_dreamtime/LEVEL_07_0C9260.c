/* LEVEL_07:0x0C9260 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_138678(struct Obj *);
extern int D_00214F0C;

void func_0C9260(struct Obj *o)
{
    func_138678(o);
    D_00214F0C = 0;
}
