/* LEVEL_16:0x170290 -- scans the two player slots for one inside the trigger range of the object's link and, on a hit, copies its handle into the object's state record. */
typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x59C - 0x3C];
    int handle;
} Ent;

typedef struct {
    char pad00[0x2C];
    int w2C;
    char pad30[4];
    float range;
} Link;

typedef struct {
    char pad00[0x5C];
    int w5C;
} State;

typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x18];
    Link *link;
    State *state;
} Obj;

extern Ent *func_112CE8(unsigned int i);
extern int func_0763F8(int a, float *p);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

int func_170290(Obj *o)
{
    unsigned int i;
    Ent *e;
    Link *link;
    State *st;
    float p[3];
    float d[3];

    link = o->link;
    st = o->state;
    for (i = 0; i < 2; i++) {
        e = func_112CE8(i);
        Copy3(p, e->pos);
        if (func_0763F8(link->w2C, p) != 0) {
            Sub3(d, p, o->pos);
            if (d[0] * d[0] + d[1] * d[1] + d[2] * d[2] <= link->range * link->range) {
                st->w5C = e->handle;
                return 1;
            }
        }
    }
    return 0;
}
