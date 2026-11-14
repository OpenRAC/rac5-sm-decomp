/* LEVEL_17:0x0B5A50 -- placement copy of LEVEL_01_0C78A0.c: releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_001A2224;

extern int func_0AB448(int a0);
extern void func_1113B8(struct Obj *o);

void func_0B5A50(struct Obj *o)
{
    if (D_001A2224 != 0) {
        func_0AB448(D_001A2224);
        D_001A2224 = 0;
    } else {
        func_0AB448(6);
    }
    func_1113B8(o);
}
