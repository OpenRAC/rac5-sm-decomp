/* LEVEL_16.REL:0x0A1B98 -- variant c: the query helper takes no argument. */
extern void func_09CDF8(int, void *, float);
extern int func_0A0BF0(void);

int func_0A1B98(void)
{
    char a[0x10];
    char b[0x10];
    float z = 0.0f;

    func_09CDF8(0x6C, a, z);
    if (func_0A0BF0() != 0) {
        func_09CDF8(0x6B, b, z);
        return *(int *)(b + 0x0C) - *(int *)(a + 0x0C);
    }
    return 0;
}
