/* LEVEL_22:0x0F4468 -- a 12-byte block copied from a global onto the
   stack, then one of its words is passed to func_023CA0. */
typedef struct {
    int i[3];
} L12;

extern L12 D_00175218;
extern void func_023CA0(int a, int b, int c);

void func_0F4468(int p, int q, int index)
{
    L12 local;

    local = D_00175218;
    func_023CA0(p - 1, q, local.i[index]);
}
