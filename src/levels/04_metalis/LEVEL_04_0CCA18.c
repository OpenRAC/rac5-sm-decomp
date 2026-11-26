/* LEVEL_04:0x0CCA18 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_141AF8(struct Obj *);
extern int D_0021A0CC;

void func_0CCA18(struct Obj *o)
{
    func_141AF8(o);
    D_0021A0CC = 0;
}
