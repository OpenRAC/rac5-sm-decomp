extern float sqrtf(float x);

typedef struct {
    float x;
    float y;
    float z;
} V;

float func_01C9B8(V *a, V *b, V *c, float k)
{
    float dx = a->x - c->x;
    float dy = a->y - c->y;
    float dz = a->z - c->z;
    float s = b->x * dx + b->y * dy + b->z * dz;
    float q = dx * dx + dy * dy + dz * dz;
    float t = s * s + k - q;
    float r = sqrtf(t);

    return r - s;
}
