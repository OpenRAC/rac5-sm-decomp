/* LEVEL_03:0x0C6FE8 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_133A40(struct Obj *);
extern int D_0021928C;

void func_0C6FE8(struct Obj *o)
{
    func_133A40(o);
    D_0021928C = 0;
}
