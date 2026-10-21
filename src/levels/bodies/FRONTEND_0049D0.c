/* FRONTEND:0x0049D0 -- half-angle tangents fed to a helper. */
float tanf(float);
void func_004948(void *, float, float, float, float);

void func_0049D0(void *p, float a, float b, float c, float d)
{
    float t1 = 1.0f / tanf(b * 0.5f);
    float t2 = 1.0f / tanf(a * 0.5f);

    func_004948(p, t2, t1, c, d);
}
