/* USA LEVEL_01.REL:0x166870, 328-byte candidate (21 November 2026).
 * Measured pinned --as: 15 differing words; first difference at 0x3C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad_00[0xA4];
    float pos;
    float vel;
} Spring;

typedef struct {
    char pad_00[0x30];
    float p[3];
    char pad_3C[0x18];
    Spring *spring;
} Obj;

extern float D_001EF29C;

static __inline__ int *MinRef(int *a, int *b)
{
    return *a < *b ? a : b;
}

static __inline__ void Scale3(float *v, float k)
{
    v[0] = v[0] * k;
    v[1] = v[1] * k;
    v[2] = v[2] * k;
}

static __inline__ void Add3(float *d, float *s)
{
    d[0] = d[0] + s[0];
    d[1] = d[1] + s[1];
    d[2] = d[2] + s[2];
}

void func_166870(Obj *o, float *dir, float target)
{
    int n;
    int two;
    int i;
    int steps;
    Spring *s;
    float *pos;
    float *vel;
    float v[4];
    float x;

    n = (int)(D_001EF29C * 59.998802185058594f);
    two = 2;
    s = o->spring;
    pos = &s->pos;
    vel = &s->vel;
    steps = *MinRef(&n, &two);
    for (i = 0; i < steps; i++) {
        x = (target - *pos) * 0.019999999552965164f - *vel * 0.20000000298023224f;
        *vel = x;
        if (*vel > 1000.0f) {
            *vel = 1000.0f;
        } else if (*vel < -1000.0f) {
            *vel = -1000.0f;
        }
        *pos = *pos + *vel;
    }
    v[0] = dir[0];
    v[1] = dir[1];
    v[2] = dir[2];
    v[3] = 0.0f;
    Scale3(v, s->pos);
    Add3(o->p, v);
}
