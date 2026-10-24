/* LEVEL_04:1F3068 -- advances the accumulator at +0x70 by the global step and
   reports whether it has grown past five. */
extern float D_0024C12C;
extern void func_07FAE8(void *a0, int a1);

int func_1F3068(char *a0)
{
    float v = *(float *)(a0 + 0x70) + D_0024C12C;

    *(float *)(a0 + 0x70) = v;
    if (v > 5.0f) {
        func_07FAE8(a0, 1);
        return 1;
    }
    return 0;
}
