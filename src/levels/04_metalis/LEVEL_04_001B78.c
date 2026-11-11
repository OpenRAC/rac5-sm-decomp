extern void func_0019F8(float *out, float a, float b, float c, float d);
extern void func_131DE8(long long, long long, float *);

void func_001B78(long long first, long long second, float a, float b, float c, float d)
{
    float scratch[4];
    func_0019F8(scratch, a, b, c, d);
    func_131DE8(first, second, scratch);
}
