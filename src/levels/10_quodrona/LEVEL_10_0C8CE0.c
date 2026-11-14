/* LEVEL_10:0x0C8CE0 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_00209BAC;

extern int func_0BDDD0(int a0);
extern void func_1335F0(struct Obj *o);

void func_0C8CE0(struct Obj *o)
{
    if (D_00209BAC != 0) {
        func_0BDDD0(D_00209BAC);
        D_00209BAC = 0;
    } else {
        func_0BDDD0(6);
    }
    func_1335F0(o);
}
