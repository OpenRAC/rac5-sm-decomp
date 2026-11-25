/* LEVEL_19:0x0B5748 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_1123E8(struct Obj *);
extern int D_001AFE04;

void func_0B5748(struct Obj *o)
{
    func_1123E8(o);
    D_001AFE04 = 0;
}
