/* LEVEL_02:0x037E50 -- offsets a vector by a scaled copy of a source point. */

void func_037E50(float *a0, float *a1, float *a2)
{
    float *v = a0 + 4;
    float k = -0.196f;
    float h = 0.5f;

    a2[0] = a1[0] + v[0] * k;
    a2[1] = a1[1] + v[1] * k;
    a2[2] = a1[2] + v[2] * k;
    a2[0] = a2[0] + v[0] * h;
    a2[1] = a2[1] + v[1] * h;
    a2[2] = a2[2] + v[2] * h;
}
