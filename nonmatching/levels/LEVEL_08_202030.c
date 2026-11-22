/* USA LEVEL_08.REL:0x202030, 704-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 15 differing words; first difference at 0x100.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);
extern float sqrtf(float x);

typedef struct Src {
    char pad00[0x2C];
    float scale;
} Src;

extern void func_13A0E0(float *out, int unused, float *in, float s0, float s1, float s2);

static __inline__ float RandAngle(void)
{
    int r;

    r = rand();
    return ((float)r * 4.6566129e-10f + (float)r * 4.6566129e-10f) * 3.1415927f;
}

void func_202030(float *out, Src *src)
{
    float b;
    float v[2];
    float len2;
    float c;
    float inv;
    float sn;
    float cs;
    float m[16];
    float a;

    a = (float)rand() * 4.6566129e-10f * 0.17453294f;
    cs = cosf(a);
    sn = sqrtf(1.0f - cs * cs);
    if (a < 0.0f) {
        sn = -sn;
    }
    b = RandAngle();
    v[0] = cosf(b);
    v[1] = sinf(b);
    m[3] = 0.0f;
    m[7] = 0.0f;
    m[6] = sn * v[1];
    m[11] = 0.0f;
    m[15] = 1.0f;
    m[12] = 0.0f;
    m[13] = 0.0f;
    m[14] = 0.0f;
    m[4] = sn * v[0];
    m[5] = cs;
    c = RandAngle();
    m[9] = 0.0f;
    m[8] = cosf(c);
    m[10] = sinf(c);
    m[0] = m[5] * m[10] - m[6] * m[9];
    m[1] = m[6] * m[8] - m[4] * m[10];
    m[2] = m[4] * m[9] - m[5] * m[8];
    len2 = m[0] * m[0] + m[1] * m[1] + m[2] * m[2];
    if (!(len2 < 2.3841858e-07f)) {
        inv = 1.0f / sqrtf(len2);
        m[0] = m[0] * inv;
        m[1] = m[1] * inv;
        m[2] = m[2] * inv;
    }
    m[8] = m[1] * m[6] - m[2] * m[5];
    m[9] = m[2] * m[4] - m[0] * m[6];
    m[10] = m[0] * m[5] - m[1] * m[4];
    func_13A0E0(out, 0, m, src->scale, src->scale, src->scale);
}
