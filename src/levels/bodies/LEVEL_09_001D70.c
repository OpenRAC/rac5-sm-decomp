extern void func_001BF0(float *out, float a, float b, float c, float d);
extern void func_11ECD0(long long, long long, float *);

void func_001D70(long long first, long long second, float a, float b, float c, float d)
{
    float scratch[4];
    func_001BF0(scratch, a, b, c, d);
    func_11ECD0(first, second, scratch);
}
