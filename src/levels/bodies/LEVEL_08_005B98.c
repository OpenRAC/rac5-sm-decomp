typedef struct {
    float x;
    float y;
    float z;
} V;

extern void func_005AC8(V *out, V *in);

void func_005B98(V *dst, V *src, V *out)
{
    V t;

    func_005AC8(&t, out);
    dst->x = src->x - t.x;
    dst->y = src->y - t.y;
    dst->z = src->z - t.z;
}
