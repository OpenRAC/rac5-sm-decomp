/* LEVEL_01:0x192548 -- sets bit 0x1000 in the object's flags, clears its byte at 0x45 and returns 1. */
typedef struct { char pad0[0x45]; unsigned char b45; char pad46[0x64 - 0x46]; unsigned int flags; } Obj;

int func_192548(Obj *o)
{
    o->flags |= 0x1000;
    o->b45 = 0;
    return 1;
}
