/* LEVEL_20:0x0A0A40 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_00111304;

extern int func_096438(int a0);
extern void func_0E4C28(struct Obj *o);

void func_0A0A40(struct Obj *o)
{
    if (D_00111304 != 0) {
        func_096438(D_00111304);
        D_00111304 = 0;
    } else {
        func_096438(6);
    }
    func_0E4C28(o);
}
