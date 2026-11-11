/* LEVEL_05:0x181C58 -- placement copy of LEVEL_03_1A2578.c: copies the two global float triples into the two output vectors and returns 1. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_00210E50;
extern Vec3 D_00210E40;

static __inline__ void Copy3(float *d, Vec3 *s)
{
    d[0] = s->x;
    d[1] = s->y;
    d[2] = s->z;
}

int func_181C58(float *a, float *b)
{
    Copy3(a, &D_00210E50);
    Copy3(b, &D_00210E40);
    return 1;
}
