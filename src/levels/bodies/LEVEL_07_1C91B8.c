/* LEVEL_07:0x1C91B8 -- placement copy of LEVEL_02_1D1C88.c: finishes the current shared object unless its kind is 7 or 8, then makes the given object current and processes it. */

struct Obj1D1C88 {
    char pad00[0x45];
    unsigned char u45;
};

extern struct Obj1D1C88 *D_0021DA5C;
extern void func_1C9998(struct Obj1D1C88 *o, int k, int n);

void func_1C91B8(struct Obj1D1C88 *x)
{
    if (D_0021DA5C != 0) {
        if (D_0021DA5C->u45 != 7) {
            if (D_0021DA5C->u45 != 8) {
                func_1C9998(D_0021DA5C, D_0021DA5C->u45, 11);
            }
        }
    }
    D_0021DA5C = x;
    func_1C9998(x, x->u45, 2);
}
