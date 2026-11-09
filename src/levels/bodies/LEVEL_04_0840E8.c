/* LEVEL_04:0x0840E8 -- placement copy of LEVEL_01_080CD8.c: clears an actor's state fields and restarts the attached sub-object. */
struct Entry {
    char pad0[4];
    int link;
    void **res;
    char pad1[0x28];
};

struct Table {
    int pad0;
    struct Entry *ent;
};

struct Sub {
    char pad0[0x5C];
    char node[0x78];
    int d4;
    int d8;
    int dc;
    int e0;
    int e4;
};

struct Actor {
    char pad0[0x40];
    struct Table *table;
    unsigned char idx;
    char pad1;
    unsigned char b46;
    unsigned char b47;
    struct Sub *sub;
    char pad2[0x18];
    unsigned int flags;
    char pad3[4];
    int w6c;
    int w70;
    unsigned short h74;
    unsigned char b76;
    unsigned char b77;
    unsigned char b78;
    unsigned char b79;
};

extern void func_08C238(struct Sub *s);
extern int func_08CEB8(void *r, void *node);
extern void func_08BE28(struct Sub *s, void *node, float f);

void func_0840E8(struct Actor *a)
{
    struct Sub *s;
    void *node;

    a->w70 = 0;
    a->b46 = 0;
    a->b78 = 0;
    a->b79 = 0;
    a->b47 = 0;
    a->h74 = 0;
    a->b77 = 0;
    a->b76 = 0;
    if (!a->table || !a->table->ent || !a->table->ent[a->idx].link)
        a->flags = (a->flags | 0x20) & ~0x40000;
    s = a->sub;
    if (s) {
        s->dc = 0;
        s->e0 = 0;
        node = s->node;
        s->d4 = 0;
        s->d8 = 0;
        s->e4 = 0;
        func_08C238(s);
        func_08CEB8(*a->table->ent[a->idx].res, node);
        func_08BE28(s, node, 0.0f);
    }
}
