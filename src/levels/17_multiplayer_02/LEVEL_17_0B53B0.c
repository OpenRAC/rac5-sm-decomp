/* LEVEL_17:0x0B53B0 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_1112C0(struct Obj *);
extern int D_001A2284;

void func_0B53B0(struct Obj *o)
{
    func_1112C0(o);
    D_001A2284 = 0;
}
