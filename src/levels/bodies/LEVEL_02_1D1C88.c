/* LEVEL_02:0x1D1C88 -- finishes the current shared object unless its kind is 7 or 8, then makes the given object current and processes it. */

struct Obj1D1C88 {
    char pad00[0x45];
    unsigned char u45;
};

extern struct Obj1D1C88 *D_0021DE0C;
extern void func_1D2468(struct Obj1D1C88 *o, int k, int n);

void func_1D1C88(struct Obj1D1C88 *x)
{
    if (D_0021DE0C != 0) {
        if (D_0021DE0C->u45 != 7) {
            if (D_0021DE0C->u45 != 8) {
                func_1D2468(D_0021DE0C, D_0021DE0C->u45, 11);
            }
        }
    }
    D_0021DE0C = x;
    func_1D2468(x, x->u45, 2);
}
