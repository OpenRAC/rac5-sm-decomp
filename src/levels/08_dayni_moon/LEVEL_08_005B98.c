typedef struct {
    float x;
    float y;
    float z;
} V;

extern void func_005AC8(float *out, float *in, float s);

void func_005B98(V *dst, V *src, V *out, float s)
{
    V t;

    func_005AC8((float *)&t, (float *)out, s);
    dst->x = src->x - t.x;
    dst->y = src->y - t.y;
    dst->z = src->z - t.z;
}
