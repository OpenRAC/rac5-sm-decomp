/* LEVEL_01:0x1A5DE0 -- sets a flag byte, seeds a random timer, then resets the paired state. */

extern int rand(void);

void func_1A5DE0(unsigned char *a0)
{
    unsigned char *s1;
    int r;

    s1 = *(unsigned char **)(a0 + 0x54);
    a0[0x45] = 1;
    r = rand();
    *(float *)(a0 + 0x70) = (float)r * 4.6566128730773926e-10f + 1.0f;
    *(unsigned int *)(s1 + 0x50) = 0;
    *(float *)(s1 + 0x54) = *(float *)(a0 + 0x70) / 30.0f;
    *(float *)(s1 + 0x58) = 1.0f;
}
