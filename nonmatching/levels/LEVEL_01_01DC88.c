/* LEVEL_01.REL:0x01DC88: reviewed 404-byte candidate, held for ABI review.
 * Marches along a ray until a probe test succeeds, then refines the distance.
 * gnu-ee-trial C with gnu-ee-trial links 404/404 bytes and is byte-exact at
 * this and 19 other USA placements, but the prototypes disagree.
 * It declares func_01C040 returning float with (float, pointer, pointer,
 * pointer), but the accepted LEVEL_01_01C040.c defines it returning float with
 * (pointer, pointer, pointer, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_1132C8(float a, void *b, void *c, float *d);
extern int func_110D70(float *b, void *c, void *d, float *e, float a);
extern float func_01C040(float a, float *b, float *c, float *d);

float func_01DC88(float *p, float *d, void *a, void *b, float max, float base, float k)
{
    float pt[3];
    float hit[3];
    float t;
    float s;
    float u;

    t = base * 1.5f;
    for (;;) {
        if (max < t) {
            break;
        }
        pt[0] = p[0] + d[0] * t;
        pt[1] = p[1] + d[1] * t;
        pt[2] = p[2] + d[2] * t;
        s = base + k * t;
        if (func_1132C8(s, a, b, pt)) {
            max = t;
            break;
        }
        t += s * 1.5f;
    }
    u = base + k * max;
    pt[0] = p[0] + d[0] * max;
    pt[1] = p[1] + d[1] * max;
    pt[2] = p[2] + d[2] * max;
    if (func_110D70(hit, a, b, pt, u)) {
        max -= func_01C040(u * u, hit, d, pt);
    }
    return max;
}
