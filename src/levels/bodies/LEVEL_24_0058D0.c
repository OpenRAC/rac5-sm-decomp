typedef struct {
    float x;
    float y;
    float z;
} V;

extern void func_005868(V *out, V *in);

void func_0058D0(V *dst, V *src, V *out)
{
    V t;

    func_005868(&t, out);
    dst->x = src->x + t.x;
    dst->y = src->y + t.y;
    dst->z = src->z + t.z;
}
