/* LEVEL_03:0x18EC20 -- maps a small status byte to one of four result codes; any other value gives zero. */

struct Obj {
    unsigned char pad0[0x46];
    unsigned char b46;
};

int func_18EC20(struct Obj *o)
{
    switch (o->b46) {
    case 0:
        return 6;
    case 1:
        return 2;
    case 2:
        return 6;
    case 3:
        return 3;
    default:
        return 0;
    }
}
