/* LEVEL_05:0x1690D8 -- sets the object's mode bits to 2 in the field at +0x78 and runs func_16A5F0 unless the state byte is 4, in which case it reports 1. */
struct Obj {
    char pad0[0x45];
    unsigned char f45;
    char pad46[0x32];
    unsigned int f78;
};

extern int func_16A5F0(struct Obj *o);

int func_1690D8(struct Obj *o)
{
    o->f78 = (o->f78 & 0xFFF0FFFFu) | 0x20000u;
    if (o->f45 == 4)
        return 1;
    return func_16A5F0(o);
}
