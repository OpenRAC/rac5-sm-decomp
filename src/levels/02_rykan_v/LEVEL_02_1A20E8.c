/* LEVEL_02:0x1A20E8 -- relocates the eight resource pointers of an object header (three of them must point at loaded data) and resets the object's record. */
typedef struct Res {
    char pad_00[0x40];
    int w40;
} Res;

typedef struct Hdr {
    Res *p[8];
} Hdr;

typedef struct Rec {
    char pad_00[0x1C];
    int w1C;
    char pad_20[6];
    unsigned char b26;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Hdr *hdr;
    Rec *rec;
} Obj;

extern int D_0021BD54;
extern unsigned char D_0020B12C;

extern void *memset(void *p, int v, unsigned int n);

static __inline__ int Reloc(int *p)
{
    int v;

    v = p[0];
    if (v == 0)
        return 0;
    p[0] = D_0021BD54 + v;
    return 1;
}

static __inline__ int RelocLoaded(int *p)
{
    int v;
    Res *t;

    v = p[0];
    if (v == 0)
        return 0;
    t = (Res *)(D_0021BD54 + v);
    if (t->w40 == 0) {
        p[0] = 0;
        return 0;
    }
    p[0] = (int)t;
    return 1;
}

int func_1A20E8(Obj *o)
{
    Hdr *h;
    Rec *rec;

    h = o->hdr;
    rec = o->rec;
    if (!Reloc((int *)&h->p[0]))
        return 0;
    if (!Reloc((int *)&h->p[1]))
        return 0;
    if (!RelocLoaded((int *)&h->p[2]))
        return 0;
    if (!RelocLoaded((int *)&h->p[3]))
        return 0;
    if (!RelocLoaded((int *)&h->p[4]))
        return 0;
    if (!Reloc((int *)&h->p[5]))
        return 0;
    if (!Reloc((int *)&h->p[6]))
        return 0;
    if (!Reloc((int *)&h->p[7]))
        return 0;
    if (D_0020B12C != 0) {
        memset(rec, 0, 0x28);
    } else {
        rec->w1C = 0;
        rec->b26 = 0;
    }
    return 1;
}
