/* LEVEL_22:0x0B5D50 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_0015FF2C;

extern int func_0AAF30(int a0);
extern void func_10CC40(struct Obj *o);

void func_0B5D50(struct Obj *o)
{
    if (D_0015FF2C != 0) {
        func_0AAF30(D_0015FF2C);
        D_0015FF2C = 0;
    } else {
        func_0AAF30(6);
    }
    func_10CC40(o);
}
