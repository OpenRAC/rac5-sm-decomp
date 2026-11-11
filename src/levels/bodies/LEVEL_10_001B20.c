extern void func_0019A0(float *out, float a, float b, float c, float d);
extern void func_123AF8(long long, long long, float *);

void func_001B20(long long first, long long second, float a, float b, float c, float d)
{
    float scratch[4];
    func_0019A0(scratch, a, b, c, d);
    func_123AF8(first, second, scratch);
}
