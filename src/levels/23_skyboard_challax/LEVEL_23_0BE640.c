/* LEVEL_23:0x0BE640 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_001D3FAC;

extern int func_0B3820(int a0);
extern void func_126EE8(struct Obj *o);

void func_0BE640(struct Obj *o)
{
    if (D_001D3FAC != 0) {
        func_0B3820(D_001D3FAC);
        D_001D3FAC = 0;
    } else {
        func_0B3820(6);
    }
    func_126EE8(o);
}
