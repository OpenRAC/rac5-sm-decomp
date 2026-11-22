/* LEVEL_01:0x1D8EC8 -- damps a velocity, pulls it toward a target point, then moves the position by the velocity and an extra offset. */

struct Mover_1D8EC8 {
    float pos[3];
    float vel[3];
};

static inline void Damp3(float *v, float k)
{
    v[0] += v[0] * k;
    v[1] += v[1] * k;
    v[2] += v[2] * k;
}

static inline void Sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static inline void MulAdd3(float *v, float *d, float k)
{
    v[0] += d[0] * k;
    v[1] += d[1] * k;
    v[2] += d[2] * k;
}

static inline void Add3(float *p, float *q)
{
    p[0] += q[0];
    p[1] += q[1];
    p[2] += q[2];
}

void func_1D8EC8(struct Mover_1D8EC8 *m, float *target, float *push)
{
    float d[3];

    Damp3(m->vel, -0.25f);
    Sub3(d, target, m->pos);
    MulAdd3(m->vel, d, 0.05f);
    Add3(m->pos, m->vel);
    Add3(m->pos, push);
}
