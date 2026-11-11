/* LEVEL_04:0x005960 -- subtracts the vector produced by the level routine
   from the caller's source vector and stores the result in the first vector. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_005890(float *out, float *in, float s);

void func_005960(V3 *dst, V3 *src, void *arg, float s)
{
    V3 t;

    func_005890((float *)(&t), (float *)(arg), s);
    dst->x = src->x - t.x;
    dst->y = src->y - t.y;
    dst->z = src->z - t.z;
}
