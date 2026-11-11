/* LEVEL_02:0x0EEE20 -- initializes a spawn record with flags, a random angle and a centered range. */
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
