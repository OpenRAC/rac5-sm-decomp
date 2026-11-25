/* LEVEL_10:0x0C8640 -- placement copy of FRONTEND_0175B0.c: placement copy of LEVEL_01_0C7200.c: runs the object's follow-up routine and clears a status word. */
struct Obj;
extern void func_1334F8(struct Obj *);
extern int D_00209C0C;

void func_0C8640(struct Obj *o)
{
    func_1334F8(o);
    D_00209C0C = 0;
}
