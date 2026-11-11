/* LEVEL_08:0x204068 -- placement copy of LEVEL_04_1DD0F0.c: clears a status byte, calls a helper, then stores the owner link and reset values. */

float func_084B98(void *a0, int a1);

struct Ent {
    int w00;
    unsigned char pad04[10];
    unsigned char b0E;
    void *p10;
    int w14;
};

struct Sub {
    unsigned char pad00[0xCC];
    struct Ent ent;
    unsigned char pad0E4[0x10C - 0xE4];
    unsigned char b10C;
};

struct Obj {
    unsigned char pad00[0x58];
    struct Sub *sub;
};

void func_204068(struct Obj *o)
{
    struct Sub *s;
    struct Ent *e;

    s = o->sub;
    s->b10C = 0;
    func_084B98(o, 0);
    e = &s->ent;
    e->p10 = o;
    e->b0E = 2;
    e->w14 = 0;
    s->ent.w00 = 0;
}
