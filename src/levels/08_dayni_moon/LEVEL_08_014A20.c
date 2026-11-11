/* LEVEL_08:0x014A20 -- placement copy of LEVEL_01_014228.c: casts down from a point to find the ground and reports whether it is within reach. */
struct Vec3 {
    float x, y, z;
};
struct Hit {
    float f[6];
};
extern float D_0027E984;
extern int func_0213D8(float *a, struct Hit *h, struct Vec3 *v, int n, int z, float y, float s);

int func_014A20(struct Vec3 *p, float *outY, struct Hit *outHit, float h)
{
    struct Vec3 v;
    struct Hit hit;
    float drop;
    v.x = p->x;
    v.y = p->y + h;
    v.z = p->z;
    if ((unsigned char)func_0213D8(&drop, &hit, &v, 0x38, 0, v.y - D_0027E984, 0.8f)) {
        v.y = v.y - drop;
        if (outY)
            *outY = v.y;
        if (__builtin_fabsf(v.y - p->y) <= h) {
            if (outHit)
                *outHit = hit;
            return 1;
        }
        return 0;
    }
    if (outY)
        *outY = -1e30f;
    return 0;
}
