/* LEVEL_18:0x0B54E8 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_001B00A4;

extern int func_0AAEE0(int a0);
extern void func_110AF0(struct Obj *o);

void func_0B54E8(struct Obj *o)
{
    if (D_001B00A4 != 0) {
        func_0AAEE0(D_001B00A4);
        D_001B00A4 = 0;
    } else {
        func_0AAEE0(6);
    }
    func_110AF0(o);
}
