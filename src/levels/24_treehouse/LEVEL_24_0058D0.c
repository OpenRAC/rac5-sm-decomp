typedef struct {
    float x;
    float y;
    float z;
} V;

extern void func_005868(float *out, float *in, float s);

void func_0058D0(V *dst, V *src, V *out, float s)
{
    V t;

    func_005868((float *)(&t), (float *)(out), s);
    dst->x = src->x + t.x;
    dst->y = src->y + t.y;
    dst->z = src->z + t.z;
}
