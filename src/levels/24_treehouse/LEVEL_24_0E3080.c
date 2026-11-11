typedef struct {
    char pad[0x14];
    float *v14;
    float v18;
} T;

void func_0903D0(T *a0, void *a1, int a2);

void func_0E3030(T *a0, void *a1, float *a2)
{
    func_0903D0(a0, a1, 1);
    a0->v14 = a2;
    a0->v18 = 1.0f / a2[0];
}
