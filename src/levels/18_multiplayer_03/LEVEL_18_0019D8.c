extern void func_001858(float *out, float a, float b, float c, float d);
extern void func_102BD8(long long, long long, float *);

void func_0019D8(long long first, long long second, float a, float b, float c, float d)
{
    float scratch[4];
    func_001858(scratch, a, b, c, d);
    func_102BD8(first, second, scratch);
}
