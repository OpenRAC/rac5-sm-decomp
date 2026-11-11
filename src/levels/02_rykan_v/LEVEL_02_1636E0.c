struct Halfword_1636E0 {
    char pad_00[0xC];
    unsigned short flags;
};

struct Child_1636E0 {
    char pad_00[0x48];
    struct Halfword_1636E0 record;
};

void func_1636E0(char *object, unsigned int mask, unsigned int bits)
{
    struct Child_1636E0 *child = *(struct Child_1636E0 **)(object + 0x58);
    struct Halfword_1636E0 *record = &child->record;
    record->flags = (record->flags & mask) | bits;
}
