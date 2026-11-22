/* LEVEL_07:0x173D58 -- raises the object's pool flag, casts a ray from the object towards the nearest target with the normalised offset and clears the flag again; returns whether the cast found nothing. */
typedef struct {
    char pad_00[8];
    unsigned short flags_08;
    char pad_0A[6];
} Slot16;

typedef struct {
    char pad_00[0x64];
    Slot16 *slots_64;
} Pool;

typedef struct {
    unsigned short id_00;
    unsigned char pad_02;
    unsigned char pool_03;
} Link;

typedef struct {
    char pad_00[0x30];
    float pos_30[3];
    char pad_3C[0x1C];
    Link *link_58;
} Obj;

extern Pool D_00244FF8[];
extern float sqrtf(float x);
extern float *func_01AA20(void);
extern int func_0213A0(float *a, float *b, int c, float *d, int e, int f, int g, float h);

static __inline__ void vsub(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static __inline__ void SetFlag(Slot16 *s)
{
    s->flags_08 |= 8;
}

static __inline__ void ClearFlag(Slot16 *s)
{
    s->flags_08 &= 0xFFF7;
}

unsigned char func_173D58(Obj *o, int arg)
{
    float hit[8];
    float d[3];
    float range[4];
    Link *l;
    float *t;
    float len2;
    float len;
    float inv;
    float root;
    int r;

    l = o->link_58;
    if (l->id_00 != 0xFFFF) {
        SetFlag((Slot16 *)((char *)D_00244FF8[l->pool_03].slots_64 + (l->id_00 << 4)));
    }
    range[0] = 100.0f;
    t = func_01AA20();
    vsub(d, t, o->pos_30);
    len2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (len2 < 2.384185791015625e-07f) {
        len = 0.0f;
    } else {
        root = sqrtf(len2);
        inv = 1.0f / root;
        len = root;
        d[0] = d[0] * inv;
        d[1] = d[1] * inv;
        d[2] = d[2] * inv;
    }
    r = func_0213A0(range, hit, arg, d, 0x68, 0, 0, len);
    if (l->id_00 != 0xFFFF) {
        ClearFlag((Slot16 *)((char *)D_00244FF8[l->pool_03].slots_64 + (l->id_00 << 4)));
    }
    return r ^ 1;
}
