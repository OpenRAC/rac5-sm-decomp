extern void func_001960(float *out, float a, float b, float c, float d);
extern void func_0FDE50(long long, long long, float *);

void func_001AE0(long long first, long long second, float a, float b, float c, float d)
{
    float scratch[4];
    func_001960(scratch, a, b, c, d);
    func_0FDE50(first, second, scratch);
}
