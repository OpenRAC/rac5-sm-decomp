/* LEVEL_15:0x112648 -- stores a guarded reciprocal of one field and a second guarded reciprocal of another. */
struct P112648 {
    char pad0[4];
    float f04;
    char pad08[0x1C - 0x08];
    float f1C;
    char pad20[0x30 - 0x20];
    float f30;
    float f34;
};

static __inline__ float recip_guard(float v)
{
    return (v < 0.0010000000474974513f) ? 0.0f : 1.0f / v;
}

void func_112648(struct P112648 *p)
{
    p->f30 = recip_guard(p->f1C);
    p->f34 = recip_guard(p->f04);
}
