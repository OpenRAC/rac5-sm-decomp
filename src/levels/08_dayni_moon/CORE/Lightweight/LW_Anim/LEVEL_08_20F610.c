/* LEVEL_08:0x20F610 -- resets the pool: releases every entry that still holds references, then relinks all entries into a singly linked free list. */
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

extern Ent *D_003EB46C;
extern int D_003EB470;
extern Ent *D_003EB468;

extern void func_20F890(void *e);

void func_20F610(void)
{
    int i;
    Rec *r;
    Ent *p;
    Ent *base;
    Ent **head;
    int n;

    for (i = 0; i < D_003EB470; i++) {
        r = &D_003EB46C[i].rec;
        if (r->refs > 0) {
            func_20F890(r);
            r->refs = 0;
        }
    }
    head = &D_003EB468;
    n = D_003EB470;
    base = D_003EB46C;
    p = base;
    while (p != base + n - 1) {
        p->next = p + 1;
        p++;
    }
    base[n - 1].next = 0;
    *head = base;
}
