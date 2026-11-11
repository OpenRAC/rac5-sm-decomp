extern void func_001C18(float *out, float a, float b, float c, float d);
extern void func_123DF0(long long, long long, float *);

void func_001D98(long long first, long long second, float a, float b, float c, float d)
{
    float scratch[4];
    func_001C18(scratch, a, b, c, d);
    func_123DF0(first, second, scratch);
}
