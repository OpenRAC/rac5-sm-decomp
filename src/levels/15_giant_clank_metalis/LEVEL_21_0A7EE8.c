/* LEVEL_21:0x0A7EE8 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_0015582C;

extern int func_09D0C8(int a0);
extern void func_0F4638(struct Obj *o);

void func_0A7EE8(struct Obj *o)
{
    if (D_0015582C != 0) {
        func_09D0C8(D_0015582C);
        D_0015582C = 0;
    } else {
        func_09D0C8(6);
    }
    func_0F4638(o);
}
