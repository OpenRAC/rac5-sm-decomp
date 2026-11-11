/* LEVEL_10:0x1735A0 -- counts a fade timer down, pulses a packed colour from it and the swinging angle, and wraps that angle into range. */

struct Sub1735A0 {
    char pad0[0x64];
    int flags;
    unsigned int color;
};

struct Obj1735A0 {
    struct Sub1735A0 *sub;
    char pad4[0x34];
    float f38;
    float f3C;
};

extern float cosf(float x);

void func_1735A0(struct Obj1735A0 *o)
{
    float t;
    float ang;
    float a;
    int c0;
    int c1;
    unsigned int col;
    struct Sub1735A0 *s;

    t = o->f38;
    s = o->sub;
    if (0.0f < t) {
        ang = o->f3C;
        a = t * t * (cosf(ang) * 0.5f + 0.5f);
        s->flags |= 0x40;
        c1 = (int)((1.0f - a) * 255.0f + a * 255.0f);
        c0 = (int)((1.0f - a) * 255.0f + a * 0.0f);
        col = (c1 << 24) | (c0 << 16);
        col |= (c0 << 8);
        col |= c1;
        s->color = col;
        o->f38 = t - 0.1666666716337204f;
        if (3.1415927410125732f < ang) {
            ang -= 6.2831854820251465f;
        } else if (ang < -3.1415927410125732f) {
            ang += 6.2831854820251465f;
        }
        o->f3C = ang;
    } else {
        s->color = 0xFFFFFFFF;
        s->flags &= ~0x40;
    }
}
