/* LEVEL_24:0x16F2F8 -- placement copy of LEVEL_04_198ED8.c: clears the 0x50-byte sub-record and, when the link record is set, copies the default vector into it, sets the mode and hands two of its fields to the helper; returns whether it ran. */
extern void *memset(void *p, int c, unsigned int n);

typedef struct {
    float x, y, z;
} Vec3_t;

typedef struct {
    int w0;
    int w4;
} Link;

typedef struct {
    char pad0[0x34];
    Vec3_t pos;
    char pad40[4];
    int mode;
} Sub;

typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0xE];
    Link *link;
    Sub *sub;
} Obj;

extern Vec3_t D_001E8BF8;
extern void func_07E408(int a, char *b, char *c);

int func_16F2F8(Obj *o)
{
    Sub *s = o->sub;
    Link *l = o->link;
    Vec3_t *q;
    Vec3_t *v;

    memset(s, 0, 0x50);
    if (l->w0 == 0)
        return 0;
    q = &s->pos;
    v = &D_001E8BF8;
    s->pos.x = D_001E8BF8.x;
    q->y = v->y;
    q->z = v->z;
    s->mode = 5;
    func_07E408(l->w4, (char *)s + 0x14, (char *)s + 0x24);
    o->b45 = 0;
    return 1;
}
