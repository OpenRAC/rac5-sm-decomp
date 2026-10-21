/* LEVEL_18.REL:0x005720 -- adds the computed vector. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_0056B8(V3 *out, V3 *b);

void func_005720(V3 *a0, V3 *a1, V3 *a2)
{
    V3 r;

    func_0056B8(&r, a2);
    a0->x = a1->x + r.x;
    a0->y = a1->y + r.y;
    a0->z = a1->z + r.z;
}
