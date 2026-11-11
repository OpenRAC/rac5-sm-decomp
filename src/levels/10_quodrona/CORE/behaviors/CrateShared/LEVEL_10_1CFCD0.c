struct Holder_1CFCD0 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_1CFCD0 D_003A1F20;

void func_1CFCD0(char *object)
{
    struct Holder_1CFCD0 *holder = &D_003A1F20;
    *(char **)(object + 0x3C) = holder->current;
    holder->current = object;
}
