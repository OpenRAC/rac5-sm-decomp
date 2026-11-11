extern float D_0025029C;

void func_01A0B0(float *buf);
void func_16A0D8(void *a, void *b, float *buf);

void func_16A910(void *a, void *b)
{
    float buf[4];

    func_01A0B0(buf);
    buf[1] = D_0025029C;
    func_16A0D8(a, b, buf);
}
