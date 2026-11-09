/* LEVEL_24.REL:0x172EF8: reviewed 320-byte candidate, held for ABI review.
 * Range-checks a target object and traces a ray to it.
 * pinned C with gnu-ee-trial links 320/320 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning int with (pointer, pointer, pointer,
 * float, float), but the accepted caller LEVEL_24_171A38.c declares it
 * returning void with (float, float, pointer, pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Ray172EF8 {
    float p0[3];
    float p1[3];
    float d[3];
    float pad[3];
} Ray172EF8;

typedef struct Obj172EF8 Obj172EF8;

typedef struct Owner172EF8 {
    char pad_00[0x59C];
    Obj172EF8 *p_59C;
} Owner172EF8;

typedef struct Link172EF8 {
    Owner172EF8 *p_00;
} Link172EF8;

struct Obj172EF8 {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x1C];
    Link172EF8 *p_58;
    char pad_5C[8];
    unsigned int flags_64;
};

void func_07AE90(Obj172EF8 *o, float *out, int a, int b);
int func_1088C8(Ray172EF8 *ray, int *hit);

static inline float DistSq3(float *b, float *a)
{
    float dx;
    float dy;
    float dz;

    dx = a[0] - b[0];
    dy = a[1] - b[1];
    dz = a[2] - b[2];
    return dx * dx + dy * dy + dz * dz;
}

static inline void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static inline void Sub3(float *dst, float *a, float *b)
{
    dst[0] = a[0] - b[0];
    dst[1] = a[1] - b[1];
    dst[2] = a[2] - b[2];
}

int func_172EF8(float *out, Obj172EF8 *a, Obj172EF8 *b, float r1, float r2)
{
    Ray172EF8 ray;
    float buf[4];
    int hit[4];
    unsigned int flags;
    float d2;

    flags = b->flags_64 & 0x40F;
    if (flags != 1 || b == a->p_58->p_00->p_59C) {
        return 0;
    }
    d2 = DistSq3(b->pos, a->pos);
    *out = d2;
    if (r1 * r1 < d2 || d2 < r2 * r2) {
        return 0;
    }
    func_07AE90(b, buf, 0, 0);
    buf[3] = 1.0f;
    Copy3(ray.p0, a->pos);
    Copy3(ray.p1, buf);
    Sub3(ray.d, ray.p1, ray.p0);
    if (func_1088C8(&ray, hit) != -1) {
        flags = 0;
    }
    return flags;
}
