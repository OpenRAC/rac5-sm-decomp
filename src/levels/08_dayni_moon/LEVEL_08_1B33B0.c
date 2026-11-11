/* LEVEL_08:0x1B33B0 -- three clamps that push a position out of a bounded region. */
typedef struct {
    char pad0[0x20];
    float n[3];
    float pad2C;
    float p[3];
} Plane;

extern char D_002843D0[];
extern Plane D_00261A40;

extern float func_001580(void);
extern float func_001570(void);
extern float func_003A48(void);
extern int func_0703C8(char *);
extern Plane *func_0011D8(void);
extern float acosf(float);
extern float tanf(float);

static inline void sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static inline float dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void func_1B33B0(float *pos, float *center, float scale)
{
    float d;
    float lo;

    d = scale * func_001580();
    lo = center[0] - d;
    if (lo > 0.0f) {
        pos[0] = pos[0] + lo;
    } else {
        if (center[0] + d < 0.0f)
            pos[0] = pos[0] + (center[0] + d);
    }
}

void func_1B3438(float *pos)
{
    Plane *r;
    float d[3];
    float z;

    if (func_0703C8(D_002843D0))
        return;
    r = func_0011D8() ? func_0011D8() : &D_00261A40;
    sub3(d, r->p, pos);
    func_1B33B0(pos, d, -dot3(d, r->n));
    z = d[2] - 4.0f;
    if (z < 0.0f)
        pos[2] = pos[2] + z;
}

void func_1B3528(float *pos)
{
    Plane *r;
    float d[3];
    float a;
    float t;
    float lim;

    if (func_0703C8(D_002843D0))
        return;
    r = func_0011D8() ? func_0011D8() : &D_00261A40;
    sub3(d, r->p, pos);
    func_1B33B0(pos, d, -dot3(d, r->n));
    a = acosf(-r->n[1]);
    a = a - func_001570() * 0.5f;
    t = func_003A48();
    lim = r->p[2] - t * tanf(a);
    if (lim < pos[2])
        pos[2] = lim;
}
