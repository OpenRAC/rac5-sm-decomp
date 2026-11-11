typedef struct {
    int a;
    int b;
    int c;
} Blk;

typedef struct {
    char              pad0[0x40];
    unsigned long long flags;
    char              pad1[0x208];
    Blk               blk;
    float             f25C;
    float             f260;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_001BFED4;

void func_003820(Blk *src, int flag, float a, float b)
{
    D_001BFED4.p->flags |= 0x40000;
    D_001BFED4.p->blk = *src;
    D_001BFED4.p->f25C = a;
    D_001BFED4.p->f260 = b;
    if (flag)
        D_001BFED4.p->flags &= ~0x20;
}
