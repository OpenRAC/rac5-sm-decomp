/* LEVEL_02:0x035658 -- side test between two segments: the two
   differences of the end points are scaled by the direction of the other
   segment and the sign of the result is tested against a small tolerance. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad[0x10];
    float u;
    float v;
} Vec2;

typedef struct {
    float s;
    float t;
} Pair;

int func_035658(Vec3 *a0, Vec2 *a1, Vec3 *a2)
{
    Pair p;
    float r;

    p.s = a2->x - a0->x;
    p.t = a2->z - a0->z;
    r = p.t * a1->u - p.s * a1->v;
    if (r >= -1.0e-4f) {
        return 1;
    }
    return 0;
}
