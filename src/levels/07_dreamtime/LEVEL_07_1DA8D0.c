extern void func_12A7A8(float *a, float *b, const float *c,
                        const float *d, const float *e);

void func_1DA8D0(char *first, char *second, const float *vector)
{
    float *a;
    float *b;
    func_12A7A8((float *)first, (float *)(first + 0x18), vector, (float *)(first + 0x18), (float *)first);
    a = (float *)(first + 0x0c);
    a[0] = vector[0];
    a[1] = vector[1];
    a[2] = vector[2];
    func_12A7A8((float *)second, (float *)(second + 0x20), vector, (float *)(second + 0x20), (float *)second);
    b = (float *)(second + 0x10);
    b[0] = vector[0];
    b[1] = vector[1];
    b[2] = vector[2];
}


