/* LEVEL_01:0x054E98 -- scales an input vector into a velocity, integrates it into a position, then adds an acceleration. */
typedef struct { float x, y, z; } Vec3;
typedef struct {
    char pad0[0x30];
    Vec3 pos;
    float w;
    char pad1[0x1B4 - 0x40];
    Vec3 vel;
    int  i1C0;
    char pad2[0xC5C - 0x1C4];
    Vec3 acc;
} Ctx;

void func_054E98(Ctx *c, Vec3 *v, float s)
{
    Vec3 *pos = &c->pos;
    Vec3 *vel = &c->vel;
    Vec3 *acc = &c->acc;
    float px = pos->x;
    float sx = v->x * s;
    float vy;
    float vz;

    c->vel.x = sx;
    px = px + sx;
    vy = v->y * s;
    c->vel.y = vy;
    vz = v->z * s;
    pos->x = px;
    c->i1C0 = 0;
    c->vel.z = vz;
    pos->y = pos->y + vel->y;
    pos->z = pos->z + vel->z;
    pos->x = pos->x + acc->x;
    pos->y = pos->y + acc->y;
    pos->z = pos->z + acc->z;
    c->w = 1.0f;
}
