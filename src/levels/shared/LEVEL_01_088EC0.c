typedef struct {
    unsigned f00;
    float    f04;
    float    f08;
} T;

void func_088EC0(T *t, unsigned *out, float dt)
{
    unsigned flags = t->f00;
    float c;
    float r;

    if ((flags & 1) == 0)
        return;
    c = t->f04 + dt;
    t->f04 = c;
    if (c >= t->f08) {
        t->f00 = flags & ~1u;
        if (flags & 4) {
            *out = 0u;
            t->f00 &= ~4u;
        } else {
            *(float *)out = -1.0f;
        }
        return;
    }
    r = c / t->f08;
    if (flags & 4)
        *(float *)out = 1.0f - r;
    else
        *(float *)out = r;
}
