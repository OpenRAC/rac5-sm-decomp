/* LEVEL_23:0x1140C0 -- placement copy of LEVEL_01_1232B8.c: blends two orientations by slerp when the factor is below one, else copies the target; keeps the source position. */

struct Rot1232B8 {
    float m[12];
};

struct Mat1232B8 {
    struct Rot1232B8 r;
    float p[3];
};

void func_113EB0(float *q, struct Mat1232B8 *m);
void func_113B80(float *out, float *a, float *b, float t);
void func_113D48(struct Mat1232B8 *m, float *q);

static __inline__ void vcopy(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_1140C0(struct Mat1232B8 *dst, struct Mat1232B8 *src, struct Mat1232B8 *other, float t)
{
    float pos[3];
    float qa[4];
    float qb[4];
    float qc[4];

    vcopy(pos, src->p);
    if (t < 1.0f) {
        func_113EB0(qa, src);
        func_113EB0(qb, other);
        func_113B80(qc, qa, qb, t);
        func_113D48(dst, qc);
    } else {
        dst->r = other->r;
    }
    vcopy(dst->p, pos);
}
