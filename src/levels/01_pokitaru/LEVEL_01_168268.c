/* LEVEL_01:0x168268 -- ages the object's timer by the given step (expiring it at 5), advances its position by 0.7 of its velocity and, when the target is within 2.5 units, collects the nearby items and calls each one's hit method with the object before expiring the object. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

struct Obj;

typedef struct Item Item;

typedef struct {
    char pad00[0x20];
    void (*hit)(Item *it, int a1, int a2, int a3, int a4, struct Obj *src, float amount);
} Methods;

struct Item {
    char pad00[0x40];
    Methods *methods;
};

typedef struct Obj {
    char pad00[0x20];
    Vec3 vel;
    char pad2C[4];
    Vec3 pos;
    char pad3C[0x18];
    Vec3 *target;
    char pad58[0x18];
    float timer;
} Obj;

extern int func_01C3E8(Item **list, int max, Vec3 *pos, int a3, int a4, int a5, int a6, float range);
extern void func_07C670(Obj *o, int a1);

static __inline__ void AddScaled(Vec3 *p, Vec3 *v, float k, Vec3 *d)
{
    d->x = k * v->x;
    d->y = k * v->y;
    d->z = k * v->z;
    p->x += d->x;
    p->y += d->y;
    p->z += d->z;
}

static __inline__ void Sub3(Vec3 *d, Vec3 *a, Vec3 *b)
{
    d->x = a->x - b->x;
    d->y = a->y - b->y;
    d->z = a->z - b->z;
}

void func_168268(Obj *o, float dt)
{
    Vec3 d;
    Vec3 diff;
    Item *list[64];
    Vec3 *tg = o->target;
    int n;
    int i;
    Item *it;

    o->timer = o->timer + dt;
    if (5.0f <= o->timer) {
        func_07C670(o, 1);
    }
    AddScaled(&o->pos, &o->vel, 0.7f, &d);
    Sub3(&diff, tg, &o->pos);
    if (diff.x * diff.x + diff.y * diff.y + diff.z * diff.z <= 6.25f) {
        n = func_01C3E8(list, 0x40, &o->pos, 0x129, 0x101, 0xAE3E, 1, 10.0f);
        for (i = 0; i < n; i++) {
            it = list[i];
            if (it->methods->hit != 0) {
                it->methods->hit(it, 0, 3, 0, 0, o, 1.0f);
            }
        }
        func_07C670(o, 1);
    }
}
