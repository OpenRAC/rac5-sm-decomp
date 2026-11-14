/* LEVEL_04:0x0CD0B8 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_0021A06C;

extern int func_0C2298(int a0);
extern void func_141BF0(struct Obj *o);

void func_0CD0B8(struct Obj *o)
{
    if (D_0021A06C != 0) {
        func_0C2298(D_0021A06C);
        D_0021A06C = 0;
    } else {
        func_0C2298(6);
    }
    func_141BF0(o);
}
