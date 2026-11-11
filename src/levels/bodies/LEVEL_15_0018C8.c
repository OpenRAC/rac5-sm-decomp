extern void func_001748(float *out, float a, float b, float c, float d);
extern void func_0EA938(long long, long long, float *);

void func_0018C8(long long first, long long second, float a, float b, float c, float d)
{
    float scratch[4];
    func_001748(scratch, a, b, c, d);
    func_0EA938(first, second, scratch);
}
