/* LEVEL_05:0x0C5E48 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_001EFF2C;

extern int func_0BB028(int a0);
extern void func_1310E8(struct Obj *o);

void func_0C5E48(struct Obj *o)
{
    if (D_001EFF2C != 0) {
        func_0BB028(D_001EFF2C);
        D_001EFF2C = 0;
    } else {
        func_0BB028(6);
    }
    func_1310E8(o);
}
