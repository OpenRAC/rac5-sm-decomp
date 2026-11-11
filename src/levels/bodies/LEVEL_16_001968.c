extern void func_0017E8(float *out, float a, float b, float c, float d);
extern void func_104310(long long, long long, float *);

void func_001968(long long first, long long second, float a, float b, float c, float d)
{
    float scratch[4];
    func_0017E8(scratch, a, b, c, d);
    func_104310(first, second, scratch);
}
