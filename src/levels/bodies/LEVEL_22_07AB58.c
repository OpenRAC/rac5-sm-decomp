/* LEVEL_22:0x07AB58 -- placement copy of LEVEL_01_089778.c: combines two transforms (rotation, translation, scale) selected by a flag mask. */
typedef struct {
    float x, y, z, w;
} Quat;

typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    Quat q;
    Vec3 scale;
    float pad;
    Vec3 pos;
} XForm;

extern void func_0FBFF8(Quat *out, Quat *a, Quat *b);
extern void func_0FC420(Quat *out, XForm *a);

void func_07AB58(XForm *out, XForm *a, XForm *b, unsigned char flags)
{
    Quat m;
    Quat v;
    Quat t;
    Quat r;
    Quat qa;
    Quat qb;

    if (flags & 1) {
        qa = a->q;
        qb = b->q;
        func_0FBFF8(&out->q, &qa, &qb);
    } else {
        out->q = a->q;
    }
    if (flags & 2) {
        v.x = b->pos.x;
        v.y = b->pos.y;
        v.z = b->pos.z;
        v.w = 0;
        func_0FC420(&m, a);
        func_0FBFF8(&t, (Quat *)a, &v);
        func_0FBFF8(&r, &t, &m);
        out->pos.x += r.x * a->scale.x;
        out->pos.y += r.y * a->scale.y;
        out->pos.z += r.z * a->scale.z;
    } else {
        out->pos = a->pos;
    }
    if (flags & 4) {
        out->scale.x = a->scale.x * b->scale.x;
        out->scale.y = a->scale.y * b->scale.y;
        out->scale.z = a->scale.z * b->scale.z;
    } else {
        out->scale = a->scale;
    }
}
