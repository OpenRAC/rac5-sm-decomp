/* LEVEL_17:0x13E5A0 -- placement copy of LEVEL_16_142B90.c: steps a two-state spring. */
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

extern float D_0018E324;
extern float D_001C6078[3];
extern float fabsf(float x);

static __inline__ const int *MinRef(const int *a, const int *b)
{
    return (*a < *b) ? a : b;
}

static __inline__ void StepSpring(float *pos, float target, float *vel, float k0, float k1, float k2)
{
    int n;
    int two;
    int cnt;
    float acc;

    two = 2;
    n = (int)(D_0018E324 * 59.998802f);
    cnt = *MinRef(&n, &two);
    if (cnt > 0) {
        do {
            acc = (target - *pos) * k0 - *vel * k1;
            *vel = acc;
            if (acc > k2) {
                *vel = k2;
            } else if (acc < -k2) {
                *vel = -k2;
            }
            *pos += *vel;
        } while (--cnt);
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

void func_13E5A0(Obj *o)
{
    Spring *s;
    unsigned char ok;

    s = o->spring;
    if (s->active != 0) {
        if (s->state != 0) {
            StepSpring(&s->pos, 0.9f, &s->vel, D_001C6078[0], D_001C6078[1], D_001C6078[2]);
            ok = approx(s->pos, 0.9f);
            if (ok) {
                s->state = 0;
            }
        } else {
            StepSpring(&s->pos, 0.5f, &s->vel, D_001C6078[0], D_001C6078[1], D_001C6078[2]);
            ok = approx(s->pos, 0.5f);
            if (ok) {
                s->state = 1;
            }
        }
    }
}
