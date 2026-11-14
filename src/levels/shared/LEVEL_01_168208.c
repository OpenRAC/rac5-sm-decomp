/* LEVEL_01:0x168208 -- clears a word of the object and returns 1. */
struct Obj {
    char pad00[0x70];
    int w70;
};

int func_168208(struct Obj *o)
{
    o->w70 = 0;
    return 1;
}
