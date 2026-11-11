typedef struct {
    float x;
    float y;
    float z;
} V3;

void func_04DC08(V3 *out, float *a1)
{
    float *p = a1 + 4;
    float *q = a1 + 12;
    float k = 0.6f;

    out->x = q[0] + p[0] * k;
    out->y = q[1] + p[1] * k;
    out->z = q[2] + p[2] * k;
}
