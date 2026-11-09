/* LEVEL_21:0x060FA8 -- placement copy of FRONTEND_0049D0.c: half-angle tangents fed to a helper. */
float tanf(float);
void func_060F20(void *, float, float, float, float);

void func_060FA8(int value, float a, float b, float c, float d)
{
    float t1 = 1.0f / tanf(b * 0.5f);
    float t2 = 1.0f / tanf(a * 0.5f);

    func_060F20((void *)value, t2, t1, c, d);
}
