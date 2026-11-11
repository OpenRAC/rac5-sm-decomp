/* LEVEL_10:0x1AA360 -- returns one when a table entry of a twelve-item list matches the object's owner and has the marker byte seven, otherwise zero. */

struct Ref {
    unsigned char pad00[0x24];
    int w24;
};

struct Ent {
    unsigned char pad00[0x40];
    struct Ref *p40;
    unsigned char pad44;
    unsigned char b45;
};

struct Item {
    struct Ent *p00;
    unsigned char pad04[0x1C - 0x04];
};

struct Node {
    unsigned char pad00[0x58];
    struct Item *p58;
};

struct Sub {
    unsigned char pad00[0x30];
    struct Node *p30;
    unsigned char pad34[0x3C - 0x34];
    int w3C;
};

struct Obj {
    unsigned char pad00[0x40];
    struct Ref *p40;
    unsigned char pad44[0x54 - 0x44];
    struct Sub *p54;
};

int func_1AA360(struct Obj *a0)
{
    struct Sub *s;
    struct Node *n;
    struct Item *it;
    struct Ent *ent;
    unsigned int count;

    s = a0->p54;
    if (s->w3C == 0) {
        return 0;
    }
    n = s->p30;
    count = 0;
    it = n->p58;
    do {
        ent = it->p00;
        if (ent != 0) {
            if (ent->p40 == a0->p40 || ent->p40->w24 == (int)0xC036BEB8) {
                if (ent->b45 == 7) {
                    return 1;
                }
            }
        }
        count++;
        it++;
    } while (count < 12);
    return 0;
}
