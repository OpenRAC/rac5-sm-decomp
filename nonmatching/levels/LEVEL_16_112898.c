/* LEVEL_16.REL:0x112898: reviewed 252-byte candidate, held for ABI review.
 * Finds the nearest of two candidate objects to a point and optionally returns
 * the squared distance.
 * pinned C with gnu-ee-trial links 252/252 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It defines the function returning pointer with (pointer, pointer), but the
 * accepted caller LEVEL_16_16E698.c declares it returning int with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
} Vec112898;

typedef struct {
    char pad0[0x30];
    Vec112898 pos;
} Obj112898;

extern Obj112898 *func_112CE8(int i);
extern int func_0383A8(Obj112898 *o);

Obj112898 *func_112898(Vec112898 *p, float *out)
{
    unsigned int i;
    Obj112898 *best = 0;
    float bestd = 10000.0f;

    for (i = 0; i < 2; i++) {
        Obj112898 *o = func_112CE8(i);
        if (o != 0 && func_0383A8(o) == 0) {
            Vec112898 *v = &o->pos;
            float dx = o->pos.x - p->x;
            float dy = v->y - p->y;
            float dz = v->z - p->z;
            float d = dx * dx + dy * dy + dz * dz;
            if (d < bestd) {
                bestd = d;
                best = o;
            }
        }
    }
    if (best != 0 && out != 0)
        *out = bestd;
    return best;
}
