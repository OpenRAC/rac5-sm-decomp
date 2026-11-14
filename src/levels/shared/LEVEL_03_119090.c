/* LEVEL_03:0x119090 -- is the point a2 inside the box spanned by the half widths |a0 - a1|?  The three signed distances are folded with a branchless minimum and the result is compared with zero. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern float fabsf(float x);

#define MINF(a, b) ((((a) + (b)) - fabsf((b) - (a))) * 0.5f)

int func_119090(Vec3 *a0, Vec3 *a1, Vec3 *a2)
{
    float ax = a0->x;
    float ay = a0->y;
    float az = a0->z;
    float bx = a1->x;
    float by = a1->y;
    float bz = a1->z;
    float d0 = fabsf(ax - bx);
    float d1 = fabsf(ay - by);
    float d2 = fabsf(az - bz);
    float p = a2->x - d0;
    float q = a2->y - d1;
    float s = a2->z - d2;
    float m = MINF(MINF(p, q), s);

    if (0.0f <= m) {
        return 1;
    }
    return 0;
}
