/* LEVEL_17:0x076098 */
typedef struct {
    float x;
    float y;
    float z;
} VEC3;

typedef struct {
    char pad00[0x34];
    VEC3 a;
    VEC3 b;
} Shape;

typedef struct {
    char pad00[8];
    Shape *p08;
} Holder;

typedef struct {
    char pad00[0x40];
    Holder *p40;
} Obj;

void func_103B00(VEC3 *dst, Obj *obj, VEC3 *mid);

int func_076098(VEC3 *a0, VEC3 *a1, Obj *a2)
{
    VEC3 mid;
    Holder *h;
    Shape *p;
    VEC3 *qa;
    VEC3 *qb;
    float hx;
    float hy;
    float hz;

    h = a2->p40;
    if (h == 0) {
        return 0;
    }
    p = h->p08;
    if (p == 0) {
        return 0;
    }
    qa = &p->a;
    qb = &p->b;
    hx = qa->x + qb->x;
    hy = qa->y + qb->y;
    hz = qa->z + qb->z;
    mid.x = hx * 0.5f;
    mid.y = hy * 0.5f;
    mid.z = hz * 0.5f;
    func_103B00(a0, a2, &mid);
    a1->x = a0->x;
    a1->y = a0->y;
    a1->z = a0->z;
    a0->x -= 0.03125f;
    a0->y -= 0.03125f;
    a0->z -= 0.03125f;
    a1->x += 0.03125f;
    a1->y += 0.03125f;
    a1->z += 0.03125f;
    return 1;
}
