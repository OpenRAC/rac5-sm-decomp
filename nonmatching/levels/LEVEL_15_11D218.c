/* LEVEL_15.REL:0x11D218: reviewed 604-byte candidate, held for ABI review.
 * Initialises an object from vectors and derives a unit direction.
 * gnu-ee-trial-divpad C with r5900-mfc1 links 604/604 bytes and is byte-exact
 * at this and 1 other USA placement, but the prototypes disagree.
 * It declares func_029980 returning void with (pointer, int, int, int, float),
 * but the accepted LEVEL_15_029980.c defines it returning void with (pointer,
 * int, int, pointer, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct { float x, y, z; } V3;
typedef struct { float f[6]; } V6;
typedef struct {
    char pad0[0x1C];
    char sub[0xB0];
    V6 a;
    char padb[8];
    V3 b;
    float c;
    V3 d;
    V3 e;
} Obj;

extern float sqrtf(float);
extern int rand(void);
extern float fabsf(float);
extern void func_080488(Obj *, int);
extern void func_11D580(Obj *, int);
extern void func_029980(void *, int, int, int, float);
extern void func_0294D8(void *, int, int);
extern void func_0E6620(V3 *, float, float);
extern char D_001709C8[];

static inline unsigned char normalize(V3 *dst, V3 *src)
{
    float len2 = src->x * src->x + src->y * src->y + src->z * src->z;
    float inv;
    if (len2 < 2.384185791015625e-07f)
        return 0;
    inv = 1.0f / sqrtf(len2);
    dst->x = inv * src->x;
    dst->y = inv * src->y;
    dst->z = inv * src->z;
    return 1;
}

void func_11D218(Obj *o, V6 *v, int a2, int a3, V3 *t0, V3 *t1, float fa, float fb, V3 *t2)
{
    func_080488(o, (int)D_001709C8);
    o->a = *v;
    func_11D580(o, a2);
    if (t0)
        func_029980((char *)o + 0x1C, a3, (int)t0, (int)t1, fb);
    else
        func_0294D8((char *)o + 0x1C, a3, 0xFFFF);
    o->b = *t1;
    o->c = fa;
    o->d = *t2;
    if (!normalize(&o->e, &o->d)) {
        float x = (float)rand();
        float q = (float)(int)(x * 7.826379260222893e-06f);
        func_0E6620(&o->e, x, fabsf((x - q * 127773.0f) * 16807.0f - q * 2836.0f));
    }
}
