/* LEVEL_01:0x04CCA0 -- when the linked block is ready, copies out one float, a 12-byte vector and a 24-byte vector and returns 1; returns 0 otherwise. */
typedef struct { int v[3]; } Vec12;
typedef struct { int v[6]; } Vec24;

typedef struct {
    char pad00[0x55];
    unsigned char ready;
    char pad56[0x64 - 0x56];
    float f;
} Sub;

typedef struct {
    char pad000[0x2DC];
    Sub sub;
    char pad344_[0x344 - 0x2DC - sizeof(Sub)];
    Vec12 a;
    Vec24 b;
} Blk;

typedef struct {
    char pad00[0x58];
    Blk **link;
} Obj;

int func_04CCA0(float *out_f, Vec12 *out_a, Vec24 *out_b, Obj *o)
{
    Blk *blk = *o->link;
    Blk *src = blk;
    Sub *p;

    if (blk == 0)
        return 0;
    p = &blk->sub;
    if (p->ready == 0)
        return 0;
    if (out_f != 0)
        *out_f = p->f;
    if (out_a != 0)
        *out_a = src->a;
    if (out_b != 0)
        *out_b = src->b;
    return 1;
}
