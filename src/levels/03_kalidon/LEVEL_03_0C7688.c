/* LEVEL_03:0x0C7688 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_0021922C;

extern int func_0BC868(int a0);
extern void func_133B38(struct Obj *o);

void func_0C7688(struct Obj *o)
{
    if (D_0021922C != 0) {
        func_0BC868(D_0021922C);
        D_0021922C = 0;
    } else {
        func_0BC868(6);
    }
    func_133B38(o);
}
