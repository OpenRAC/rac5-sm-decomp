/* LEVEL_08:0x0D2128 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_146BB0(struct Obj *);
extern int D_00249ACC;

void func_0D2128(struct Obj *o)
{
    func_146BB0(o);
    D_00249ACC = 0;
}
