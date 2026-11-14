/* LEVEL_15:0x113B08 -- advances the object's position by its velocity, copies it, rebuilds the transform, scales it uniformly and flips the step sign. */
typedef struct {
    char pad_00[0x6C];
    float vel[3];
    float dt;
    char pad_7C[0xA0 - 0x7C];
    float prev[3];
    char pad_AC[0x22C - 0xAC];
    float pos[3];
    char pad_238[0x244 - 0x238];
    float scale;
} Obj;

extern void func_0EC3A0(float *buf, float *b, float *a);
extern void func_0ECE10(int flag, float *v, float m0, float m1, float m2);

static inline void AddScaled3(float *p, float *v, float s)
{
    p[0] += v[0] * s;
    p[1] += v[1] * s;
    p[2] += v[2] * s;
}

static inline void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_113B08(Obj *o)
{
    AddScaled3(o->pos, o->vel, o->dt);
    Copy3(o->prev, o->pos);
    func_0EC3A0((float *)((char *)o + 0xDC), (float *)((char *)o + 0xAC), (float *)((char *)o + 0x7C));
    func_0ECE10(0, (float *)((char *)o + 0xDC), o->scale, o->scale, o->scale);
    o->dt = -o->dt;
}
