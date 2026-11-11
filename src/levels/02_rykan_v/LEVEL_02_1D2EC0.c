/* LEVEL_02:0x1D2EC0 -- forwards its three arguments to the helper together with the object's field. */
extern void func_033018(int a, int b, char *c, int d);

void func_1D2EC0(int a, int b, char *c)
{
    func_033018(a, b, c, *(int *)(c + 0x54));
}
