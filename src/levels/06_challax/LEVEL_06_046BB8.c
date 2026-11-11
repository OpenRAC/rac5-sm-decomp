typedef struct {
    char pad[0x1B8];
    float v;
} T;

void func_04A490(T *a0, float k)
{
    float v = a0->v + k;
    a0->v = v;
    if (v < -0.38f) {
        a0->v = -0.38f;
    }
}
