/* LEVEL_19:0x149E40 -- decreases a timer by the given amount, clamps at zero, and triggers an update when it reaches zero. */

extern void func_14A338(unsigned char *o);
extern void func_14A438(unsigned char *o, unsigned char *p, int z, unsigned int c);

void func_149E40(unsigned char *a0, float dt)
{
    unsigned char *s0;
    float zero;

    zero = 0.0f;
    s0 = *(unsigned char **)(a0 + 0x58);
    *(float *)(s0 + 0x20) = *(float *)(s0 + 0x20) - dt;
    if (*(float *)(s0 + 0x20) < zero) {
        *(float *)(s0 + 0x20) = zero;
    }
    if (*(float *)(s0 + 0x20) == zero) {
        func_14A338(a0);
        func_14A438(a0, s0[0x1C] ? s0 + 0x10 : 0, 0, s0[0x24]);
    }
}
