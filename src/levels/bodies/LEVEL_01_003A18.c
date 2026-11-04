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

extern Holder D_001EF254;

void func_003A18(Blk *src, int flag, float a, float b)
{
    D_001EF254.p->flags |= 0x40000;
    D_001EF254.p->blk = *src;
    D_001EF254.p->f25C = a;
    D_001EF254.p->f260 = b;
    if (flag)
        D_001EF254.p->flags &= ~0x20;
}
