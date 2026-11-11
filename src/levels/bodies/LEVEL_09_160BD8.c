/* LEVEL_09:0x160BD8 -- placement copy of LEVEL_01_16D1E0.c: pushes each listed actor out of a circle around the player, the circle radius coming from the actor's collision record plus a margin. */
extern float sqrtf(float x);

typedef struct Rec2 {
    char pad_00[4];
    float a;
    char pad_08[4];
    float b;
    char pad_10[4];
    float rad;
} Rec2;

typedef struct Rec1 {
    char pad_00[4];
    Rec2 *r2;
} Rec1;

typedef struct Rec {
    char pad_00[0xC];
    Rec1 *r1;
    char pad_10[0x24];
} Rec;

typedef struct Desc {
    char pad_00[4];
    Rec *recs;
} Desc;

typedef struct Actor {
    float m[16];
    Desc *desc;
    unsigned char idx;
} Actor;

typedef struct Ent {
    Actor **h;
    float pos[3];
    char pad_10[0x10];
} Ent;

typedef struct Gs {
    char pad_00[0x30];
    float pos[3];
} Gs;

extern Gs D_0021C8C0;
extern float D_00201A98[3];

static __inline__ float DistSqXZ(float *a, float *b)
{
    float dx;
    float dz;

    dx = a[0] - b[0];
    dz = a[2] - b[2];
    return dx * dx + dz * dz;
}

static __inline__ void MulAddXZ(float *out, float *base, float *axis, float s)
{
    out[0] = base[0] + axis[0] * s;
    out[1] = base[2] + axis[2] * s;
}

static __inline__ void AddXZ(float *out, float *axis, float s)
{
    out[0] = out[0] + axis[0] * s;
    out[1] = out[1] + axis[2] * s;
}

static __inline__ void SubXZ(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[2];
}

extern int func_067780(Gs *g);
extern int func_035240(Gs *g);

void func_160BD8(Ent *list, unsigned int n)
{
    float margin;
    unsigned int i;
    Ent *e;
    Actor *a;
    Actor **h;
    Gs *g;
    Rec1 *r1;
    Rec2 *r2;
    float *pos;
    float *pos2;
    float d[2];
    float p[2];
    float rad;
    float d2;
    float dist;
    float pen;

    margin = 0.62f;
    if (func_067780(&D_0021C8C0) != 0) {
        margin = 0.82f;
    } else if ((unsigned char)func_035240(&D_0021C8C0) != 0) {
        margin = 0.3f;
    }
    i = 0;
    if (i < n) {
        e = list;
        do {
            g = &D_0021C8C0;
            h = e->h;
            a = *h;
            pos = &a->m[12];
            if (0.0001f < DistSqXZ(e->pos, pos)) {
                r1 = a->desc->recs[a->idx].r1;
                r2 = r1->r2;
                MulAddXZ(p, pos, a->m, r2->a);
                AddXZ(p, &a->m[8], r2->b);
                SubXZ(d, p, g->pos);
                d2 = d[0] * d[0] + d[1] * d[1];
                rad = r1->r2->rad + margin;
                if (d2 < rad * rad) {
                    dist = sqrtf(d2);
                    pen = rad - dist;
                    pos2 = &(*h)->m[12];
                    if (1e-05f < dist) {
                        pen = pen / dist;
                        pos2[0] = pos2[0] + d[0] * pen;
                        pos2[2] = pos2[2] + d[1] * pen;
                    } else {
                        pos2[0] = pos2[0] + D_00201A98[0] * pen;
                        pos2[2] = pos2[2] + D_00201A98[2] * pen;
                    }
                }
            }
            i++;
            e++;
        } while (i < n);
    }
}
