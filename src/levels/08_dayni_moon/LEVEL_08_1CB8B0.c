/* LEVEL_08:0x1CB8B0 -- placement copy of LEVEL_04_1A4FC8.c: looks up the object's resource key in the trigger table and arms the matching trigger record. */

struct Ent1A4FC8 {
    char pad0[0x20];
    int key;
    char pad24[0x10];
};

struct Set1A4FC8 {
    char pad0[4];
    struct Ent1A4FC8 *ents;
};

struct Pair1A4FC8 {
    int a;
    int b;
};

struct Trig1A4FC8 {
    char pad0[0x18];
};

struct Sub1A4FC8 {
    char pad0[2];
    char b2;
    char pad3;
    struct Obj1A4FC8 *owner;
};

struct Rec1A4FC8 {
    struct Trig1A4FC8 *trig;
    int w4;
    unsigned short h8;
};

struct Obj1A4FC8 {
    char pad0[0x40];
    struct Set1A4FC8 *set;
    unsigned char idx;
    char pad45[0x13];
    struct Rec1A4FC8 *rec;
    char pad5C[8];
    unsigned int flags;
};

extern struct Pair1A4FC8 D_00272968[];
extern struct Trig1A4FC8 D_00272980[];

int func_1CB8B0(struct Obj1A4FC8 *o)
{
    struct Rec1A4FC8 *r;
    struct Sub1A4FC8 *sub;
    int key;
    unsigned int i;

    if (o->set == 0) {
        return 0;
    }
    key = o->set->ents[o->idx].key;
    for (i = 0; i < 3; i++) {
        if (D_00272968[i].a == key || D_00272968[i].b == key) {
            break;
        }
    }
    if (i == 3) {
        return 0;
    }
    r = o->rec;
    r->w4 = 1;
    r->trig = &D_00272980[i];
    sub = (struct Sub1A4FC8 *)&r->h8;
    sub->b2 = 2;
    sub->owner = o;
    r->h8 = 0xFFFF;
    o->flags |= 0x80000;
    return 1;
}
