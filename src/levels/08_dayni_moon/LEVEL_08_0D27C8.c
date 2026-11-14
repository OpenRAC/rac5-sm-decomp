/* LEVEL_08:0x0D27C8 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_00249A6C;

extern int func_0C79A8(int a0);
extern void func_146CA8(struct Obj *o);

void func_0D27C8(struct Obj *o)
{
    if (D_00249A6C != 0) {
        func_0C79A8(D_00249A6C);
        D_00249A6C = 0;
    } else {
        func_0C79A8(6);
    }
    func_146CA8(o);
}
