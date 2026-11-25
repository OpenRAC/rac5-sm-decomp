/* LEVEL_24:0x0C0AC8 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_12B178(struct Obj *);
extern int D_001D188C;

void func_0C0AC8(struct Obj *o)
{
    func_12B178(o);
    D_001D188C = 0;
}
