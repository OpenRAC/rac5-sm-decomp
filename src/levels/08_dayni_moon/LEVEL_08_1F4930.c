/* LEVEL_08:0x1F4930 -- when the probe succeeds, copies the start point to the output, builds the end point a double step along the actor's direction and hands both to the shared follow-up; reports whether it ran. */
struct Actor {
    char pad00[0x20];
    float d[3];
};

extern int func_08A488(float *a, struct Actor *o);
extern void func_12BAA0(float *a, float *out, float *v);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void MulAdd3(float *out, float *a, float *b, float t)
{
    out[0] = a[0] + b[0] * t;
    out[1] = a[1] + b[1] * t;
    out[2] = a[2] + b[2] * t;
}

int func_1F4930(float *a, float *out, struct Actor *o)
{
    float v[3];

    if (func_08A488(a, o) == 0) {
        return 0;
    }
    Copy3(out, a);
    MulAdd3(v, a, o->d, 2.0f);
    func_12BAA0(a, out, v);
    return 1;
}
