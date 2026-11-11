/* LEVEL_06:0x1B0C98 -- when the object is in state 6, returns whether its linked record is in mode 2. */
struct Child {
    char pad00[0x94];
    unsigned char b94;
};

struct Obj {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x12];
    struct Child *f58;
};

int func_1B0C98(struct Obj *o)
{
    struct Child *c = o->f58;

    if (o->b45 != 6) {
        return 0;
    }
    return c->b94 == 2;
}
