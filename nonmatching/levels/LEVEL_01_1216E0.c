/* LEVEL_01.REL:0x1216E0: reviewed 264-byte candidate, held for ABI review.
 * Fills a 2x2 matrix with the exponential of a damped system for time c.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 264/264 bytes and is byte-
 * exact at this and 19 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer, float, float, float),
 * but the accepted caller LEVEL_01_002530.c declares it returning void with
 * (float, float, float, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern float sqrtf(float x);
extern float expf(float x);

void func_1216E0(float *m, float a, float b, float c)
{
    float s, p, q, inv, ep, eq, t, u;
    float ns;

    s = sqrtf(b * b + a * a * 4.0f);
    ns = -s;
    q = (ns + b) * 0.5f;
    p = (ns - b) * 0.5f;
    inv = 1.0f / (p - q);
    eq = expf(q * c);
    ep = expf(p * c);
    t = (ep - eq) * inv;
    u = (p * ep - q * eq) * inv;
    m[1] = t;
    m[3] = u;
    m[0] = eq - q * t;
    m[2] = q * (eq - u);
}
