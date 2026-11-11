/* LEVEL_17:0x14E890 -- applies gravity and velocity to an object, realigning it first when tilted. */
typedef struct {
    char pad0[8];
    float vel[3];
    float pad14[6];
    float tilt;
} Phys;

typedef struct {
    char pad0[0x30];
    float pos[3];
    char pad3C[0x1C];
    Phys *phys;
} Obj;

extern void func_102ED0(float *out, float *src, float t);
extern void func_103708(Obj *a, Obj *b, float *c);
extern int func_14E7A8(Obj *o);

int func_14E890(Obj *o, float dt)
{
    float v[12];
    float *vel;
    float *pos;
    Phys *p;

    p = o->phys;
    if (__builtin_fabsf(p->tilt) > 0.0001f) {
        func_102ED0(v, (float *)((char *)p + 0x14), p->tilt);
        func_103708(o, o, v);
    }
    p->vel[1] = p->vel[1] + dt * -9.8f;
    o->pos[0] = o->pos[0] + p->vel[0] * dt;
    vel = p->vel;
    pos = o->pos;
    pos[1] = pos[1] + vel[1] * dt;
    pos[2] = pos[2] + vel[2] * dt;
    return func_14E7A8(o) != 0;
}
