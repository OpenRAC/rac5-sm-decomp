/* LEVEL_21:0x13B030 -- placement copy of LEVEL_08_20F610.c: resets the pool: releases every entry that still holds references, then relinks all entries into a singly linked free list. */
typedef struct {
    char pad_00[0xC4];
    int refs;
    char pad_C8[0x2320 - 0xC8];
} Rec;

typedef struct Ent {
    struct Ent *next;
    char pad_04[0xC];
    Rec rec;
} Ent;

extern Ent *D_002F5394;
extern int D_002F5398;
extern Ent *D_002F5390;

extern void func_13B2B0(void *e);

void func_13B030(void)
{
    int i;
    Rec *r;
    Ent *p;
    Ent *base;
    Ent **head;
    int n;

    for (i = 0; i < D_002F5398; i++) {
        r = &D_002F5394[i].rec;
        if (r->refs > 0) {
            func_13B2B0(r);
            r->refs = 0;
        }
    }
    head = &D_002F5390;
    n = D_002F5398;
    base = D_002F5394;
    p = base;
    while (p != base + n - 1) {
        p->next = p + 1;
        p++;
    }
    base[n - 1].next = 0;
    *head = base;
}
