/* LEVEL_08:0x035B08 -- placement copy of LEVEL_04_032890.c: rotates the first three rows of a transform by one place, damps and re-integrates its angle from the context's rate, and multiplies the transform by the resulting rotation. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    Vec3 r0;
    float p0;
    Vec3 r1;
    float p1;
    Vec3 r2;
    float p2;
    char pad30[0x40];
    float angle;
} Mat;

static __inline__ void CopyVec3(Vec3 *dst, const Vec3 *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

typedef struct {
    char pad00[4];
    float rate;
} Ctx;

extern float func_084F28(int a0, int a1, int a2);
extern void func_135350(float *out, float angle);
extern void func_1360F0(Mat *dst, float *a, Mat *b);

void func_035B08(Ctx *c, int a1, Mat *m, float *vel, int a4)
{
    Vec3 tmp;
    float rot[12];
    float a;
    float b;
    float s;
    float t;

    func_084F28(a1, (int)m, a4);
    CopyVec3(&tmp, &m->r2);
    CopyVec3(&m->r2, &m->r0);
    CopyVec3(&m->r0, &m->r1);
    CopyVec3(&m->r1, &tmp);
    s = c->rate * -1.5707963705062866f;
    a = m->angle - s;
    b = (vel[0] + a * 0.40000003576278687f) * 0.6703200340270996f;
    t = b + a * 0.6703200340270996f;
    vel[0] = b - t * 0.40000003576278687f;
    m->angle = t + s;
    func_135350(rot, t + s);
    func_1360F0(m, rot, m);
}
