/* LEVEL_20:0x0A03A0 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_0E4B30(struct Obj *);
extern int D_00111364;

void func_0A03A0(struct Obj *o)
{
    func_0E4B30(o);
    D_00111364 = 0;
}
