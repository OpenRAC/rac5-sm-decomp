/* LEVEL_18:0x0F8ED0 -- a 12-byte block copied from a global onto the
   stack, then one of its words is passed to func_026710. */
typedef struct {
    int i[3];
} L12;

extern L12 D_001CE1D8;
extern void func_026710(int a, int b, int c);

void func_0F8ED0(int p, int q, int index)
{
    L12 local;

    local = D_001CE1D8;
    func_026710(p - 1, q, local.i[index]);
}
