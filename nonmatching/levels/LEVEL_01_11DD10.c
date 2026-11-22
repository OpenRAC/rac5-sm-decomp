/* USA LEVEL_01.REL:0x11DD10, 292-byte candidate (21 November 2026).
 * Measured pinned: 16 differing words; first difference at 0x24.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float fabsf(float x);

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

static __inline__ float Dot(Vec3 *d, float *a)
{
    return d->x * a[0] + d->y * a[1] + d->z * a[2];
}

static __inline__ float Out(float v)
{
    return (v + fabsf(v)) * 0.5f;
}

int func_11DD10(float *p, float *c, float *e, float *ax, float *ay, float *az, float r, float s)
{
    Vec3 d;
    float a, b, k;

    r = r * s;
    d.x = p[0] - c[0];
    d.y = p[1] - c[1];
    d.z = p[2] - c[2];
    a = fabsf(Dot(&d, ax)) - e[0] * s;
    b = fabsf(Dot(&d, ay)) - e[1] * s;
    k = fabsf(Dot(&d, az)) - e[2] * s;
    a = Out(a);
    b = Out(b);
    k = Out(k);
    if (a * a + b * b + k * k < r) {
        return 1;
    }
    return 0;
}
