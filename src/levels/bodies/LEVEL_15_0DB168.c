/* LEVEL_15:0x0DB168 -- finds a triangle hit by a test and writes the best distance. */
struct Tri {
    unsigned short i0, i1, i2;
    char pad[0x46];
};
struct Vec3 {
    float x, y, z;
};
extern int func_0E2C28(float *p, void *a, struct Vec3 *v0, struct Vec3 *v1, struct Vec3 *v2, float t);

struct Tri *func_0DB168(float *out, void *a, struct Tri *tris, int count, struct Vec3 *verts, float best)
{
    struct Tri *end = tris + count;
    struct Tri *hit = 0;
    for (; tris != end; tris++) {
        if (func_0E2C28(&best, a, verts + tris->i0, verts + tris->i1, verts + tris->i2, best))
            hit = tris;
    }
    if (hit)
        *out = best;
    return hit;
}
