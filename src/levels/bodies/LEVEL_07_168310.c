/* LEVEL_07:0x168310 -- probes a point above a position and reports the hit object. */
typedef struct Vec { float x, y, z, w; } Vec;
typedef struct Inner { char pad[0x54]; int *val; } Inner;
typedef struct Hit {
    float p[4];
    Inner *obj;
    int kind;
    int pad[2];
} Hit;
typedef struct Info { char pad[0x24]; int tag; } Info;
typedef struct Obj { char pad[0x40]; Info *info; char pad2[0x10]; int *val; } Obj;
typedef struct Glob { char pad[0x30]; Vec v; } Glob;
extern Glob D_0024AA40;
extern int func_020C30(float f, Vec *a, Hit *b, Vec *c, int d, int e);

int func_168310(int unused, int *out)
{
    Vec pos;
    Hit hit;
    Vec res;
    Glob *g = &D_0024AA40;
    Vec *src = &g->v;

    pos.x = g->v.x;
    pos.y = src->y + 0.5f;
    pos.z = src->z;
    if (func_020C30(1.0f, &res, &hit, &pos, 0x28, 0)) {
        if (hit.kind == 3) {
            *out = (int)hit.obj;
            return 1;
        }
        if (hit.kind == 2) {
            Obj *o = (Obj *)hit.obj;
            if (o->info->tag == 0x6492A802) {
                *out = *o->val;
                return 1;
            }
        }
        *out = 0;
        return 0;
    }
    *out = 0;
    return 0;
}
