/* LEVEL_08:0x1E8D28 -- placement copy of LEVEL_02_1D2EC0.c: forwards its three arguments to the helper together with the object's field. */
extern void func_032878(int a, int b, char *c, int d);

void func_1E8D28(int a, int b, char *c)
{
    func_032878(a, b, c, *(int *)(c + 0x54));
}
