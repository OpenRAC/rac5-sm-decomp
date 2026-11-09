/* LEVEL_01.REL:0x080CD8: reviewed 244-byte candidate, held for ABI review.
 * Clears an actor's state fields and restarts the attached sub-object.
 * pinned C with gnu-ee-trial links 244/244 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_089BE8 returning void with (int, pointer), but the accepted
 * LEVEL_01_089BE8.c defines it returning int with (pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Entry {
    char pad0[4];
    int link;
    int *res;
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

extern void func_088F68(struct Sub *s);
extern void func_089BE8(int r, void *node);
extern void func_088B20(struct Sub *s, void *node, float f);

void func_080CD8(struct Actor *a)
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
        func_088F68(s);
        func_089BE8(*a->table->ent[a->idx].res, node);
        func_088B20(s, node, 0.0f);
    }
}
