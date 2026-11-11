/* LEVEL_05:0x1ADEC8 -- placement copy of LEVEL_02_1D1C88.c: finishes the current shared object unless its kind is 7 or 8, then makes the given object current and processes it. */

struct Obj1D1C88 {
    char pad00[0x45];
    unsigned char u45;
};

extern struct Obj1D1C88 *D_001F7E4C;
extern void func_1AE4D8(struct Obj1D1C88 *o, int k, int n);

void func_1ADEC8(struct Obj1D1C88 *x)
{
    if (D_001F7E4C != 0) {
        if (D_001F7E4C->u45 != 7) {
            if (D_001F7E4C->u45 != 8) {
                func_1AE4D8(D_001F7E4C, D_001F7E4C->u45, 11);
            }
        }
    }
    D_001F7E4C = x;
    func_1AE4D8(x, x->u45, 2);
}
