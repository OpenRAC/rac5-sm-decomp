/* LEVEL_15:0x0FE910 -- converts a direction to wrapped yaw/pitch deltas against a target and scores the error. */
extern float sqrtf(float x);
extern float atan2f(float y, float x);
extern float cosf(float x);
extern float fabsf(float x);
extern void func_0EB828(float *out, void *a, void *b, int c);
extern void func_0EABF0(float *out, void *m, float *in);

void func_0FE910(float *yaw_out, float *score_out, float *cur, char *tgt, char *m, int unused, void *a, void *b)
{
    float v[4];
    float w[4];
    float u[4];
    float ang;
    float nang;
    float c;
    float s;
    float pitch;
    float d;
    float e;
    float lo;
    float hi;
    float sum;

    func_0EB828(v, a, b, 0);
    func_0EABF0(w, m + 0xF0, v);
    ang = atan2f(w[0], w[1]);
    nang = -ang;
    c = cosf(ang);
    s = sqrtf(1.0f - c * c);
    if (ang < 0.0f)
        s = -s;
    u[0] = w[0] * c - w[1] * s;
    u[1] = w[1] * c + w[0] * s;
    u[2] = w[2];
    func_0EABF0(u, m + 0x150, u);
    pitch = -atan2f(u[0], u[1]);

    d = cur[4] + nang - *(float *)(tgt + 0x84);
    if (d > 3.1415927f)
        d -= 6.2831855f;
    else if (d < -3.1415927f)
        d += 6.2831855f;
    *yaw_out = d;

    e = cur[5] + pitch - *(float *)(tgt + 0x98);
    if (e > 3.1415927f)
        e -= 6.2831855f;
    else if (e < -3.1415927f)
        e += 6.2831855f;

    lo = *(float *)(tgt + 0x90);
    hi = *(float *)(tgt + 0x94);
    sum = e + lo + fabsf(lo - e);
    hi = hi + hi;
    *score_out = (sum + hi - fabsf(hi - sum)) * 0.25f;
}
