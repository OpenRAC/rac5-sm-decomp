/* LEVEL_10:0x19D468 -- copies sixteen words of the object into its linked record, builds a basis from a helper, clears the basis' fourth column and sets a unit translation row, then calls the follow-up helper. */
extern void func_124488(float *a, float *b, float *c, float x, float y, float z);
extern void func_123238(float *o, float *m, float *p);

static __inline__ void Unit(float *p)
{
    p[0] = 0.0f;
    p[3] = 1.0f;
    p[2] = 0.0f;
    p[1] = 0.0f;
}

void func_19D468(float *o, float x, float y, float z)
{
    float a[4];
    float b[4];
    float c[4];
    float d[4];
    float *dst;
    float *p;

    dst = *(float **)((char *)o + 0x58);
    dst[8] = o[8];
    dst[9] = o[9];
    dst[10] = o[10];
    dst[11] = o[11];
    dst[0] = o[0];
    dst[1] = o[1];
    dst[2] = o[2];
    dst[3] = o[3];
    dst[4] = o[4];
    dst[5] = o[5];
    dst[6] = o[6];
    dst[7] = o[7];
    dst[12] = o[12];
    dst[13] = o[13];
    dst[14] = o[14];
    dst[15] = o[15];
    func_124488(a, b, c, x, y, z);
    c[3] = 0.0f;
    b[3] = 0.0f;
    a[3] = 0.0f;
    d[0] = 0.0f;
    p = d;
    p[3] = 1.0f;
    p[2] = 0.0f;
    p[1] = 0.0f;
    func_123238(o, a, o);
}
