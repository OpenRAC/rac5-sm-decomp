/* LEVEL_02:0x1A1160 -- tests whether the second object lies inside a height band and a horizontal radius around the first. */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;
struct Obj {
    char pad[0x30];
    V3 pos;
};
static inline void vsub(V3 *r, V3 *a, V3 *b)
{
    r->x = a->x - b->x;
    r->y = a->y - b->y;
    r->z = a->z - b->z;
}

int func_1A1160(struct Obj *a, struct Obj *b)
{
    V3 d;

    vsub(&d, &b->pos, &a->pos);
    d.y -= 0.72500002384185791f;
    if (0.15000000596046448f < d.y || d.y < -0.05000000074505806f)
        return 0;
    return d.x * d.x + d.z * d.z < 1.21000003814697266f;
}
