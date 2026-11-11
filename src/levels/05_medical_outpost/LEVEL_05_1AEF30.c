/* LEVEL_05:0x1AEF30 -- placement copy of LEVEL_02_1D2EC0.c: forwards its three arguments to the helper together with the object's field. */
extern void func_02F2C8(int a, int b, char *c, int d);

void func_1AEF30(int a, int b, char *c)
{
    func_02F2C8(a, b, c, *(int *)(c + 0x54));
}
