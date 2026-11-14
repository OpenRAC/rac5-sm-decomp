/* LEVEL_19:0x0B5DE8 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_001AFDA4;

extern int func_0AB7E0(int a0);
extern void func_1124E0(struct Obj *o);

void func_0B5DE8(struct Obj *o)
{
    if (D_001AFDA4 != 0) {
        func_0AB7E0(D_001AFDA4);
        D_001AFDA4 = 0;
    } else {
        func_0AB7E0(6);
    }
    func_1124E0(o);
}
