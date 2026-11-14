/* LEVEL_01:0x15D420 -- relocates the leading run of non-empty offset words of the object's record on the global base, clearing a flag byte for each; returns 1. */
extern int D_00206D94;

struct Rec {
    int words[0x50];
    unsigned char flags[8];
    unsigned int count;
};

struct Obj {
    char pad00[0x54];
    struct Rec *rec;
};

int func_15D420(struct Obj *o)
{
    struct Rec *r = o->rec;
    int ok;

    r->count = 0;
    while (r->count < 8) {
        if (r->words[r->count] == 0) {
            ok = 0;
        } else {
            r->words[r->count] = D_00206D94 + r->words[r->count];
            ok = 1;
        }
        if (!ok)
            break;
        r->flags[r->count] = 0;
        r->count++;
    }
    return 1;
}
