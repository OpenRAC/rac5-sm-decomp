/* LEVEL_03:0x1A2578 -- copies the two global float triples into the two output vectors and returns 1. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_0023F880;
extern Vec3 D_0023F890;

static __inline__ void Copy3(float *d, Vec3 *s)
{
    d[0] = s->x;
    d[1] = s->y;
    d[2] = s->z;
}

int func_1A2578(float *a, float *b)
{
    Copy3(a, &D_0023F880);
    Copy3(b, &D_0023F890);
    return 1;
}
