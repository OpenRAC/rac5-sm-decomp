/* LEVEL_08:0x1CA0E8 -- placement copy of LEVEL_04_1A4050.c: resets the object's linked record, applies the shared rotation step with the record's angle while keeping the object's position, and returns 1. */
typedef struct {
    void *table;
    int f04;
    float angle;
} Rec;

typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x1C];
    Rec *rec;
} Obj;

extern char D_002724A8[];
extern void func_135110(void *matrix, float angle);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

int func_1CA0E8(Obj *o)
{
    Rec *r = o->rec;
    float p[3];

    r->table = D_002724A8;
    r->angle = 0.0f;
    r->f04 = 0;
    Copy3(p, o->pos);
    func_135110(o, r->angle);
    Copy3(o->pos, p);
    return 1;
}
