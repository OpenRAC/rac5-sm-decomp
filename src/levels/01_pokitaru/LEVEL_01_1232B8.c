/* LEVEL_01:0x1232B8 -- blends two orientations by slerp when the factor is below one, else copies the target; keeps the source position. */

struct Rot1232B8 {
    float m[12];
};

struct Mat1232B8 {
    struct Rot1232B8 r;
    float p[3];
};

void func_123068(float *q, struct Mat1232B8 *m);
void func_122D10(float *out, float *a, float *b, float t);
void func_122ED8(struct Mat1232B8 *m, float *q);

static __inline__ void vcopy(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_1232B8(struct Mat1232B8 *dst, struct Mat1232B8 *src, struct Mat1232B8 *other, float t)
{
    float pos[3];
    float qa[4];
    float qb[4];
    float qc[4];

    vcopy(pos, src->p);
    if (t < 1.0f) {
        func_123068(qa, src);
        func_123068(qb, other);
        func_122D10(qc, qa, qb, t);
        func_122ED8(dst, qc);
    } else {
        dst->r = other->r;
    }
    vcopy(dst->p, pos);
}
