/* LEVEL_06:0x0C1B00 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_12BD48(struct Obj *);
extern int D_001EFB0C;

void func_0C1B00(struct Obj *o)
{
    func_12BD48(o);
    D_001EFB0C = 0;
}
