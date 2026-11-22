/* LEVEL_10:0x088F40 -- reports whether bit 0 of the object's low flag byte and flag 4 are both set. */
struct Obj {
    char pad00[0x14];
    unsigned char b14;
};

int func_088F40(struct Obj *o)
{
    if (((o->b14 ^ 1) & 1) != 0 || (*(int *)((char *)o + 0x14) & 4) == 0) {
        return 0;
    }
    return 1;
}
