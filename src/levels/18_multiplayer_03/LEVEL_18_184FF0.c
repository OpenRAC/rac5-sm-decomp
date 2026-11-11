/* LEVEL_18:0x184FF0 -- placement copy of LEVEL_16_1849B8.c: finds the nearest eligible object under a point (probing a downward sweep), stores its distance and returns it, or 0. */
typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct Link Link;

struct Link {
    char pad00[4];
    void *key;
    char pad08[0x38];
    Link *next;
};

typedef struct {
    char pad00[0x10];
    float vel[3];
    char pad1C[4];
    float dir[3];
    char pad2C[4];
    float pos[3];
    char pad3C[4];
    void *owner;
    char pad44[0x20];
    unsigned int flags;
    char pad68[0x10];
    unsigned char bits;
} Obj;

typedef struct {
    char pad00[4];
    Obj *obj;
} Entry;

typedef struct {
    char pad00[0x68];
} Region;

typedef struct {
    char pad00[0xC];
    Link *head;
} Globals;

extern Region D_001DE778[2];
extern Entry **D_001DE848;
extern Globals D_002E5BF8;
extern char D_001D9798[];

extern int func_085FD0(Entry **dst, Region *r, float *p, float *pos, int a, int b);
extern int func_0FB0C0(float *res, float *pos, float best, float one, float *pt, char *tbl, Obj *o, float *vel, float *dir);

static __inline__ unsigned char InList(Link *head, Obj *o)
{
    void *owner;
    Link *n;

    owner = o->owner;
    for (n = head; n != 0; n = n->next) {
        if (owner == n->key) {
            return 1;
        }
    }
    return 0;
}

static __inline__ Entry **Gather(Entry **it, float *pt, float *pos)
{
    Region *r;

    r = D_001DE778;
    do {
        it += func_085FD0(it, r, pt, pos, 0x7fff, 0x181);
        r++;
    } while (r < D_001DE778 + 2);
    return it;
}

static __inline__ void Mad3(float *d, float *a, float *b, float k)
{
    d[0] = a[0] + b[0] * k;
    d[1] = a[1] + b[1] * k;
    d[2] = a[2] + b[2] * k;
}

Obj *func_184FF0(float *out, float *pos)
{
    float p[3];
    Vec4 hit;
    float best;
    Entry **it;
    Entry **end;
    Entry **cur;
    Obj *sel;
    Obj *o;

    sel = 0;
    best = 30.0f;
    p[0] = pos[0];
    p[1] = pos[1] - 30.0f;
    p[2] = pos[2];
    it = Gather(D_001DE848, p, pos);
    cur = D_001DE848;
    end = cur + (it - cur);
    for (; cur != end; cur++) {
        o = (*cur)->obj;
        if (InList(D_002E5BF8.head, o) && (((o->flags & 0x2f) ^ 1) | (o->bits & 0x18)) == 0) {
            Mad3(p, o->pos, o->vel, 0.5f);
            if ((unsigned char)func_0FB0C0(&hit.y, pos, best, 1.0f, p, D_001D9798, o, o->vel, o->dir) && hit.y < best) {
                best = hit.y;
                sel = o;
            }
        }
    }
    if (sel != 0) {
        *out = best;
    }
    return sel;
}
