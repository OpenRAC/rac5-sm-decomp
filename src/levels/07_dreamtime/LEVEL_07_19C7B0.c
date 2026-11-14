/* LEVEL_07:0x19C7B0 -- copies the object's value into the nested record of every listed element, then arms the object once the fifth element's record has a used entry, or flags the output when it has none. */
typedef struct Mid {
    char pad0[0x18];
    char *inner;
} Mid;

typedef struct Entry {
    int w0;
    char pad4[0x18];
} Entry;

typedef struct Rec {
    Entry e[12];
} Rec;

typedef struct Elem {
    char pad0[0x54];
    Mid *mid;
    Rec *rec;
} Elem;

typedef struct Obj {
    char pad0[0x34];
    float value;
    char pad38[0xE];
    unsigned char armed;
} Obj;

typedef struct Out {
    char pad0[0x10];
    float f10;
} Out;

extern unsigned int D_0021D06C;

static __inline__ int CountUsed(Elem *x)
{
    Rec *r = x->rec;
    int n = 0;
    unsigned int i;

    for (i = 0; i < 12; i++) {
        if (r->e[i].w0 != 0)
            n++;
    }
    return n;
}

void func_19C7B0(Obj *o, Out *out, Elem **list)
{
    unsigned int i;

    for (i = 0; i < D_0021D06C; i++)
        *(float *)(list[i]->mid->inner + 0x34) = o->value;
    if (o->armed == 0) {
        if (CountUsed(list[5]) != 0)
            o->armed = 1;
    } else {
        if (CountUsed(list[5]) == 0)
            out->f10 = 10.0f;
    }
}
