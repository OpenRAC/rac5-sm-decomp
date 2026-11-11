/* LEVEL_03:0x005B68 -- placement copy of LEVEL_01_005B30.c: subtracts the vector the helper computes from the
   source vector and stores it in the destination. */
struct V3 {
    float x;
    float y;
    float z;
};

extern void func_005A98(float *out, float *arg, float s);

void func_005B68(struct V3 *dst, struct V3 *src, void *arg, float s)
{
    struct V3 t;

    func_005A98((float *)&t, (float *)arg, s);
    dst->x = src->x - t.x;
    dst->y = src->y - t.y;
    dst->z = src->z - t.z;
}
