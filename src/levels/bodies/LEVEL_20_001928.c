extern void func_0017A8(float *out, float a, float b, float c, float d);
extern void func_0DC7E8(long long, long long, float *);

void func_001928(long long first, long long second, float a, float b, float c, float d)
{
    float scratch[4];
    func_0017A8(scratch, a, b, c, d);
    func_0DC7E8(first, second, scratch);
}
