struct Halfword_15DAB8 {
    char pad_00[0xC];
    unsigned short flags;
};

struct Child_15DAB8 {
    char pad_00[0xB4];
    struct Halfword_15DAB8 record;
};

void func_15DAB8(char *object, unsigned int mask, unsigned int bits)
{
    struct Child_15DAB8 *child = *(struct Child_15DAB8 **)(object + 0x58);
    struct Halfword_15DAB8 *record = &child->record;
    record->flags = (record->flags & mask) | bits;
}
