/* LEVEL_08:0x1BDA18 -- placement copy of LEVEL_04_19CCE8.c: starts the object's effect: obtains the effect handle (from the table record with the fixed tag, or from the type-1 helper), and when there is one places the effect at the object (3.0f above it), marks the object and stores the timer, then notifies the registered listener; returns the handle. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

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
    char pad_00[0x10];
    int h_10;
} Fx;

typedef struct {
    char pad_00[0x30];
    Vec3 pos_30;
    char pad_3C[9];
    unsigned char kind_45;
    unsigned char mark_46;
    char pad_47[0x11];
    Fx *fx_58;
    char pad_5C[0x14];
    float t_70;
} Obj;

typedef struct {
    char pad_00[0x14];
    float a_14;
    float b_18;
    float c_1C;
    float d_20;
} Listener;

typedef struct {
    char pad_00[4];
    float a_04;
    float b_08;
} Ctx;

extern Hdr *D_0024FC50;
extern Listener *D_00251E34;
extern Ctx D_00271030;
extern ThreeWords D_00261B08;

extern int func_1B8998(void);
extern int func_0844E0(Rec *rec, int tag, Obj *obj, int mode);
extern void func_07CA28(void *context, void *object, int mode, const ThreeWords *first, const ThreeWords *second);
extern void func_088940(Obj *obj, Listener *l, float a, float b, float c, float d, int e, int f, int g, int h, int i, int j);

static __inline__ Rec *FindRec(unsigned int tag)
{
    unsigned int i;

    for (i = 0; i < D_0024FC50->cnt_38; i++) {
        if (D_0024FC50->recs_34[i].tag_24 == tag) {
            return &D_0024FC50->recs_34[i];
        }
    }
    return 0;
}

static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

int func_1BDA18(Obj *o)
{
    Fx *f;
    Rec *rec;
    int h;
    Vec3 v;
    float sum;

    f = o->fx_58;
    if (o->kind_45 == 1) {
        f->h_10 = func_1B8998();
    } else {
        rec = FindRec(0xAE8C7B5D);
        if (rec == 0) {
            h = 0;
        } else {
            h = func_0844E0(rec, 0xAE8C7B5D, o, 0xFF);
        }
        f->h_10 = h;
    }
    if (f->h_10 != 0) {
        Copy3(&v, &o->pos_30);
        v.y = v.y + 3.0f;
        func_07CA28(&D_00271030, o, 1, &D_00261B08, (const ThreeWords *)&v);
        sum = D_00271030.b_08 + D_00271030.a_04;
        o->mark_46 = 1;
        *(float *)((char *)o + 0x70) = (float)(int)(sum * 30.0f);
        if (D_00251E34 != 0) {
            func_088940(o, D_00251E34, D_00251E34->a_14, D_00251E34->b_18, D_00251E34->c_1C, D_00251E34->d_20, 0, 0, 0, 0, 0, 1);
        }
    }
    return f->h_10;
}
