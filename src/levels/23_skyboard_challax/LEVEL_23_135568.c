/* LEVEL_23:0x135568 -- placement copy of LEVEL_22_10EA48.c: rebases the block's four resource pairs, counts the second halves present, fills in default tuning values and resets the record. */
typedef struct { float x, y, z; } Vec3;

typedef struct {
    int first[4];
    int second[4];
    float f20;
    float f24;
    float f28;
    float f2C;
    float f30;
} Block;

typedef struct {
    char pad00[0x48];
    Vec3 home;
    char pad54[0x24];
    float w78;
    float w7C;
    float w80;
    char pad84[6];
    unsigned char count;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Block *block;
    Rec *rec;
} Obj;

extern int D_001DA194;
extern Vec3 D_001EAFD8;
extern void func_135998(Obj *o);

static __inline__ int Reloc(int *slot)
{
    int off = *slot;
    int ok;

    if (off == 0) {
        ok = 0;
    } else {
        *slot = D_001DA194 + off;
        ok = 1;
    }
    return ok;
}

static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

int func_135568(Obj *o)
{
    Rec *rec = o->rec;
    Block *blk = o->block;
    unsigned char i;

    rec->count = 0;
    for (i = 0; i < 4; i++) {
        int *p = (int *)((unsigned int)(i << 2) + (unsigned int)blk);

        if (p[0] != 0)
            p[0] = D_001DA194 + p[0];
        if (Reloc(&p[4]))
            rec->count++;
    }
    if (rec->count == 0)
        return 0;
    if (blk->f20 <= 0.0f)
        blk->f20 = 30.0f;
    if (blk->f24 <= 0.0f)
        blk->f24 = 1600.0f;
    else
        blk->f24 = blk->f24 * blk->f24;
    if (blk->f2C <= 0.0f)
        blk->f2C = 1.0f;
    if (blk->f28 <= 0.0f)
        blk->f28 = 9.0f;
    if (blk->f30 <= 0.0f)
        blk->f30 = 0.0f;
    func_135998(o);
    Copy3(&rec->home, &D_001EAFD8);
    rec->w78 = 0.0f;
    rec->w7C = 0.0f;
    rec->w80 = 0.0f;
    o->state = 1;
    return 1;
}
