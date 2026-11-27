/* LEVEL_05:0x169130 -- releases an object's table slot and unlinks it. */
typedef struct { char pad0[0x18]; unsigned char b18; char pad19[3]; } Ent;
typedef struct { Ent ents[12]; char pad150[8]; unsigned char cnt; } Tab;
typedef struct { char pad0[0x58]; Tab *tab; } C;
typedef struct { char pad0[0x2C]; C *c; } A;
typedef struct B { struct B *next; char pad4[0x10]; struct B *prev; char pad18[0x90 - 0x18]; unsigned char idx; } B;
typedef struct { char pad0[0x54]; A *a; B *b; char pad5C[8]; unsigned flags; } O;
extern void func_15FDA0(C *c, unsigned int idx);
extern void *memset(void *p, int v, unsigned n);
extern void func_018BF8(O *o);

void func_169130(O *o)
{
    B *b;
    A *a;
    Tab *t;
    Ent *e;

    a = o->a;
    b = o->b;
    if (b->idx != 0xFF) {
        if (a->c->tab->ents[b->idx].b18 & 1)
            func_15FDA0(a->c, b->idx);
        t = a->c->tab;
        e = &t->ents[b->idx];
        if (e->b18 & 1)
            t->cnt--;
        memset(e, 0, 0x1C);
        b->idx = 0xFF;
    }
    if (b->prev) {
        b->prev->next = b->next;
        if (b->next)
            b->next->prev = b->prev;
        b->prev = 0;
    }
    if (!(o->flags & 0x200000))
        func_018BF8(o);
}
