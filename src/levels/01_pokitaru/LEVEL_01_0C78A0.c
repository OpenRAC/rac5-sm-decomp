/* LEVEL_01:0x0C78A0 -- releases the pending handle (or the default one) and runs the shared step. */
struct Obj;

extern int D_00200BAC;

extern int func_0BCA80(int a0);
extern void func_135770(struct Obj *o);

void func_0C78A0(struct Obj *o)
{
    if (D_00200BAC != 0) {
        func_0BCA80(D_00200BAC);
        D_00200BAC = 0;
    } else {
        func_0BCA80(6);
    }
    func_135770(o);
}
