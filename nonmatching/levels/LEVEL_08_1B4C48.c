/* USA LEVEL_08.REL:0x1B4C48, 296-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 12 differing words; first difference at 0x64.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sqrtf(float x);
extern float func_0274E8(void);
extern float D_0026F9B8;

void func_1B4C48(float *out, float *from, float *to)
{
    float d[3];
    float s;
    float k;
    float inv;
    float x;
    float y;
    float z;
    float len;

    d[0] = to[0] - from[0];
    d[1] = to[1] - from[1];
    d[2] = to[2] - from[2];
    s = D_0026F9B8 / func_0274E8();
    inv = 1.0f / s;
    x = inv * d[0];
    y = d[1] / s + s * 0.005555556155741215f;
    z = inv * d[2];
    out[0] = x;
    out[1] = y;
    out[2] = z;
    len = sqrtf(x * x + y * y + z * z);
    k = 1.0f / len;
    out[0] = k * out[0];
    out[1] = k * out[1];
    out[2] = k * out[2];
}
