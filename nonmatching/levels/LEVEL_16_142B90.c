/* USA LEVEL_16.REL:0x142B90, 568-byte candidate (22 November 2026).
 * Measured pinned: 7 differing words; first difference at 0x158.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int active;
    float pos;
    float vel;
    unsigned char state;
} Spring;

typedef struct {
    char pad00[0x58];
    Spring *spring;
} Obj;

extern float D_0019AD24;
extern float D_001D3678[3];
extern float fabsf(float x);

static __inline__ int Min(int a, int b)
{
    int *p;

    p = (a >= b) ? &b : &a;
    return *p;
}

static __inline__ void Update(Spring *s, float target)
{
    float *pos;
    float *vel;
    float acc;
    float k1;
    float k2;
    float lim;
    int n;
    int i;

    pos = &s->pos;
    vel = &s->vel;
    k1 = D_001D3678[0];
    k2 = D_001D3678[1];
    lim = D_001D3678[2];
    n = Min((int)(D_0019AD24 * 59.998802f), 2);
    for (i = 0; i < n; i++) {
        acc = (target - *pos) * k1 - *vel * k2;
        *vel = acc;
        if (lim < acc) {
            *vel = lim;
        } else if (acc < -lim) {
            *vel = -lim;
        }
        *pos = *pos + *vel;
    }
}

static __inline__ int approx(float a, float b)
{
    int r = 1;

    if (!(fabsf(a - b) <= 0.05f)) {
        r = 0;
    }
    return r;
}

void func_142B90(Obj *o)
{
    Spring *s;
    unsigned char ok;

    s = o->spring;
    if (s->active != 0) {
        if (s->state != 0) {
            Update(s, 0.9f);
            ok = approx(s->pos, 0.9f);
            if (ok) {
                s->state = 0;
            }
        } else {
            Update(s, 0.5f);
            ok = approx(s->pos, 0.5f);
            if (ok) {
                s->state = 1;
            }
        }
    }
}
