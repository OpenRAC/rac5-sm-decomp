/* LEVEL_22:0x130510 -- calls two helpers, optionally calls a float helper, then decrements a float field and calls a final helper when it is not positive. */

extern void func_0AA7E0(int a0);
extern void func_0945E0(int a0, unsigned int a1, int a2, int a3, int a4, int a5);
extern void func_0571F8(float f0);
extern void func_12FE00(char *a0, unsigned int a1, unsigned int a2);

void func_130510(char *a0)
{
    char *s0;
    float x;

    s0 = *(char **)(a0 + 0x58);
    func_0AA7E0(22);
    func_0945E0(0, 0xFF000000u, 32, 32, 1, 0);
    if (((unsigned int)*(unsigned char *)(s0 + 0xAC) - 2) < 2) {
        func_0571F8(0.0f);
    }
    x = *(float *)(a0 + 0x70) - 1.0f;
    *(float *)(a0 + 0x70) = x;
    if (x <= 0.0f) {
        func_12FE00(a0, *(unsigned char *)(a0 + 0x45), 8);
    }
}
