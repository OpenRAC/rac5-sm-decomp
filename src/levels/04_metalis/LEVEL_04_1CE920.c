/* LEVEL_04:0x1CE920 -- placement copy of LEVEL_01_1BBA60.c: finds the closest matching entry of the level list to an object in the horizontal plane (optionally returning the squared distance). */
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

extern Level *D_002201B0;
extern int D_002226D8;

extern int func_087C38(int a, V3 *p);

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

Ent *func_1CE920(Ent *self, float *dist)
{
    Ent *best;
    Ent *e;
    Ent *list;
    Aux *aux;
    Body *body;
    float bestd;
    float d2;
    Flag ok;
    unsigned int i;
    unsigned int j;

    best = 0;
    bestd = 10000.0f;
    body = self->body;
    for (i = 0; i < D_002201B0->count; i++) {
        list = D_002201B0->list;
        e = &list[i];
        if ((e->flags & 1) == 0) {
            continue;
        }
        for (j = 0; j < 1; j++) {
            if (e->info->type == D_002226D8) {
                break;
            }
        }
        if (j == 1) {
            continue;
        }
        if (func_087C38(body->f10, &e->pos) == 0) {
            continue;
        }
        ok.v = 0;
        aux = e->aux;
        if (e->kind == 6) {
            ok.v = aux->f5C == 0;
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
