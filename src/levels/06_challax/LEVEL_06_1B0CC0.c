/* LEVEL_06:0x1B0CC0 -- when the object is past state 1, returns whether its linked record's word at +0x10 is zero. */
struct Child {
    char pad00[0x10];
    int w10;
};

struct Obj {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x12];
    struct Child *f58;
};

int func_1B0CC0(struct Obj *o)
{
    struct Child *c = o->f58;

    if (o->b45 >= 2) {
        return c->w10 == 0;
    }
    return 0;
}
