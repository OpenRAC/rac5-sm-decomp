/* LEVEL_02:0x127828 -- reflects a 4-component vector about a plane normal by a rotated incidence angle, with a damped phase value. */
extern float acosf(float);
extern float sinf(float);
extern float sqrtf(float);

void func_127828(float *v, float *out, float *n, float a0, float a1)
{
    float v0, v1, v2, v3;
    float n0, n1, n2, n3;
    float dot;
    float s;
    float sgn;
    float th;
    float a;
    float t;
    float sq;
    float inv;
    float w;
    float u;

    n0 = n[0];
    n1 = n[1];
    n2 = n[2];
    n3 = n[3];
    v0 = v[0];
    v1 = v[1];
    v2 = v[2];
    v3 = v[3];

    dot = n0 * v0 + n1 * v1 + n2 * v2 + n3 * v3;
    s = 1.0f - dot * dot;
    if (s < 6.103515625e-05f) {
        v[0] = n0;
        v[1] = n1;
        v[2] = n2;
        v[3] = n3;
        *out = 0.0f;
        return;
    }
    sgn = (dot < 0.0f) ? -1.0f : 1.0f;
    th = acosf(sgn * dot);
    a = (*out + th * a0) * a1;
    t = a + th * a1;
    *out = a - t * a0;
    sq = sqrtf(s);
    inv = 1.0f / sq;
    w = sinf(th - t) * inv * sgn;
    u = sinf(t) * inv;
    v[0] = w * n0 + u * v0;
    v[1] = w * n1 + u * v1;
    v[2] = w * n2 + u * v2;
    v[3] = w * n3 + u * v3;
}
