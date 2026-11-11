extern void func_125620(float *a, float *b, const float *c,
                        const float *d, const float *e);

void func_1D2698(char *first, char *second, const float *vector)
{
    float *a;
    float *b;
    func_125620((float *)first, (float *)(first + 0x18), vector, (float *)(first + 0x18), (float *)first);
    a = (float *)(first + 0x0c);
    a[0] = vector[0];
    a[1] = vector[1];
    a[2] = vector[2];
    func_125620((float *)second, (float *)(second + 0x20), vector, (float *)(second + 0x20), (float *)second);
    b = (float *)(second + 0x10);
    b[0] = vector[0];
    b[1] = vector[1];
    b[2] = vector[2];
}


