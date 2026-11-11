extern float sqrtf(float x);

float func_01C040(float *a0, float *a1, float *a2, float k)
{
    float d0 = a0[0] - a2[0];
    float d1 = a0[1] - a2[1];
    float d2 = a0[2] - a2[2];
    float t = a1[0] * d0 + a1[1] * d1 + a1[2] * d2;
    float disc = t * t + k - (d0 * d0 + d1 * d1 + d2 * d2);

    return sqrtf(disc) - t;
}
