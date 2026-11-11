/* LEVEL_17:0x112100 -- finds the nearest live object with a matching key among the first two slots. */
struct Obj {
    char pad00[0x30];
    float pos[3];
    char pad3C[0xC0];
    int fFC;
};

extern struct Obj *func_112478(unsigned int);
extern int func_037C08(struct Obj *);

struct Obj *func_112100(float *pos, float *outDist, int key)
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
        if (o != 0 && func_037C08(o) == 0 && o->fFC == key) {
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
