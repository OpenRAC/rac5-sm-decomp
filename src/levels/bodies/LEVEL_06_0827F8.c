/* LEVEL_06:0x0827F8 -- placement copy of LEVEL_01_0899B8.c: applies a table record to a blend target and eases two float triples toward it by a factor. */
typedef struct {
    char pad0[0x10];
    float a[3];
    float padA;
    float b[3];
    float padB;
} Rec;

typedef struct {
    char pad0[0x31];
    unsigned char idx;
    unsigned char mask;
    char pad1;
    float t;
} Obj;

typedef struct {
    char pad0[0x14];
    unsigned char *map;
} Map;

extern Map *D_0022BDB4;
extern Rec D_0022A5B0[];

extern void func_0825B8(Rec *dst, Rec *src, Obj *o, int mask);
extern void func_119518(Rec *r, Rec *r2, Rec *buf, float t);

void func_0827F8(int addr, int remap)
{
    Obj *o = (Obj *)addr;
    Rec buf;
    Rec *r;
    unsigned char *map;
    unsigned idx;

    idx = o->idx;
    if (D_0022BDB4) {
        map = D_0022BDB4->map;
        if (map) {
            if (remap)
                idx = map[idx];
        }
    }
    if (o->t < 0.0f) {
        func_0825B8(&D_0022A5B0[idx], &D_0022A5B0[idx], o, o->mask);
    } else if (o->t > 0.0f) {
        r = &D_0022A5B0[idx];
        func_0825B8(&buf, r, o, o->mask);
        if (o->mask & 1)
            func_119518(r, r, &buf, o->t);
        if (o->mask & 2) {
            r->b[0] += (buf.b[0] - r->b[0]) * o->t;
            r->b[1] += (buf.b[1] - r->b[1]) * o->t;
            r->b[2] += (buf.b[2] - r->b[2]) * o->t;
        }
        if (o->mask & 4) {
            r->a[0] += (buf.a[0] - r->a[0]) * o->t;
            r->a[1] += (buf.a[1] - r->a[1]) * o->t;
            r->a[2] += (buf.a[2] - r->a[2]) * o->t;
        }
    }
}
