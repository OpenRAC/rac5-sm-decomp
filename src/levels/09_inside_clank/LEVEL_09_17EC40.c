/* LEVEL_09:0x17EC40 -- relocates the ten resource pointers of an object header (the first four, the middle three and the tenth must point at loaded data or are rejected) and resets its state. */
typedef struct Res {
    char pad_00[0x40];
    int w40;
} Res;

typedef struct Hdr {
    Res *p[10];
    float f28;
} Hdr;

typedef struct Obj {
    char pad_00[0x46];
    unsigned char b46;
    char pad_47[0xD];
    Hdr *hdr;
    char pad_58[0x18];
    int w70;
} Obj;

extern int D_001F0894;

static __inline__ int Reloc(int *p)
{
    int v;

    v = p[0];
    if (v == 0)
        return 0;
    p[0] = D_001F0894 + v;
    return 1;
}

static __inline__ int RelocLoaded(int *p)
{
    int v;
    Res *t;

    v = p[0];
    if (v == 0)
        return 0;
    t = (Res *)(D_001F0894 + v);
    if (t->w40 == 0) {
        p[0] = 0;
        return 0;
    }
    p[0] = (int)t;
    return 1;
}

int func_17EC40(Obj *o)
{
    Hdr *h;
    unsigned int i;

    h = o->hdr;
    for (i = 0; i < 4; i++) {
        if (!RelocLoaded((int *)&h->p[i]))
            return 0;
    }
    if (!Reloc((int *)&h->p[6]))
        return 0;
    if (!RelocLoaded((int *)&h->p[5]))
        return 0;
    if (!RelocLoaded((int *)&h->p[4]))
        return 0;
    if (!RelocLoaded((int *)&h->p[7]))
        return 0;
    if (!RelocLoaded((int *)&h->p[8]))
        return 0;
    if (!Reloc((int *)&h->p[9]))
        return 0;
    h->f28 = -1.0f;
    o->w70 = 0;
    o->b46 = 0;
    return 1;
}
