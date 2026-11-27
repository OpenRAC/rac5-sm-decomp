/* LEVEL_04:0x195528 -- elapsed ticks since a scaled float stamp, as an unsigned float clamped at zero, reduced modulo 62.52. */
struct Sub {
    float f00;
};
struct Obj {
    unsigned char pad00[0x54];
    struct Sub *p54;
};
extern int D_0020D138;

float func_195528(struct Obj *o)
{
    float f;
    float m;

    m = 62.52000045776367f;
    f = (float)(unsigned int)(D_0020D138 - (int)(o->p54->f00 * 30.0f));
    if (f < 0.0f)
        f = 0.0f;
    return f - m * (float)(int)(f / m);
}
