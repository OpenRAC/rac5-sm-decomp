/* LEVEL_17:0x14F2E8 -- advances the blend fraction by half the step (capped at 1), interpolates the object position between two stored points and marks the object when the blend completes. */
typedef struct State {
    char pad_00[8];
    float from[3];
    char pad_14[0xC];
    float to[3];
    char pad_2C[0xC];
    float t;
} State;

typedef struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[9];
    unsigned char b45;
    char pad_46[0x12];
    State *state;
} Obj;

static __inline__ float *MinPtr(float *a, float *b)
{
    if (*a < *b)
        return a;
    return b;
}

void func_14F2E8(Obj *o, float dt)
{
    State *s = o->state;
    float one;
    float *pt;
    float t;
    float *out;

    pt = &s->t;
    *pt += dt * 0.5f;
    one = 1.0f;
    t = *MinPtr(pt, &one);
    s->t = t;
    out = o->pos;
    out[0] = (s->to[0] - s->from[0]) * t + s->from[0];
    out[1] = (s->to[1] - s->from[1]) * t + s->from[1];
    out[2] = (s->to[2] - s->from[2]) * t + s->from[2];
    if (s->t == 1.0f)
        o->b45 = 3;
}
