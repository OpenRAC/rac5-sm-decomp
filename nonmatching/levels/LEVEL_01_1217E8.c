/* USA LEVEL_01.REL:0x1217E8 (21 November 2026): exact linked bytes under gnu-
 * ee-trial-divpad, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_011DD0.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern float expf(float);
extern float cosf(float);
extern float sqrtf(float);

void func_1217E8(float *out, float w, float k, float t)
{
    float h;
    float a;
    float e;
    float c;
    float s;
    float u;
    float v;

    h = k * -0.5f;
    a = w * t;
    e = expf(h * t) / w;
    c = cosf(a);
    s = sqrtf(1.0f - c * c);
    if (a < 0.0f) {
        s = -s;
    }
    u = w * c;
    v = h * s;
    out[0] = e * (u - v);
    out[3] = e * (u + v);
    out[1] = e * s;
    out[2] = e * -s * (h * h + w * w);
}
