/* USA LEVEL_18.REL:0x111738, 264-byte candidate (21 November 2026).
 * Measured sdk991111: 24 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Obj { char pad0[0x30]; float x; float y; float z; } Obj;
extern Obj *func_111AA0(int i);
extern int func_036BE8(Obj *o);
extern int func_075B30(int filter, float *pos);

Obj *func_111738(float *pos, int filter, float *outDist)
{
    Obj *best = 0;
    Obj *o;
    unsigned int i;
    float bestDist = 10000.0f;
    float dx, dz, d;
    float *p;
    for (i = 0; i < 2; i++) {
        o = func_111AA0(i);
        if (o != 0 && func_036BE8(o) == 0) {
            p = &o->x;
            dx = o->x - pos[0];
            dz = p[2] - pos[2];
            d = dx * dx + dz * dz;
            if (d < bestDist && func_075B30(filter, p) != 0) {
                bestDist = d;
                best = o;
            }
        }
    }
    if (best != 0 && outDist != 0)
        *outDist = bestDist;
    return best;
}
