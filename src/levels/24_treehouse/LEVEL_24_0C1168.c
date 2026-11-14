/* LEVEL_24:0x0C1168 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_001D182C;

extern int func_0B6348(int a0);
extern void func_12B270(struct Obj *o);

void func_0C1168(struct Obj *o)
{
    if (D_001D182C != 0) {
        func_0B6348(D_001D182C);
        D_001D182C = 0;
    } else {
        func_0B6348(6);
    }
    func_12B270(o);
}
