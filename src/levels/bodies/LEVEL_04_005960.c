/* LEVEL_04:0x005960 -- subtracts the vector produced by the level routine
   from the caller's source vector and stores the result in the first vector. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_005890(V3 *out, void *arg);

void func_005960(V3 *dst, V3 *src, void *arg)
{
    V3 t;

    func_005890(&t, arg);
    dst->x = src->x - t.x;
    dst->y = src->y - t.y;
    dst->z = src->z - t.z;
}
