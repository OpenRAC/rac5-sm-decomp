extern float D_0024AD1C;
extern void func_01A9F0(float *b);
extern void func_177020(int a, int b, float *c);

void f(int a0, int a1)
{
    float buf[4];

    func_01A9F0(buf);
    buf[1] = D_0024AD1C;
    func_177020(a0, a1, buf);
}
