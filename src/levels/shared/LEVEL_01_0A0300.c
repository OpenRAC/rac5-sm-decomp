/* LEVEL_01:0x0A0300 -- adds a weighted point to a 16-entry list, replacing the lowest-x entry when full. */
typedef struct Ent {
    float x, y, z, w;
} Ent;

typedef struct Obj {
    char pad0[0x18];
    Ent e[16];
    unsigned int n;
} Obj;

void func_0A0300(Obj *o, float x, float y, float w)
{
    Ent *min;
    Ent *last;
    Ent *p;
    float cur;
    unsigned int i;
    unsigned int n = o->n;

    if (x < 0.5f)
        return;
    if (n >= 16) {
        cur = x;
        min = 0;
        last = &o->e[15];
        for (i = 0; i < n; i++) {
            if (min == 0 || o->e[i].x < cur) {
                min = &o->e[i];
                cur = o->e[i].x;
            }
        }
        if (min != 0) {
            *min = *last;
            last->x = x;
            last->y = y;
            last->z = 0.0f;
            last->w = 1.0f / w;
        }
    } else {
        p = &o->e[n];
        p->y = y;
        p->x = x;
        p->z = 0.0f;
        p->w = 1.0f / w;
        o->n = o->n + 1;
    }
}
