/* LEVEL_10:0x084C70 -- true when the id at +0x54 is the 0xFFFF sentinel and the flag bit at +0x61 is clear. */
struct Obj {
    char pad00[0x54];
    unsigned short f54;
    char pad56[0xB];
    unsigned char b61;
};

int func_084C70(struct Obj *o)
{
    int t = o->f54;

    return (t ^ 0xFFFF) == 0 && ((o->b61 ^ 1) & 1);
}
