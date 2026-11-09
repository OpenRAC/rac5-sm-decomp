/* LEVEL_04.REL:0x1260A0: reviewed 480-byte candidate, held for ABI review.
 * Vertical-cylinder style hit test; writes the hit parameter and a normalised
 * direction.
 * gnu-ee-trial C with gnu-ee-trial links 480/480 bytes and is byte-exact at
 * this and 1 other USA placement, but the prototypes disagree.
 * It defines the function returning int with (pointer, pointer, pointer,
 * pointer, float, float), but the accepted caller LEVEL_04_01F9B0.c declares
 * it returning int with (pointer, int, int, pointer, float, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern float sqrtf(float x);

static __inline__ unsigned char Solve(float *tOut, float ndy, float h, float disc)
{
    float t;
    float u;

    if (disc < 0.0f) {
        return 0;
    }
    t = sqrtf(disc);
    u = -t - ndy;
    if (u > h) {
        return 0;
    }
    if (u >= 0.0f) {
        *tOut = u;
        return 1;
    }
    if (ndy <= t) {
        *tOut = 0.0f;
        return 1;
    }
    return 0;
}

int func_1260A0(float *tOut, float *dirOut, float *p, float *c, float h, float r2)
{
    float dx;
    float ndy;
    float dy;
    float dz;
    float inv;
    float len2;
    float dy2;

    dx = p[0] - c[0];
    dy = p[1] - c[1];
    dz = p[2] - c[2];
    ndy = -dy;
    if (!Solve(tOut, ndy, h, ndy * ndy + r2 - (dx * dx + dy * dy + dz * dz))) {
        return 0;
    }
    dy2 = dy - *tOut;
    len2 = dx * dx + dy2 * dy2 + dz * dz;
    if (len2 < 1.0000001111620804e-06f) {
        dirOut[0] = 0.0f;
        dirOut[1] = 1.0f;
        dirOut[2] = 0.0f;
    } else {
        inv = 1.0f / sqrtf(len2);
        dirOut[0] = dx * inv;
        dirOut[1] = dy2 * inv;
        dirOut[2] = dz * inv;
    }
    return 1;
}
