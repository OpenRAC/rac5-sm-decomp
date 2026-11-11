/* LEVEL_07:0x1CF740 -- adds a global amount to each nonzero word of the object's eight-word record (stopping at the first zero word, counting every update in the ninth word), then sets bit 0x10 of the object's flag word and returns 1. */
typedef struct {
    int w[8];
    int count;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    char pad58[0x64 - 0x58];
    unsigned int flags;
} Obj;

extern int D_0021B094;

static __inline__ int Bump(int *p)
{
    if (*p == 0)
        return 0;
    *p = D_0021B094 + *p;
    return 1;
}

int func_1CF740(Obj *o)
{
    Rec *r;
    unsigned int i;

    r = o->rec;
    for (i = 0; i < 8; i++) {
        if (!Bump(&r->w[i]))
            break;
        r->count++;
    }
    o->flags |= 0x10;
    return 1;
}
