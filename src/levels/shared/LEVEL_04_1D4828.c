/* LEVEL_04:0x1D4828 -- sets flag bits 4 and 5 of every item in three linked lists to the inverse of the record's toggle byte; returns 1. */
typedef struct {
    char pad00[0x64];
    int flags;
} Item;

typedef struct {
    Item *a[16];
    Item *b[4];
    Item *c[4];
} Lists;

typedef struct {
    char pad00[0x46];
    unsigned char toggle;
    unsigned char na;
    unsigned char nb;
    unsigned char nc;
} Rec;

typedef struct {
    char pad00[0x54];
    Lists *lists;
    Rec *rec;
} Obj;

int func_1D4828(Obj *o)
{
    Rec *rec = o->rec;
    Lists *l = o->lists;
    int on = rec->toggle ^ 1;
    unsigned int i;

    for (i = 0; i < rec->na; i++) {
        l->a[i]->flags = (l->a[i]->flags & ~0x20) | ((on & 1) << 5);
        l->a[i]->flags = (l->a[i]->flags & ~0x10) | ((on & 1) << 4);
    }
    for (i = 0; i < rec->nb; i++) {
        l->b[i]->flags = (l->b[i]->flags & ~0x20) | ((on & 1) << 5);
        l->b[i]->flags = (l->b[i]->flags & ~0x10) | ((on & 1) << 4);
    }
    for (i = 0; i < rec->nc; i++) {
        l->c[i]->flags = (l->c[i]->flags & ~0x20) | ((on & 1) << 5);
        l->c[i]->flags = (l->c[i]->flags & ~0x10) | ((on & 1) << 4);
    }
    return 1;
}
