/* LEVEL_23:0x17CF98 -- placement copy of LEVEL_22_1302B8.c: calls two helpers, optionally calls a float helper, then decrements a float field and calls a final helper when it reaches zero. */

extern void func_0B30D0(int a0);
extern void func_09CD40(int a0, unsigned int a1, int a2, int a3, int a4, int a5);
extern void func_05ADA8(float f0);
extern void func_17CAE0(char *a0, unsigned int a1, unsigned int a2);

void func_17CF98(char *a0)
{
    char *s1;
    float x;

    s1 = *(char **)(a0 + 0x58);
    func_0B30D0(22);
    func_09CD40(0, 0xFF000000u, 32, 32, 30, 0);
    if (((unsigned int)*(unsigned char *)(s1 + 0xAC) - 2) < 2) {
        func_05ADA8(0.0f);
    }
    x = *(float *)(a0 + 0x70) - 1.0f;
    *(float *)(a0 + 0x70) = x;
    if (x == 0.0f) {
        func_17CAE0(a0, *(unsigned char *)(a0 + 0x45), *(unsigned char *)(s1 + 0xAC));
    }
}
