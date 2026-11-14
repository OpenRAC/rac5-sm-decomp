/* LEVEL_07:0x0C9900 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_00214EAC;

extern int func_0BEAE0(int a0);
extern void func_138770(struct Obj *o);

void func_0C9900(struct Obj *o)
{
    if (D_00214EAC != 0) {
        func_0BEAE0(D_00214EAC);
        D_00214EAC = 0;
    } else {
        func_0BEAE0(6);
    }
    func_138770(o);
}
