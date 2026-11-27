/* LEVEL_02:0x17B088 -- builds a point from the object's position minus its velocity scaled by a fixed step and passes it to the effect starter. */
extern void func_01CB90(float scale, void *point, int a, int b, int c, int d);

static __inline__ void ScaleAdd(float *d, float *a, float *b, float s)
{
    d[0] = a[0] + b[0] * s;
    d[1] = a[1] + b[1] * s;
    d[2] = a[2] + b[2] * s;
}

void func_17B088(char *o)
{
    float p[3];

    ScaleAdd(p, (float *)(o + 0x30), (float *)(o + 0x10), -0.20000000298023224f);
    func_01CB90(0.20000000298023224f, p, 0x129, 0x101, 4, 1);
}
