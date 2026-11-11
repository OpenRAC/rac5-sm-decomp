typedef struct {
    float v;
    char  pad[8];
} Ent;

typedef struct {
    char   pad[0x48];
    float *dst;
} Inner;

typedef struct {
    char   pad[0xE4];
    int    idx;
} Self;

typedef struct {
    Inner *inner;
} Head;

extern Ent D_0022A4E8[];

void func_173128(Self *s, float k)
{
    int i = s->idx;
    Ent *e;

    if (i == -1)
        return;

    e = (Ent *)((int)D_0022A4E8 + i * 12);
    ((Head *)s)->inner->dst[2] = k * e->v;
}
