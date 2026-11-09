/* LEVEL_02.REL:0x0EEE20: reviewed 272-byte candidate, held for ABI review.
 * Initializes a spawn record with flags, a random angle and a centered range.
 * gnu-ee-trial C with gnu-ee-trial links 272/272 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It defines the function returning void with (pointer, int, int, float,
 * float, float), but the accepted caller LEVEL_02_0EEF30.c declares it
 * returning void with (pointer, pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0xC];
    float angle;
    float z;
    float mid;
    float half;
    unsigned int flags;
    int tag;
} Rec;

extern int D_002AF370;
extern int rand(void);

static inline float randf(float base, float range)
{
    return base + range * ((float)rand() * 4.656613e-10f);
}

void func_0EEE20(Rec *r, int tag, unsigned int flags, float lo, float hi, float z)
{
    float a;

    if (flags == 0)
        flags = (D_002AF370 << 16) | 0x80007041;
    flags = (flags & ~0x3C) | 4;
    flags &= ~3;
    a = randf(-3.1415927f, 6.2831855f);
    r->tag = tag;
    r->z = z;
    r->flags = flags;
    r->mid = (hi + lo) * 0.5f;
    r->half = (hi - lo) * 0.5f;
    r->angle = a;
}
