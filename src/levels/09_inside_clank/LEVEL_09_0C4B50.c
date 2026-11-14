/* LEVEL_09:0x0C4B50 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_001EA9AC;

extern int func_0B9D30(int a0);
extern void func_12E708(struct Obj *o);

void func_0C4B50(struct Obj *o)
{
    if (D_001EA9AC != 0) {
        func_0B9D30(D_001EA9AC);
        D_001EA9AC = 0;
    } else {
        func_0B9D30(6);
    }
    func_12E708(o);
}
