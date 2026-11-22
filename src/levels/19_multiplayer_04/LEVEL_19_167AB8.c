/* LEVEL_19:0x167AB8 -- placement copy of LEVEL_17_15F538.c: creates the fixed-tag effect handle for an owner (found by record tag), stores the caller's values into its slot, picks the effect id by owner state and starts it along a segment through the handle's position, lengthened by scale * 40; returns the handle or 0. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0x24];
    unsigned int tag_24;
    char pad_28[0x1C];
} Rec;

typedef struct {
    char pad_00[0x34];
    Rec *recs_34;
    unsigned int cnt_38;
} Hdr;

typedef struct {
    int owner_00;
    int a_04;
    int b_08;
    float f_0C;
} Slot;

typedef struct {
    Vec3 dir_00;
    char pad_0C[0x24];
    Vec3 pos_30;
    char pad_3C[0x1C];
    Slot *slot_58;
} Handle;

typedef struct {
    char pad_00[0xFC];
    int w_FC;
} Owner;

typedef struct {
    char pad_00[0x1C];
    float k_1C;
} Tab;

typedef struct {
    Vec3 start;
    Vec3 end;
    Vec3 d0;
    Vec3 d1;
    Tab *tab;
} Seg;

extern Hdr *D_001B5A20;
extern int D_002E5B30;
extern int D_002E5B34;
extern Tab D_001BF240;

extern Handle *func_06F898(Rec *rec, unsigned int tag, char *data, int mode);
extern unsigned int func_1135A8(void);
extern void func_168E78(float a, float b, int c, Seg *seg, Handle *h, int d);

static __inline__ Rec *FindRec(unsigned int tag)
{
    unsigned int i;

    for (i = 0; i < D_001B5A20->cnt_38; i++) {
        if (D_001B5A20->recs_34[i].tag_24 == tag) {
            return &D_001B5A20->recs_34[i];
        }
    }
    return 0;
}

static __inline__ Handle *MakeHandle(unsigned int tag, char *data)
{
    Rec *rec;

    rec = FindRec(tag);
    if (rec == 0) {
        return 0;
    }
    return func_06F898(rec, tag, data, 0xFF);
}

static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ void Mad3(Vec3 *d, Vec3 *a, Vec3 *v, float s)
{
    d->x = a->x + v->x * s;
    d->y = a->y + v->y * s;
    d->z = a->z + v->z * s;
}

Handle *func_167AB8(int a, int b, Owner *owner, char *data, float scale)
{
    Handle *h;
    Handle *ret;
    Slot *q;
    int sel;
    float len;
    float half;
    Seg seg;

    h = MakeHandle(0x74F4B85A, data);
    ret = 0;
    if (h != 0) {
        q = h->slot_58;
        q->a_04 = a;
        q->b_08 = b;
        q->owner_00 = (int)owner;
        q->f_0C = scale;
        if (owner == 0 || (func_1135A8() != 1 && owner->w_FC != 0)) {
            sel = D_002E5B30;
        } else {
            sel = D_002E5B34;
        }
        seg.tab = &D_001BF240;
        len = scale * 40.0f;
        half = D_001BF240.k_1C * 0.5f;
        Copy3(&seg.d0, &h->dir_00);
        Copy3(&seg.d1, &h->dir_00);
        Copy3(&seg.start, &h->pos_30);
        Mad3(&seg.start, &seg.start, &h->dir_00, half);
        Mad3(&seg.end, &seg.start, &h->dir_00, len);
        func_168E78(0.0f, 0.0f, sel, &seg, h, 1);
        ret = h;
    }
    return ret;
}
