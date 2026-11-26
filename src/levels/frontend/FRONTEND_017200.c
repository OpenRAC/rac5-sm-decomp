/* FRONTEND:0x017200 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_022938(struct Obj *);
extern int D_0003048C;

void func_017200(struct Obj *o)
{
    func_022938(o);
    D_0003048C = 0;
}
