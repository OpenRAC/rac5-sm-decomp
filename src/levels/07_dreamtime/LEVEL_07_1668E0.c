/* LEVEL_07:0x1668E0 -- computes an offset aim point toward a target and steps toward it. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad0[0xA0];
    Vec3 target;
    char padAC[0xCC - 0xAC];
    Vec3 home;
    char padD8[0x112 - 0xD8];
    char mode;
} Info;

typedef struct {
    char pad0[0x10];
    Vec3 v10;
    float w10;
    Vec3 v20;
    float w20;
    Vec3 v30;
    float w30;
    char pad3C[0x58 - 0x40];
    Info *info;
} Obj;

extern float sqrtf(float x);

void func_1668E0(Obj *o, Vec3 *out)
{
    Info *t;
    Vec3 *a;
    Vec3 *h;
    Vec3 *b;
    Vec3 *c;
    Vec3 *tg;
    Vec3 d;
    float len2, inv;

    t = o->info;
    if (t->mode == 0) {
        h = &t->home;
        out->x = t->home.x;
        out->y = h->y;
        out->z = h->z;
        return;
    }
    a = &o->v20;
    b = &o->v30;
    c = &o->v10;
    tg = &t->target;
    out->x = o->v30.x + o->v20.x * 3.21f;
    out->y = b->y + a->y * 3.21f;
    out->z = b->z + a->z * 3.21f;
    out->x = out->x + o->v10.x * -0.57f;
    out->y = out->y + c->y * -0.57f;
    out->z = out->z + c->z * -0.57f;
    d.x = t->target.x - out->x;
    d.y = tg->y - out->y;
    d.z = tg->z - out->z;
    len2 = d.x * d.x + d.y * d.y + d.z * d.z;
    if (!(len2 < 2.384185791015625e-07f)) {
        inv = 1.0f / sqrtf(len2);
        d.x = d.x * inv;

        d.y = d.y * inv;
        d.z = d.z * inv;
    }
    out->x = out->x + d.x;
    out->y = out->y + d.y;
    out->z = out->z + d.z;
}
