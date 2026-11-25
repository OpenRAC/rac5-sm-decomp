/* LEVEL_16:0x0B5E70 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_111D48(struct Obj *);
extern int D_001AEC84;

void func_0B5E70(struct Obj *o)
{
    func_111D48(o);
    D_001AEC84 = 0;
}
