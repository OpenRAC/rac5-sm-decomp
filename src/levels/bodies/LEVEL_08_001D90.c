extern void func_001C10(float *out, float a, float b, float c, float d);
extern void func_136E98(long long, long long, float *);

void func_001D90(long long first, long long second, float a, float b, float c, float d)
{
    float scratch[4];
    func_001C10(scratch, a, b, c, d);
    func_136E98(first, second, scratch);
}
