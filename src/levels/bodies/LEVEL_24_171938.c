/* LEVEL_24:0x171938 -- seeds a particle's velocity with a random direction around the emitter. */
struct Part {
    char pad0[0x20];
    float vx;
    float vy;
    float vz;
};
struct V3 {
    float x, y, z;
};
struct Emit {
    char pad0[0x30];
    struct V3 pos;
    char pad1[0x58 - 0x3C];
    struct Part *part;
};
extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);

void func_171938(struct Emit *e)
{
    struct Part *p = e->part;
    float *v = &p->vx;
    float a;
    struct V3 *q;

    a = (float)rand() * 4.656612873077393e-10f;
    a = a + a;
    a = a * 3.1415927410125732f;
    p->vx = cosf(a);
    v[2] = sinf(a);
    p->vy = (float)rand() * 4.6566123179658803e-10f * 0.05000000074505806f;
    q = &e->pos;
    p->vx = q->x + (p->vx + p->vx);
    v[1] = q->y + (v[1] + v[1]);
    v[2] = q->z + (v[2] + v[2]);
}
