/* LEVEL_07:0x1859B0 -- placement copy of LEVEL_03_1789C0.c: finds the nearest active entity of class 0x4D4E4415 passing a geometry check and returns its data and endpoints. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct State58 {
    Vec3 a;
    Vec3 b;
} State58;

typedef struct Mob80 {
    unsigned char pad00[0x54];
    void *p54;
    State58 *p58;
    unsigned char pad5C[8];
    unsigned int flags64;
    unsigned char pad68[0x18];
} Mob80;

typedef struct ClassRec44 {
    unsigned char pad00[0xC];
    Mob80 *list0C;
    unsigned char pad10[0x14];
    unsigned int id24;
    unsigned char pad28[8];
    int count30;
    unsigned char pad34[0x10];
} ClassRec44;

typedef struct Mgr1789C0 {
    unsigned char pad00[0x34];
    ClassRec44 *recs34;
    unsigned int count38;
} Mgr1789C0;

extern Mgr1789C0 *D_0021B090;
extern int func_11DF70(Vec3 *pos, Vec3 *a, Vec3 *b);

static __inline__ ClassRec44 *FindClass(unsigned int id)
{
    Mgr1789C0 *mgr = D_0021B090;
    unsigned int i;

    for (i = 0; i < mgr->count38; i++) {
        if (mgr->recs34[i].id24 == id) {
            return &mgr->recs34[i];
        }
    }
    return 0;
}

void *func_1859B0(Vec3 *outA, Vec3 *outB, Vec3 *pos)
{
    ClassRec44 *rec;
    Mob80 *m;
    Mob80 *end;
    float bestDist = 1.0e30f;
    void *best = 0;

    rec = FindClass(0x4D4E4415U);

    m = rec->list0C;
    end = m + rec->count30;
    for (; m != end; m++) {
        if (m->flags64 & 1) {
            State58 *s = m->p58;
            if (func_11DF70(pos, &s->a, &s->b) != 0) {
                float dx = s->a.x - pos->x;
                float dy = s->a.y - pos->y;
                float dz = s->a.z - pos->z;
                float d2 = dx * dx + dy * dy + dz * dz;
                if (d2 < bestDist) {
                    best = m->p54;
                    bestDist = d2;
                    *outA = s->a;
                    *outB = s->b;
                }
            }
        }
    }

    if (best == 0) {
        outA->x = 0.0f;
        outA->y = 0.0f;
        outA->z = 0.0f;
        outB->x = 2000.0f;
        outB->y = 2000.0f;
        outB->z = 2000.0f;
    }
    return best;
}
