struct Holder_1CBA28 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_1CBA28 D_00398818;

void func_1CBA28(char *object)
{
    struct Holder_1CBA28 *holder = &D_00398818;
    *(char **)(object + 0x3C) = holder->current;
    holder->current = object;
}
