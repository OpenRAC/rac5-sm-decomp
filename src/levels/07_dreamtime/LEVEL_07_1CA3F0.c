/* LEVEL_07:0x1CA3F0 -- placement copy of LEVEL_02_1D2EC0.c: forwards its three arguments to the helper together with the object's field. */
extern void func_031AD8(int a, int b, char *c, int d);

void func_1CA3F0(int a, int b, char *c)
{
    func_031AD8(a, b, c, *(int *)(c + 0x54));
}
