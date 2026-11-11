/* LEVEL_18:0x14F308 -- placement copy of LEVEL_16_150B90.c: integrates gravity and velocity for one step, with an early-out check. */
struct Vec3 {
    float x, y, z;
};
struct Vel {
    char pad[8];
    struct Vec3 v;
    char pad14[0xC];
    float f20;
};
struct Obj {
    char pad[0x30];
    struct Vec3 pos;
    char pad3C[0x1C];
    struct Vel *vel;
};
extern float fabsf(float x);
extern int func_014D70(int a, float y);
extern void func_14EA50(struct Obj *o, int a, int b);
extern void func_102188(float *out, char *in, float x);
extern void func_1029C0(struct Obj *a, struct Obj *b, float *c);
extern int func_14F240(struct Obj *o);

static inline void AddScaled(struct Vec3 *d, struct Vec3 *s, float t)
{
    d->x += s->x * t;
    d->y += s->y * t;
    d->z += s->z * t;
}

int func_14F308(struct Obj *o, float dt)
{
    float tmp[12];
    struct Vel *vel = o->vel;
    if (func_014D70(0, o->pos.y)) {
        func_14EA50(o, 0, 1);
        return 0;
    }
    if (fabsf(vel->f20) > 0.0001f) {
        func_102188(tmp, (char *)vel + 0x14, vel->f20);
        func_1029C0(o, o, tmp);
    }
    vel->v.y += dt * -9.8f;
    AddScaled(&o->pos, &vel->v, dt);
    return func_14F240(o) != 0;
}
