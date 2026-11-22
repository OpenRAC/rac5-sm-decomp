/* LEVEL_18:0x0483F0 -- keeps the object's body (its position lifted by 0.75) outside a sphere of the given radius (plus 0.4) around point p: when the body centre is inside, it is pushed out along the line from p (straight up when it sits on p) and the offset is added to the object's accumulated displacement. */
typedef struct { float x, y, z; } Vec3;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[0xAA4 - 0x3C];
    Vec3 push;
} Obj;

extern float sqrtf(float x);

static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ void Sub3(Vec3 *d, Vec3 *a, Vec3 *b)
{
    d->x = a->x - b->x;
    d->y = a->y - b->y;
    d->z = a->z - b->z;
}

static __inline__ void Add3(Vec3 *d, Vec3 *a)
{
    d->x = d->x + a->x;
    d->y = d->y + a->y;
    d->z = d->z + a->z;
}

void func_0483F0(float r, Obj *self, Vec3 *p)
{
    Vec3 body;
    Vec3 old;
    Vec3 delta;
    float px;
    float py;
    float pz;
    float dx;
    float dy;
    float dz;
    float len2;
    float s;
    float ny;
    int moved;

    Copy3(&body, &self->pos);
    r = r + 0.4000000059604645f;
    body.y = body.y + 0.75f;
    Copy3(&old, &body);
    px = p->x;
    py = p->y;
    pz = p->z;
    dx = body.x - px;
    dy = body.y - py;
    dz = body.z - pz;
    len2 = dx * dx + dy * dy + dz * dz;
    if (r * r <= len2) {
        moved = 0;
    } else {
        if (len2 < 1.0000001e-06f) {
            ny = body.y + r;
        } else {
            s = r * (1.0f / sqrtf(len2));
            ny = py + dy * s;
            body.x = px + dx * s;
            body.z = pz + dz * s;
        }
        body.y = ny;
        moved = 1;
    }
    if ((unsigned char)moved) {
        Sub3(&delta, &body, &old);
        Add3(&self->push, &delta);
    }
}
