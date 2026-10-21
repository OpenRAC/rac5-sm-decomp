typedef struct {
    float x;
    float y;
    float z;
} V;

extern void func_005820(V *out, V *in);

void func_005888(V *dst, V *src, V *out)
{
    V t;

    func_005820(&t, out);
    dst->x = src->x + t.x;
    dst->y = src->y + t.y;
    dst->z = src->z + t.z;
}
