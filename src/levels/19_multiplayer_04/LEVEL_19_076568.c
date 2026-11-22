/* LEVEL_19:0x076568 -- placement copy of LEVEL_17_076AF8.c: marks the object, builds a flag word from its low state bit, probes two points from its link and, when found, registers the sub-record with the near or far pool entry. */
typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    char pad00[3];
    unsigned char far_03;
    int w04;
} Sub;

typedef struct {
    char pad00[0x54];
    Sub sub;
    char pad5C[0x61 - 0x5C];
    unsigned char b61;
} Obj;

typedef struct {
    char pad[0x68];
} Entry;

extern Entry D_001DE578[];
extern int func_076180(Vec4 *a, Vec4 *b, int link);
extern void func_086308(Entry *e, Sub *s, Vec4 *a, Vec4 *b, unsigned int flags);

static __inline__ int isFar(Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dz = b->z - a->z;

    if (dx > 8.0f || dz > 8.0f) {
        return 1;
    }
    return 0;
}

void func_076568(Obj *o)
{
    Vec4 p0;
    Vec4 p1;
    Sub *s;
    unsigned int fl;
    int far;

    s = &o->sub;
    o->b61 |= 1;
    fl = (((~o->b61) & 1) << 5) | 0x4202;
    if (func_076180(&p0, &p1, s->w04) != 0) {
        far = isFar(&p0, &p1);
        s->far_03 = far;
        func_086308(&D_001DE578[far], s, &p0, &p1, fl);
    }
}
