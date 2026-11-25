/* LEVEL_18:0x0B4E48 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_1109F8(struct Obj *);
extern int D_001B0104;

void func_0B4E48(struct Obj *o)
{
    func_1109F8(o);
    D_001B0104 = 0;
}
