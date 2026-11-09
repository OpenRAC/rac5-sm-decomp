/* LEVEL_18:0x111470 -- placement copy of LEVEL_16_1127C0.c: finds the closest of two objects to a point, optionally returning the squared distance. */
struct Vec {
    float x, y, z;
};
struct Obj {
    char pad[0x30];
    struct Vec pos;
};
extern float D_001D0B58;
extern struct Obj *func_111AA0(unsigned int i);

struct Obj *func_111470(struct Vec *p, float *out)
{
    unsigned int i;
    struct Obj *best = 0;
    struct Obj *o;
    float bestd = D_001D0B58;
    float dx, dy, dz, d;
    struct Vec *v;

    for (i = 0; i < 2; i++) {
        o = func_111AA0(i);
        if (o) {
            v = &o->pos;
            dx = v->x - p->x;
            dy = v->y - p->y;
            dz = v->z - p->z;
            d = dx * dx + dy * dy + dz * dz;
            if (d < bestd) {
                bestd = d;
                best = o;
            }
        }
    }
    if (out)
        *out = bestd;
    return best;
}
