/* LEVEL_05:0x18B318 -- when the owner's flag is set, unlinks the record's embedded node (moving its link word into the stored neighbour), then releases the attached item. */
struct Node {
    int w00;
    char pad04[0x10];
    struct Node *p14;
};

struct Rec {
    unsigned int w00;
    char pad04[0x10];
    struct Node *p14;
    char pad18[0xC];
    char *item;
};

struct Owner {
    char pad00[0x2C];
    unsigned char b2C;
};

struct Obj {
    char pad00[0x54];
    struct Owner *owner;
    struct Rec *rec;
};

extern void func_07E1D8(char *record);

void func_18B318(struct Obj *o)
{
    struct Rec *rec;
    struct Node *p;
    struct Node *q;

    rec = o->rec;
    if (o->owner->b2C != 0) {
        p = rec->p14;
        if (p != 0) {
            p->w00 = rec->w00;
            q = (struct Node *)rec->w00;
            if (q == 0) {
                rec->p14 = 0;
            } else {
                q->p14 = rec->p14;
                rec->p14 = 0;
            }
        }
    }
    if (rec->item != 0) {
        func_07E1D8(rec->item);
        rec->item = 0;
    }
}
