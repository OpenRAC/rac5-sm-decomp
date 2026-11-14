/* LEVEL_02:0x0CE1B0 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_00215B6C;

extern int func_0C3390(int a0);
extern void func_13BB20(struct Obj *o);

void func_0CE1B0(struct Obj *o)
{
    if (D_00215B6C != 0) {
        func_0C3390(D_00215B6C);
        D_00215B6C = 0;
    } else {
        func_0C3390(6);
    }
    func_13BB20(o);
}
