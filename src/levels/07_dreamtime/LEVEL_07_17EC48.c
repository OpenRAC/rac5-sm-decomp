/* LEVEL_07:0x17EC48 -- advances three wrapped rotation angles by their per-frame rates. */
typedef struct Rot {
    char pad0[0x38];
    float rate[3];
    float ang[3];
} Rot;
typedef struct Obj { char pad0[0x54]; Rot *rot; } Obj;

extern float fmodf(float a, float b);

static inline float wrap(float ang, float rate)
{
    float r;

    r = fmodf(ang + rate * 3.1415927410125732f / 180.0f * 0.03333333507180214f, 6.2831854820251465f);
    if (r < -3.1415927410125732f) r += 6.2831854820251465f;
    else if (r >= 3.1415927410125732f) r -= 6.2831854820251465f;
    return r;
}

void func_17EC48(Obj *o)
{
    Rot *e;

    e = o->rot;
    e->ang[0] = wrap(e->ang[0], e->rate[0]);
    e->ang[1] = wrap(e->ang[1], e->rate[1]);
    e->ang[2] = wrap(e->ang[2], e->rate[2]);
}
