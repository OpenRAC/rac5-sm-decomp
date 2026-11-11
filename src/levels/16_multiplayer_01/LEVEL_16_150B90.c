/* LEVEL_16:0x150B90 -- integrates gravity and velocity for one step, with an early-out check. */
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
extern int func_015558(int a, float y);
extern void func_1502D8(struct Obj *o, int a, int b);
extern void func_1038C0(float *out, char *in, float x);
extern void func_1040F8(struct Obj *a, struct Obj *b, float *c);
extern int func_150AC8(struct Obj *o);

static inline void AddScaled(struct Vec3 *d, struct Vec3 *s, float t)
{
    d->x += s->x * t;
    d->y += s->y * t;
    d->z += s->z * t;
}

int func_150B90(struct Obj *o, float dt)
{
    float tmp[12];
    struct Vel *vel = o->vel;
    if (func_015558(0, o->pos.y)) {
        func_1502D8(o, 0, 1);
        return 0;
    }
    if (fabsf(vel->f20) > 0.0001f) {
        func_1038C0(tmp, (char *)vel + 0x14, vel->f20);
        func_1040F8(o, o, tmp);
    }
    vel->v.y += dt * -9.8f;
    AddScaled(&o->pos, &vel->v, dt);
    return func_150AC8(o) != 0;
}
