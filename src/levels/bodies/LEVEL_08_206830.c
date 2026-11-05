struct Holder_206830 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_206830 D_003EB250;

void func_206830(char *object)
{
    struct Holder_206830 *holder = &D_003EB250;
    *(char **)(object + 0x3C) = holder->current;
    holder->current = object;
}
