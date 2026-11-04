float tanf(float);
void func_0840D0(void *, float, float, float, float);

void func_084158(void *p, float a, float b, float c, float d)
{
    float t1 = 1.0f / tanf(b * 0.5f);
    float t2 = 1.0f / tanf(a * 0.5f);

    func_0840D0(p, t2, t1, c, d);
}
