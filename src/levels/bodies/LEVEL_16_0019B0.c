/* LEVEL_16:0x0019B0 -- adds the vector returned by func_001968 to the
   vector of the second argument. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_001968(V3 *out);

void func_0019B0(V3 *dst, int unused, V3 *src)
{
    V3 t;

    func_001968(&t);
    dst->x = src->x + t.x;
    dst->y = src->y + t.y;
    dst->z = src->z + t.z;
}
