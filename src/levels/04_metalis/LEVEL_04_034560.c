/* LEVEL_04:0x034560 -- picks the candidate with the best probe result: probes each listed object against the running distance and keeps the last one whose probe and acceptance hook both pass. */
typedef struct Vt {
    char pad_00[8];
    int (*accept)(struct Obj *o);
} Vt;

typedef struct Info {
    Vt *vt;
} Info;

typedef struct Obj {
    char pad_00[0x58];
    Info *info;
} Obj;

extern int func_034638(void *ctx, Obj *o, float dist, float *out, float v1);

Obj *func_034560(void *ctx, Obj **list, unsigned int n, float *v)
{
    Obj *best;
    Obj *o;
    Vt *vt;
    unsigned int i;
    float d;
    float out[4];

    best = 0;
    d = v[0];
    for (i = 0; i < n; i++) {
        o = list[i];
        vt = o->info->vt;
        if (func_034638(ctx, o, d, out, v[1]) != 0 && vt->accept(o) != 0) {
            d = out[0];
            best = o;
        }
    }
    return best;
}
