typedef struct {
    float v[7];
    int i;
} B;

extern void func_0E00E0(void *a0, B *a1, int a2);

void func_15FB10(void *a0, float *a1, float *a2)
{
    B b;

    b.v[0] = a1[0];
    b.v[1] = a1[1];
    b.v[2] = a1[2];
    b.v[3] = a2[0];
    b.v[4] = a2[1];
    b.v[5] = a2[2];
    b.v[6] = 0.5f;
    b.i = 0;
    func_0E00E0(a0, &b, 0);
}
