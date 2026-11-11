/* LEVEL_07:0x19EAC0 -- placement copy of LEVEL_03_1A2578.c: copies the two global float triples into the two output vectors and returns 1. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_00239B50;
extern Vec3 D_00239B60;

static __inline__ void Copy3(float *d, Vec3 *s)
{
    d[0] = s->x;
    d[1] = s->y;
    d[2] = s->z;
}

int func_19EAC0(float *a, float *b)
{
    Copy3(a, &D_00239B50);
    Copy3(b, &D_00239B60);
    return 1;
}
