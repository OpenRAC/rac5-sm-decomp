/* LEVEL_18:0x111738 -- finds the nearer in the XZ plane of two candidate objects that pass the validity tests and an extra filter on their position. */
typedef struct Obj { char pad0[0x30]; float x; float y; float z; } Obj;
extern Obj *func_111AA0(int i);
extern int func_036BE8(Obj *o);
extern int func_075B30(void *filter, float *pos);

Obj *func_111738(float *pos, void *filter, float *outDist)
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
