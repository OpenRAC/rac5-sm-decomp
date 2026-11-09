/* LEVEL_15.REL:0x104920: reviewed 288-byte candidate, held for ABI review.
 * Aims an object toward a point when it is far enough away.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 288/288 bytes and is byte-
 * exact at this and 1 other USA placement, but the prototypes disagree.
 * It defines the function returning void with (pointer, pointer), but the
 * accepted caller LEVEL_15_104AB8.c declares it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct { float x, y, z; } V3;
typedef struct { char pad0[0xC0]; V3 pos; } O;
extern float sqrtf(float x);
extern void func_104608(O *o, V3 *v, float a, float b, float c);

static inline unsigned char normalize(V3 *out, V3 *in)
{
    float l2;
    float len;
    float inv;

    l2 = in->x * in->x + in->y * in->y + in->z * in->z;
    if (l2 < 2.3841858e-07f)
        return 0;
    len = sqrtf(l2);
    inv = 1.0f / len;
    out->x = inv * in->x;
    out->y = inv * in->y;
    out->z = inv * in->z;
    return 1;
}

static inline void vsub(V3 *out, V3 *a, V3 *b)
{
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
}

void func_104920(O *o, V3 *p)
{
    V3 d;
    V3 n;
    float *q;

    vsub(&d, p, &o->pos);
    if (normalize(&n, &d))
        func_104608(o, &n, 3.1415927f, 0.2617994f, 0.08726647f);
}
