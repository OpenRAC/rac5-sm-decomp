/* LEVEL_15:0x130330 -- interpolates between two keyframes, producing quantised position, vector and a normalised quaternion. */
extern float sqrtf(float x);

typedef struct KF {
    float p[3];
    float q[3];
    float v[3];
    unsigned char pad24[0xC];
    float w;
    unsigned char pad34[4];
} KF;

typedef struct Interp {
    int idx;
    float t;
    float *pv0;
    float *pv1;
    float *pq0;
    float *pq1;
} Interp;

extern long long func_140038(float x);

void func_130330(long long *pos, float *quat, float *vec, KF **keys, Interp *it)
{
    int idx;
    KF *base;
    KF *a;
    KF *b;
    float t;
    float *pv0;
    float *pv1;
    float *pq0;
    float *pq1;
    float s;
    float l2;
    float inv;

    idx = it->idx;
    if (idx <= 0) {
        idx = 0;
    }
    base = *keys;
    a = &base[idx];
    b = &base[idx + 1];
    t = it->t * a->w;
    s = 1.0f - t;
    pos[0] = func_140038(a->p[0] * s + b->p[0] * t);
    pos[1] = func_140038(a->p[1] * s + b->p[1] * t);
    pos[2] = func_140038(a->p[2] * s + b->p[2] * t);
    pv0 = a->v;
    pv1 = b->v;
    vec[0] = pv0[0] * s + pv1[0] * t;
    vec[1] = pv0[1] * s + pv1[1] * t;
    vec[2] = pv0[2] * s + pv1[2] * t;
    pq0 = a->q;
    pq1 = b->q;
    quat[0] = pq0[0] * s + pq1[0] * t;
    quat[1] = pq0[1] * s + pq1[1] * t;
    quat[2] = pq0[2] * s + pq1[2] * t;
    l2 = quat[0] * quat[0] + quat[1] * quat[1] + quat[2] * quat[2];
    if (l2 < 2.3841858e-7f) {
        quat[0] = pq0[0];
        quat[1] = pq0[1];
        quat[2] = pq0[2];
    } else {
        inv = 1.0f / sqrtf(l2);
        quat[0] = inv * quat[0];
        quat[1] = inv * quat[1];
        quat[2] = inv * quat[2];
    }
}
