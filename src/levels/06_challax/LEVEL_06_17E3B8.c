/* LEVEL_06:0x17E3B8 -- clears the object's counter, relocates the record's six offset words on the global base (marking each slot) and validates the record's link: returns 1 when its target is valid, else clears it and returns 0. */
extern int D_001F5994;

typedef struct Rec {
    char pad00[0x18];
    int words[6];
    int link;
    int pad34;
    char flags[6];
} Rec;

typedef struct Obj {
    char pad00[0x54 - 0];
    Rec *rec;
} Obj;

int func_17E3B8(Obj *o)
{
    Rec *r;
    unsigned int i;
    int t;
    int v;

    *(int *)((char *)o + 0x70) = 0;
    r = o->rec;
    for (i = 0; i < 6; i++) {
        if (r->words[i] != 0) {
            r->words[i] = D_001F5994 + r->words[i];
        }
        r->flags[i] = 1;
    }
    v = r->link;
    if (v == 0) {
        return 0;
    }
    t = D_001F5994 + v;
    if (*(int *)(t + 0x40) != 0) {
        r->link = t;
        return 1;
    }
    r->link = 0;
    return 0;
}
