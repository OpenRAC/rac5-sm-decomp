/* LEVEL_10:0x145C18 -- sets two flag bits and the 0x14 counter byte of the object and returns 1. */
struct Obj {
    char pad00[0x74];
    unsigned short f74;
    char pad76;
    unsigned char b77;
};

int func_145C18(struct Obj *o)
{
    o->f74 |= 0xC;
    o->b77 = 0x14;
    return 1;
}
