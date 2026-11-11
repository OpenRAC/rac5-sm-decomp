/* LEVEL_15:0x105700 -- subtracts the source's step from the owner's first value and 0.15 times the step from the second one, clamping the second at zero. */
typedef struct Owner {
    char pad0[0x26C];
    float a;
    float b;
} Owner;

extern float fabsf(float x);

void func_105700(char *member, int a1, int a2, float *src)
{
    Owner *o = (Owner *)(member - 0x434);
    float v;

    o->a = o->a - src[1];
    v = o->b - src[1] * 0.15f;
    o->b = (v + fabsf(v)) * 0.5f;
}
