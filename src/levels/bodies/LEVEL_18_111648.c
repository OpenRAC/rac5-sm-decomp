/* LEVEL_18:0x111648 -- placement copy of LEVEL_17_111F10.c: finds the nearer of two candidate objects in the XZ plane. */
typedef struct Obj { char pad0[0x30]; float x; float y; float z; } Obj;
extern Obj *func_111AA0(int i);
extern int func_036BE8(Obj *o);

Obj *func_111648(float *pos, float *outDist)
{
    Obj *best = 0;
    Obj *o;
    unsigned int i;
    float bestDist = 10000.0f;
    float dx, dz, d;
    for (i = 0; i < 2; i++) {
        o = func_111AA0(i);
        if (o != 0 && func_036BE8(o) == 0) {
            dx = o->x - pos[0];
            dz = o->z - pos[2];
            d = dx * dx + dz * dz;
            if (d < bestDist) {
                bestDist = d;
                best = o;
            }
        }
    }
    if (best != 0 && outDist != 0)
        *outDist = bestDist;
    return best;
}
