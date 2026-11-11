/* LEVEL_17:0x111D38 -- placement copy of LEVEL_16_1127C0.c: finds the closest of two objects to a point, optionally returning the squared distance. */
struct Vec {
    float x, y, z;
};
struct Obj {
    char pad[0x30];
    struct Vec pos;
};
extern float D_001C2A58;
extern struct Obj *func_112478(unsigned int i);

struct Obj *func_111D38(struct Vec *p, float *out)
{
    unsigned int i;
    struct Obj *best = 0;
    struct Obj *o;
    float bestd = D_001C2A58;
    float dx, dy, dz, d;
    struct Vec *v;

    for (i = 0; i < 2; i++) {
        o = func_112478(i);
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
