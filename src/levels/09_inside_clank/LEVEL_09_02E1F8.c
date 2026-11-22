/* LEVEL_09:0x02E1F8 -- placement copy of LEVEL_01_02F398.c: one step of a bouncing motion along y: while airborne it integrates velocity and acceleration, on landing it reflects the velocity with a restitution factor, damps and renormalizes the planar spin vector and either stops (returns 0) or relaunches with a height-scaled timer (returns 1). */
typedef struct Mot {
    float v;
    char pad_04[0xC];
    float spin_x;
    float spin_z;
    float t;
} Mot;

typedef struct Cfg {
    float a;
    char pad_04[8];
    float rest;
    char pad_10[4];
    float damp;
    float stop;
    char pad_1C[0x34];
    float scale;
} Cfg;

extern float sqrtf(float x);
extern float fabsf(float x);

int func_02E1F8(Mot *m, float *pos, Cfg *c)
{
    float t;
    float tn;
    float vy;
    float sz;
    float sx;
    float len;
    float inv;
    float k;
    float x;
    float v;
    float y;
    float a;

    v = m->v;
    y = pos[1];
    a = c->a;
    t = m->t - 1.0f;
    if (0.0f < t) {
        pos[1] = y + v + a * 0.5f;
        m->v = v + a;
        m->t = t;
        return 1;
    }
    tn = t + 1.0f;
    vy = -(v + a * tn) * c->rest;
    pos[1] = y + v * tn + a * 0.5f * tn * tn;
    k = c->damp;
    sz = m->spin_z * k + (1.0f - k);
    sx = m->spin_x * k;
    len = sqrtf(sz * sz + sx * sx);
    inv = 1.0f / len;
    m->spin_z = sz * inv;
    m->spin_x = sx * inv;
    if (vy < c->stop) {
        m->v = 0.0f;
        m->t = 0.0f;
        return 0;
    }
    m->v = vy;
    x = vy * 2.0f * c->scale;
    m->t = (x + fabsf(x)) * 0.5f;
    return 1;
}
