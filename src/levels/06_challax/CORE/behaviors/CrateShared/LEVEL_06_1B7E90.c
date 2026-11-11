struct Holder_1B7E90 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_1B7E90 D_00385238;

void func_1B7E90(char *object)
{
    struct Holder_1B7E90 *holder = &D_00385238;
    *(char **)(object + 0x3C) = holder->current;
    holder->current = object;
}
