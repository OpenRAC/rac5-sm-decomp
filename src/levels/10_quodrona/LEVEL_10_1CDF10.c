/* LEVEL_10:0x1CDF10 -- runs the setup for the object's record, installs the shared table in its owner's record, sets the countdown byte and returns 1. */
struct Obj {
    char pad00[0x48];
    char *owner;
    char pad4C[0xC];
    char *rec;
    char pad5C[0x1B];
    unsigned char b77;
};

extern void func_12D0D8(char *record);
extern char D_001CE328[];

int func_1CDF10(struct Obj *o)
{
    func_12D0D8(o->rec);
    *(char **)(o->owner + 0xDC) = D_001CE328;
    o->b77 = 20;
    return 1;
}
