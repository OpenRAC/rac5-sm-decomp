/* LEVEL_02:0x17AE28 -- releases the object's held handle, advances its position by the record's velocity and, when the vertical accumulator drops below zero, lowers the object by it and switches the object to its landed state. */
typedef struct {
    char pad00[0xC];
    float vel[3];
    float t18;
} Phys;

typedef struct {
    int handle;
} Hold;

typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x9];
    unsigned char state;
    char pad46[0xE];
    Phys *phys;
    Hold *hold;
    char pad5C[8];
    int flags;
    char pad68[8];
    float f70;
} Obj;

extern int D_0020B358;
extern void func_09DF10(int handle);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void Add3(float *d, float *s)
{
    d[0] = d[0] + s[0];
    d[1] = d[1] + s[1];
    d[2] = d[2] + s[2];
}

void func_17AE28(Obj *o)
{
    float v[3];
    Hold *h = o->hold;
    Phys *p = o->phys;
    float t;

    if (h->handle != 0) {
        if (h->handle == D_0020B358) {
            D_0020B358 = 0;
        } else {
            func_09DF10(h->handle);
        }
        h->handle = 0;
    }
    Copy3(v, p->vel);
    p->vel[1] = p->vel[1] - 0.10000000894069672f;
    Add3(o->pos, v);
    t = p->t18 + v[1];
    p->t18 = t;
    if (t < 0.0f) {
        o->pos[1] = o->pos[1] - t;
        p->t18 = 0.0f;
        o->f70 = 0.0f;
        o->state = 2;
        o->flags |= 0x8000000;
    }
}
