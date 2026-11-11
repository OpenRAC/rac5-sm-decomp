/* LEVEL_17:0x111FF8 -- finds the accepted object nearest to a point among the first two slots. */
struct Obj {
    char pad00[0x30];
    float pos[3];
};

extern struct Obj *func_112478(unsigned int);

struct Obj *func_111FF8(float *pos, float *outDist, int (*filter)(struct Obj *, int))
{
    unsigned int i;
    struct Obj *best;
    struct Obj *o;
    float bestd;
    float d;
    float dx;
    float dy;
    float dz;
    float *q;

    best = 0;
    bestd = 10000.0f;
    i = 0;
    do {
        o = func_112478(i);
        if (o != 0 && filter(o, 0) != 0) {
            q = o->pos;
            dx = q[0] - pos[0];
            dy = q[1] - pos[1];
            dz = q[2] - pos[2];
            d = dx * dx + dy * dy + dz * dz;
            if (d < bestd) {
                bestd = d;
                best = o;
            }
        }
        i++;
    } while (i < 2);
    if (best != 0 && outDist != 0) {
        *outDist = bestd;
    }
    return best;
}
