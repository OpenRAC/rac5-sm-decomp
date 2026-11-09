/* LEVEL_15.REL:0x0EB910: reviewed 180-byte candidate, held for ABI review.
 * Transforms a point offset from a base by a 3x3 matrix row set.
 * pinned C with gnu-ee-trial links 180/180 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It defines the function returning void with (pointer, pointer, pointer), but
 * the accepted caller LEVEL_15_10B220.c declares it returning void with
 * (pointer, pointer, pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
static inline void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static inline float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void func_0EB910(float *out, float *m, float *b)
{
    float d[3];
    float x;
    float y;
    float z;

    Sub3(d, b, m + 9);
    x = Dot3(d, m);
    y = Dot3(d, m + 3);
    z = Dot3(d, m + 6);
    out[0] = x;
    out[1] = y;
    out[2] = z;
}
