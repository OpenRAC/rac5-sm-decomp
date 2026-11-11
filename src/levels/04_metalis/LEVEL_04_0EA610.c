/* LEVEL_04:0x0EA610 -- placement copy of LEVEL_01_0E4D50.c: per-frame update of a drifting sprite effect: ages it, fades its alpha near the end, integrates position, velocity and spin, and releases it when it expires. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    float vx, vy, vz;
    float life;
    float fadeAt;
    float spinA;
    float spinB;
    float f40;
    float grav;
    float drag;
    float f4C;
    float fadeRate;
    char pad30[3];
    char flag;
} Motion;

typedef struct {
    int w00;
    int w04;
    unsigned int color;
    Vec3 pos;
    float f18;
    float s1C;
    float s20;
    Motion m;
} Fx;

static __inline__ void Add3(Vec3 *d, Vec3 *s)
{
    d->x = d->x + s->x;
    d->y = d->y + s->y;
    d->z = d->z + s->z;
}

extern Fx *D_0020F858;
extern void func_09A948(Fx *e);
extern int func_204438(float v);

int func_0EA610(Fx *e)
{
    Motion *m;
    float a;
    float d;
    float s;
    float cosv;
    float rx;
    float sinv;
    float ry;
    unsigned int c;

    m = &e->m;
    e->f18 = e->f18 + m->f40;
    m->life = m->life - 1.0f;
    if (m->life <= 0.0f || (m->flag != 0 && e->f18 < 0.0f)) {
        do {
            if (e != 0) {
                if (e == D_0020F858) {
                    D_0020F858 = 0;
                } else {
                    func_09A948(e);
                }
            }
            return 0;
        } while (0);
    }
    if (m->life < m->fadeAt) {
        a = (float)(e->color >> 24) - m->fadeRate;
        if (a < 0.0f) {
            a = 0.0f;
        }
        c = e->color;
        e->color = ((unsigned int)func_204438(a) << 24) | (c & 0xFFFFFF);
    }
    Add3(&e->pos, (Vec3 *)m);
    d = m->drag;
    s = m->vy - m->grav;
    m->vy = s;
    m->vx = m->vx * d;
    m->vz = m->vz * d;
    if (0.0f < s) {
        m->vy = s * d;
    }
    ry = e->s20;
    rx = e->s1C;
    sinv = m->spinA;
    cosv = m->spinB;
    e->s20 = cosv * ry - sinv * rx;
    e->s1C = cosv * rx + sinv * ry;
    return 1;
}
