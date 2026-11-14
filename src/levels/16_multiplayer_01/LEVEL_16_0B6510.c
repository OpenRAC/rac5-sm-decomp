/* LEVEL_16:0x0B6510 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_001AEC24;

extern int func_0ABF08(int a0);
extern void func_111E40(struct Obj *o);

void func_0B6510(struct Obj *o)
{
    if (D_001AEC24 != 0) {
        func_0ABF08(D_001AEC24);
        D_001AEC24 = 0;
    } else {
        func_0ABF08(6);
    }
    func_111E40(o);
}
