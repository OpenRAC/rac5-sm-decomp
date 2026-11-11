/* LEVEL_19:0x112F38 -- placement copy of LEVEL_16_112898.c: finds the nearest of two candidate objects to a point and optionally returns the squared distance. */
typedef struct {
    float x;
    float y;
    float z;
} Vec112898;

typedef struct {
    char pad0[0x30];
    Vec112898 pos;
} Obj112898;

extern Obj112898 *func_113490(int i);
extern int func_037638(Obj112898 *o);

int func_112F38(Vec112898 *p, float *out)
{
    unsigned int i;
    int best = 0;
    float bestd = 10000.0f;

    for (i = 0; i < 2; i++) {
        Obj112898 *o = func_113490(i);
        if (o != 0 && func_037638(o) == 0) {
            Vec112898 *v = &o->pos;
            float dx = o->pos.x - p->x;
            float dy = v->y - p->y;
            float dz = v->z - p->z;
            float d = dx * dx + dy * dy + dz * dz;
            if (d < bestd) {
                bestd = d;
                best = (int)o;
            }
        }
    }
    if (best != 0 && out != 0)
        *out = bestd;
    return best;
}
