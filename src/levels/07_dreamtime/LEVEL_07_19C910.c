/* LEVEL_07:0x19C910 -- lifts every listed item's linked body 12 units above the object's height, then counts the filled slots of the owner's twelve-entry table: with the object's flag clear it sets the flag when any slot is filled, with the flag set it resets the second object's value to 10 when no slot is filled. */
struct Inner {
    char pad00[0x34];
    float f34;
};

struct Mid {
    char pad00[0x18];
    struct Inner *f18;
};

struct Item {
    char pad00[0x54];
    struct Mid *f54;
};

struct Ent {
    int w00;
    char pad04[0x18];
};

struct Owner {
    char pad00[0x58];
    struct Ent *f58;
};

struct List {
    char pad00[8];
    struct Item *items[3];
    struct Owner *f14;
};

struct Obj {
    char pad00[0x34];
    float f34;
    char pad38[0xE];
    unsigned char b46;
};

struct Other {
    char pad00[0x10];
    float f10;
};

extern unsigned int D_0021D070[1];

void func_19C910(struct Obj *o, struct Other *p, struct List *l)
{
    unsigned int i;
    int n;
    int m;
    struct Ent *e;
    struct Ent *end;
    struct Ent *f;
    struct Ent *fend;

    for (i = 0; i < D_0021D070[0]; i++) {
        l->items[i]->f54->f18->f34 = o->f34 + 12.0f;
    }
    if (o->b46 == 0) {
        n = 0;
        e = l->f14->f58;
        end = e + 12;
        do {
            if (e->w00 != 0) {
                n = n + 1;
            }
            e++;
        } while (e < end);
        if (n != 0) {
            o->b46 = 1;
        }
    } else {
        m = 0;
        f = l->f14->f58;
        fend = f + 12;
        do {
            if (f->w00 != 0) {
                m = m + 1;
            }
            f++;
        } while (f < fend);
        if (m == 0) {
            p->f10 = 10.0f;
        }
    }
}
