/* LEVEL_16.REL:0x16D208: reviewed 296-byte candidate, held for ABI review.
 * Searches nearby slots for a resource that fails a check against another
 * object.
 * pinned C with gnu-ee-trial links 296/296 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It declares func_021670 returning int with (pointer, int), but the accepted
 * LEVEL_16_021670.c defines it returning void with (pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    float x, y, z;
} V3;
typedef struct {
    char pad0[0x30];
    V3 pos;
    char pad3C[0xF4 - 0x3C];
    int active;
    int arg;
} Obj;
extern int func_0383A8(Obj *o);
extern int func_021670(Obj *o, unsigned slot);
extern int func_0225E0(unsigned slot, unsigned idx);
extern int func_112C48(int h);
extern int func_022660(unsigned slot, int h, int arg);

static inline float Dist2(V3 *a, V3 *b)
{
    float x = b->x - a->x;
    float y = b->y - a->y;
    float z = b->z - a->z;
    return x * x + y * y + z * z;
}

int func_16D208(Obj *a, Obj *b)
{

    unsigned s;
    unsigned i;
    int h;

    if (!b->active)
        return 0;
    if (func_0383A8(b))
        return 0;

    if (9.0f <= Dist2(&a->pos, &b->pos))
        return 0;
    for (s = 1; s < 16; s++) {
        if (!func_021670(b, s))
            continue;
        for (i = 0; i < 3; i++) {
            h = func_0225E0(s, i);
            if (h && func_112C48(h)) {
                if (!func_022660(s, h, b->arg))
                    return 1;
            }
        }
    }
    return 0;
}
