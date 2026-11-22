/* USA LEVEL_01.REL:0x1BBA60, 428-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 27 differing words; first difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

typedef struct Info {
    char pad00[0x24];
    int type;
} Info;

typedef struct Aux {
    char pad00[0x5C];
    int f5C;
} Aux;

typedef struct Body {
    char pad00[0x10];
    int f10;
} Body;

typedef struct Ent {
    char pad00[0x30];
    V3 pos;
    char pad3C[4];
    Info *info;
    char pad44;
    unsigned char kind;
    char pad46[0x54 - 0x46];
    Body *body;
    Aux *aux;
    char pad5C[8];
    unsigned int flags;
    char pad68[0x80 - 0x68];
} Ent;

typedef struct Level {
    char pad00[0x44];
    Ent *list;
    unsigned int count;
} Level;

extern Level *D_00206D90;
extern int D_00208E80;

extern int func_084708(int a, V3 *p);

static __inline__ float DistSq(V3 *a, V3 *b)
{
    V3 d;

    d.x = a->x - b->x;
    d.z = a->z - b->z;
    return d.x * d.x + d.z * d.z;
}

typedef struct Flag {
    unsigned char v;
} Flag;

Ent *func_1BBA60(Ent *self, float *dist)
{
    Ent *best;
    Ent *e;
    Body *body;
    float bestd;
    float d2;
    Flag ok;
    unsigned int i;
    unsigned int j;

    best = 0;
    bestd = 10000.0f;
    body = self->body;
    for (i = 0; i < D_00206D90->count; i++) {
        e = &D_00206D90->list[i];
        if ((e->flags & 1) == 0) {
            continue;
        }
        for (j = 0; j < 1; j++) {
            if (e->info->type == D_00208E80) {
                break;
            }
        }
        if (j == 1) {
            continue;
        }
        if (func_084708(body->f10, &e->pos) == 0) {
            continue;
        }
        ok.v = 0;
        if (e->kind == 6) {
            ok.v = e->aux->f5C == 0;
        }
        if (ok.v) {
            d2 = DistSq(&e->pos, &self->pos);
            if (d2 < bestd) {
                best = e;
                bestd = d2;
            }
        }
    }
    if (dist != 0) {
        *dist = bestd;
    }
    return best;
}
