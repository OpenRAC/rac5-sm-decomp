/* LEVEL_02:0x16FA28 -- rebases the eight model offsets of a freshly placed prop, clears its state block and marks which of its parts are active. */
typedef struct {
    char pad00[0x40];
    int field_40;
} Res;

typedef struct {
    float kind;
    float arg;
} Part;

typedef struct {
    char pad00[4];
    struct {
        char pad00[0xC];
        Part *part;
    } *items;
} Model;

typedef struct {
    int res[8];
    int w20;
    int w24;
    unsigned char count;
} Hdr;

typedef struct {
    char pad00[0x6A8];
    unsigned char map[8];
    unsigned char on[8];
} State;

typedef struct {
    char pad00[0x54];
    Hdr *hdr;
    State *st;
} Obj;

extern int D_0021BD54;
extern void *memset(void *s, int c, unsigned int n);

static __inline__ void Fix(int *slot)
{
    Res *r;

    if (*slot != 0) {
        r = (Res *)(D_0021BD54 + *slot);
        if (r->field_40 == 0)
            *slot = 0;
        else
            *slot = (int)r;
    }
}

void func_16FA28(Obj *o)
{
    unsigned int i;
    Hdr *h;
    State *s;
    int *p;
    Res *r;
    Model *m;
    Part *part;

    i = 0;
    h = o->hdr;
    s = o->st;
    p = h->res;
    do {
        Fix(p);
        i++;
        p++;
    } while (i < 8);
    if (h->w20 != 0)
        h->w20 = D_0021BD54 + h->w20;
    Fix(&h->w24);
    m = (Model *)h->w20;
    memset(s, 0, 0x6F8);
    i = 0;
    if (h->count != 0) {
        for (;;) {
            o->st->on[i] = 1;
            part = m->items[i].part;
            if (part != 0) {
                if (part->kind == 1.0f || (part->kind == 0.0f && part->arg == 0.0f))
                    o->st->on[i] = 0;
                else if (part->kind == 2.0f)
                    s->map[(int)part->arg & 0xFF] = i;
            }
            i = (i + 1) & 0xFF;
            if (h->count <= i)
                break;
        }
    }
}
