typedef struct {
    float x;
    float y;
    float z;
} V;

extern void func_005A70(V *out, V *in);

void func_005AD8(V *dst, V *src, V *out)
{
    V t;

    func_005A70(&t, out);
    dst->x = src->x + t.x;
    dst->y = src->y + t.y;
    dst->z = src->z + t.z;
}
