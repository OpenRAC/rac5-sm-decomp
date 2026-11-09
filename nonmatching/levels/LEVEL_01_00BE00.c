/* LEVEL_01.REL:0x00BE00: reviewed 304-byte candidate, held for ABI review.
 * Keeps the nearest hit of a plane test, copying its point and its source
 * record.
 * pinned C with gnu-ee-trial links 304/304 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_00BCB8 returning int with (pointer, pointer, pointer,
 * pointer, int, pointer, float, float, float, float, float, float), but the
 * accepted LEVEL_01_00BCB8.c defines it returning int with (pointer, pointer,
 * pointer, int, int, int, float, float, float, float, float, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct V3_00BE00 {
    float x;
    float y;
    float z;
};

extern int func_00BCB8(float *a0, struct V3_00BE00 *a1, void *a2, float *a3, int a4, struct V3_00BE00 *a5,
                       float f12, float f13, float f14, float f15, float f16, float f17);

void func_00BE00(float *best, struct V3_00BE00 *hit, struct V3_00BE00 *src, float *n, struct V3_00BE00 *p,
                 float f12, float f13, float f14, float f15, float f16)
{
    struct V3_00BE00 pos;
    char buf[0x50];
    float t[4];
    float d;

    d = p->x * n[0] + p->y * n[1] + p->z * n[2];
    if (func_00BCB8(t, &pos, buf, n, 4, p, -d, f12, f13, f14, f15, f16) != 0) {
        if (*best < t[0]) {
            return;
        }
        if (*best < 0.0001f && pos.z > hit->z) {
            return;
        }
        *best = t[0];
        *hit = pos;
        *src = *p;
    }
}
