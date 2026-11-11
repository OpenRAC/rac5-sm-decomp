/* LEVEL_07:0x126680 -- placement copy of LEVEL_01_1232B8.c: blends two orientations by slerp when the factor is below one, else copies the target; keeps the source position. */

struct Rot1232B8 {
    float m[12];
};

struct Mat1232B8 {
    struct Rot1232B8 r;
    float p[3];
};

void func_126470(float *q, struct Mat1232B8 *m);
void func_126140(float *out, float *a, float *b, float t);
void func_126308(struct Mat1232B8 *m, float *q);

static __inline__ void vcopy(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_126680(struct Mat1232B8 *dst, struct Mat1232B8 *src, struct Mat1232B8 *other, float t)
{
    float pos[3];
    float qa[4];
    float qb[4];
    float qc[4];

    vcopy(pos, src->p);
    if (t < 1.0f) {
        func_126470(qa, src);
        func_126470(qb, other);
        func_126140(qc, qa, qb, t);
        func_126308(dst, qc);
    } else {
        dst->r = other->r;
    }
    vcopy(dst->p, pos);
}
