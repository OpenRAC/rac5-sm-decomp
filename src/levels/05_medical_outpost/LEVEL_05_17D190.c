/* LEVEL_05:0x17D190 -- initializes an object with a random angle in the global range and marks it active. */
typedef struct {
    float angle;
    int zero;
    float pi;
    char flag;
} Inner;

typedef struct {
    char pad0[0x30];
    Inner in;
} Aux;

typedef struct {
    char pad0[0x64];
    int flags;
} Flagged;

typedef struct {
    char pad0[0x45];
    unsigned char mode;
    unsigned char sub;
    char pad47[0x0D];
    Flagged **link;
    Aux *aux;
    char pad5C[8];
    int flags;
    int color;
    char pad6C[4];
    int pad70;
} Obj;

typedef struct {
    char pad0[0x2C];
    float hi;
    float lo;
} Range;

extern Range D_001F7658;
extern int rand(void);

void func_17D190(Obj *o)
{
    Aux *a;
    Inner *p;
    Flagged *f;
    Flagged **link;
    float lo;
    float span;

    link = o->link;
    a = o->aux;
    p = &a->in;
    p->zero = 0;
    p->flag = 0;
    lo = D_001F7658.lo;
    span = D_001F7658.hi - lo;
    a->in.angle = lo + span * ((float)rand() * 4.656613e-10f);
    p->pi = 3.1415927f;
    f = *link;
    if (f)
        f->flags = ((f->flags & ~0x10) | 0x8000000) & ~0x20;
    o->mode = 2;
    o->flags = (o->flags & ~0x20) | 0x8000000;
    o->color = 0xFFFFFF;
    o->sub = 0;
    o->pad70 = 0;
}
