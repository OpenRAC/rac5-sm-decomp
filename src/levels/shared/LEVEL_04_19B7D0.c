/* LEVEL_04:0x19B7D0 -- returns whether the object's state byte is zero. */
struct Obj {
    char pad00[0x45];
    unsigned char b45;
};

int func_19B7D0(struct Obj *o)
{
    return o->b45 == 0;
}
