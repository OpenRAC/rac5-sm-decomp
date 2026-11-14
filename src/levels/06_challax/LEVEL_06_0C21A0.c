/* LEVEL_06:0x0C21A0 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_001EFAAC;

extern int func_0B7380(int a0);
extern void func_12BE40(struct Obj *o);

void func_0C21A0(struct Obj *o)
{
    if (D_001EFAAC != 0) {
        func_0B7380(D_001EFAAC);
        D_001EFAAC = 0;
    } else {
        func_0B7380(6);
    }
    func_12BE40(o);
}
