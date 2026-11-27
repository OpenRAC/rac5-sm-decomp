/* LEVEL_23:0x074128 -- placement copy of LEVEL_01_07CD28.c: when the index is within the record's count, flips the object's pose toggle bit and starts the matching effect from the table entry for that index. */
typedef struct {
    char *entries;
    char pad04[4];
    unsigned char count;
} Set;

typedef struct {
    char pad00[8];
    Set *set;
    char pad0C[0x34 - 0xC];
} Rec;

typedef struct {
    char pad00[4];
    Rec *recs;
} Tab;

typedef struct {
    char pad00[8];
    float f08;
} Node;

typedef struct {
    char pad00[0x40];
    Tab *tab;
    unsigned char idx;
    char pad45[3];
    Node *node;
    char pad4C[0x18];
    union {
        unsigned int flags;
        struct {
            unsigned int lo : 8;
            int toggle : 1;
        } b;
    } w;
} Obj;

extern void func_079000(Obj *o);
extern void func_07EB28(float x, float y, Node *n, char *dst, char *src, int a, int b, int c, int d);

void func_074128(Obj *o, unsigned int idx, float x, int a, int b, float y)
{
    Set *s;

    s = o->tab->recs[o->idx].set;
    if (idx < s->count) {
        func_079000(o);
        o->w.b.toggle = !o->w.b.toggle;
        func_07EB28(x, y, o->node, (char *)o->node + 0x5C + ((o->w.flags >> 8) & 1) * 0x28, s->entries + idx * 64, a, b, 0, 0);
        o->node->f08 = 1.0f;
    }
}
