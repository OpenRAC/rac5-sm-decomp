/* LEVEL_16:0x1513D8 -- builds a small probe vector, runs a query and nudges an offset when it hits; otherwise marks the object. */
struct O {
    char p0[0x30];
    float f30;
    float f34;
    float f38;
    char p1[0x45 - 0x3C];
    unsigned char f45;
};
extern int func_01E480(float *a, float *b, float *c, int d, int e, float f);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_1513D8(struct O *a0, float x)
{
    float tmp[8];
    float q[3];
    float out[4];

    Copy3(q, &a0->f30);
    q[1] = q[1] + 0.2f;
    if (func_01E480(out, tmp, q, 0x38, 0, 1.2f) != 0) {
        a0->f34 = a0->f34 + x;
    } else {
        a0->f45 = 5;
    }
}
