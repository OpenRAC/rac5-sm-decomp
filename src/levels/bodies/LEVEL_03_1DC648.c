struct Holder_1DC648 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_1DC648 D_003B3968;

void func_1DC648(char *object)
{
    struct Holder_1DC648 *holder = &D_003B3968;
    *(char **)(object + 0x3C) = holder->current;
    holder->current = object;
}
