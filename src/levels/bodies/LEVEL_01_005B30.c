/* LEVEL_01:0x005B30 -- subtracts the vector the helper computes from the
   source vector and stores it in the destination. */
struct V3 {
    float x;
    float y;
    float z;
};

extern void func_005A60(struct V3 *out, void *arg);

void func_005B30(struct V3 *dst, struct V3 *src, void *arg)
{
    struct V3 t;

    func_005A60(&t, arg);
    dst->x = src->x - t.x;
    dst->y = src->y - t.y;
    dst->z = src->z - t.z;
}
