/* LEVEL_01:0x127338 -- builds two perpendicular unit vectors from a pair of vectors. */
extern float sqrtf(float);

static inline unsigned char normalize3(float *v)
{
    float len2 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    float inv;

    if (len2 < 2.3841858e-7f)
        return 0;
    inv = 1.0f / sqrtf(len2);
    v[0] = inv * v[0];
    v[1] = inv * v[1];
    v[2] = inv * v[2];
    return 1;
}

void func_127338(float *out1, float *out2, float *v, float *u)
{
    float n[4];
    float w[4];

    n[0] = u[1] * v[2] - u[2] * v[1];
    n[1] = u[2] * v[0] - u[0] * v[2];
    n[2] = u[0] * v[1] - u[1] * v[0];
    if (normalize3(n)) {
        w[0] = v[1] * n[2] - v[2] * n[1];
        w[1] = v[2] * n[0] - v[0] * n[2];
        w[2] = v[0] * n[1] - v[1] * n[0];
    } else {
        float inv;
        w[0] = 0.0f;
        w[1] = v[2];
        w[2] = -v[1];
        inv = 1.0f / sqrtf(w[1] * w[1] + w[0] + w[2] * w[2]);
        w[0] = inv * w[0];
        w[1] = inv * w[1];
        w[2] = inv * w[2];
        n[0] = w[1] * v[2] - w[2] * v[1];
        n[1] = w[2] * v[0] - w[0] * v[2];
        n[2] = w[0] * v[1] - w[1] * v[0];
    }
    out1[0] = n[0];
    out1[1] = n[1];
    out1[2] = n[2];
    out2[0] = w[0];
    out2[1] = w[1];
    out2[2] = w[2];
}
